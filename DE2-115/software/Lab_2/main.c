#include <system.h>
#include <altera_avalon_pio_regs.h>
#include <stdio.h>
#include "sccharts.h"

int main()
{
    TickData data;

    reset(&data);

    while (1)
    {
        /* A = Key 2 */
        /* B = Key 1 */
        /* R = Key 0 */
        /* Keys are active low */

        data.A = !(IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE) & 0x4);
        data.B = !(IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE) & 0x2);
        data.R = !(IORD_ALTERA_AVALON_PIO_DATA(KEYS_BASE) & 0x1);

        tick(&data);

        IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, data.O);
    }

    return 0;
}
