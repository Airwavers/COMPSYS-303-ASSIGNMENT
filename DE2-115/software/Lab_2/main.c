#include <stdint.h>
#include <system.h>

#include <sys/alt_irq.h>
#include <altera_avalon_timer_regs.h>
#include <altera_avalon_pio_regs.h>

#include "sccharts.h"

/* Use Timer 1 so we do not interfere with the HAL system timer. */
#define TRAFFIC_TIMER_BASE TIMER_1_BASE
#define TRAFFIC_TIMER_IRQ  TIMER_1_IRQ
#define TRAFFIC_TIMER_ICID TIMER_1_IRQ_INTERRUPT_CONTROLLER_ID
#define NS_BUTTON_MASK 0x04u  /* KEY2 */
#define EW_BUTTON_MASK 0x02u  /* KEY1 */

/* Timer 1 is configured for a 1 ms period at 50 MHz. */
#define TIMER_PERIOD_COUNTS 50000u

static volatile uint32_t pending_ticks = 0;
static uint8_t ns_press_pending = 0;
static uint8_t ew_press_pending = 0;

/*
 * Timer interrupt service routine.
 * Each interrupt represents one timer event.
 */
static void timer_isr(void *context)
{
    (void)context;

    /* Clear the timer interrupt. */
    IOWR_ALTERA_AVALON_TIMER_STATUS(TRAFFIC_TIMER_BASE, 0);

    pending_ticks++;
}

/*
 * Write the SCChart outputs to the DE2-115 LEDs.
 *
 * TODO: Fill in the LED bit positions using your assignment's Table 1.
 * Do not assume the signal names correspond directly to physical LED colours.
 */
static void update_leds(const TickData *data)
{
    uint32_t red_leds = 0;
    uint32_t green_leds = 0;

    /* North-South vehicle lights */
    if (data->NS_red)
        red_leds |= (1u << 0);

    if (data->NS_yellow)
        red_leds |= (1u << 1);

    if (data->NS_green)
        green_leds |= (1u << 0);

    /* East-West vehicle lights */
    if (data->EW_red)
        red_leds |= (1u << 2);

    if (data->EW_yellow)
        red_leds |= (1u << 3);

    if (data->EW_green)
        green_leds |= (1u << 1);

    /* North-South pedestrian lights */
    if (data->NS_ped_red)
        red_leds |= (1u << 4);

    if (data->NS_ped_green)
        green_leds |= (1u << 2);

    /* East-West pedestrian lights */
    if (data->EW_ped_red)
        red_leds |= (1u << 5);

    if (data->EW_ped_green)
        green_leds |= (1u << 3);

    IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, red_leds);
    IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, green_leds);
}

int main(void)
{
    TickData data;

    /* Initialize the generated SCChart. */
    reset(&data);

    /*
     * Execute the initial chart reaction so the initial state
     * and its entry actions can initialize the outputs.
     */
    data.tick = 0;
    data.NSraised = 0;
    data.EWraised = 0;

    tick(&data);
    update_leds(&data);

    /* Stop Timer 1 while configuring it. */
    IOWR_ALTERA_AVALON_TIMER_CONTROL(
        TRAFFIC_TIMER_BASE, 0
    );

    /* Set the timer period to 50,000 clock counts = 1 ms. */
    IOWR_ALTERA_AVALON_TIMER_PERIODL(
        TRAFFIC_TIMER_BASE,
        TIMER_PERIOD_COUNTS - 1u
    );

    IOWR_ALTERA_AVALON_TIMER_PERIODH(
        TRAFFIC_TIMER_BASE,
        (TIMER_PERIOD_COUNTS - 1u) >> 16
    );

    /* Clear any pending timer interrupt. */
    IOWR_ALTERA_AVALON_TIMER_STATUS(
        TRAFFIC_TIMER_BASE, 0
    );

    /* Register the interrupt service routine. */
    if (alt_ic_isr_register(
            TRAFFIC_TIMER_ICID,
            TRAFFIC_TIMER_IRQ,
            timer_isr,
            NULL,
            NULL) != 0)
    {
        return 1;
    }

    /* Start Timer 1 in continuous mode with interrupts enabled. */
    IOWR_ALTERA_AVALON_TIMER_CONTROL(
        TRAFFIC_TIMER_BASE,
        ALTERA_AVALON_TIMER_CONTROL_CONT_MSK |
        ALTERA_AVALON_TIMER_CONTROL_ITO_MSK |
        ALTERA_AVALON_TIMER_CONTROL_START_MSK
    );

    uint32_t previous_keys =
        IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);

    while (1)
    {
        uint32_t keys;
        uint32_t process_tick = 0;
        alt_irq_context irq_context;

        /* Read the physical buttons. */
        keys = IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE);

        /* Remember each new active-low button press. */
        if (((keys & NS_BUTTON_MASK) == 0u) &&
            ((previous_keys & NS_BUTTON_MASK) != 0u))
        {
            ns_press_pending = 1;
        }

        if (((keys & EW_BUTTON_MASK) == 0u) &&
            ((previous_keys & EW_BUTTON_MASK) != 0u))
        {
            ew_press_pending = 1;
        }

        previous_keys = keys;

        /* Safely remove one pending timer event. */
        irq_context = alt_irq_disable_all();

        if (pending_ticks > 0)
        {
            pending_ticks--;
            process_tick = 1;
        }

        alt_irq_enable_all(irq_context);

        if (process_tick)
        {
            /* Deliver any remembered button press to the chart. */
            data.NSraised = ns_press_pending;
            data.EWraised = ew_press_pending;
            data.tick = 1;

            tick(&data);

            /* Clear input pulses after the chart has processed them. */
            data.tick = 0;
            data.NSraised = 0;
            data.EWraised = 0;

            ns_press_pending = 0;
            ew_press_pending = 0;

            update_leds(&data);
        }
    }

    return 0;
}
