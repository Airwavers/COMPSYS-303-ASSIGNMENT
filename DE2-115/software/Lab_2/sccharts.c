/*
 * sccharts.c
 *
 *  Created on: 1/10/2026
 *      Author: esin806
 */


/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "sccharts.h"

/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

void VersionA_Task3__VersionA_Task3_local__effect2(TickData* d) {
  if (d->new_packet) {
    d->new_packet = 0;
    d->packet_error = 0;
    d->config_pending = 0;
    d->config_ready = 0;
  }
  if (d->rx_char >= 48 && d->rx_char <= 57) {
    if (d->digit_count < 4) {
      d->current_value *= 10;
      d->current_value += d->rx_char - 48;
      d->digit_count += 1;
    } else {
      d->packet_error = 1;
    }
  }
  if (d->rx_char == 44) {
    if (d->digit_count >= 1 && d->digit_count <= 4 && !d->packet_error && d->value_count < 5) {
      if (d->value_count == 0) {
        d->new_t1 = d->current_value;
      }
      if (d->value_count == 1) {
        d->new_t2 = d->current_value;
      }
      if (d->value_count == 2) {
        d->new_t3 = d->current_value;
      }
      if (d->value_count == 3) {
        d->new_t4 = d->current_value;
      }
      if (d->value_count == 4) {
        d->new_t5 = d->current_value;
      }
      d->value_count += 1;
      d->current_value = 0;
      d->digit_count = 0;
    } else {
      d->packet_error = 1;
    }
  }
  if (d->rx_char == 10) {
    if (d->value_count == 5 && d->digit_count >= 1 && d->digit_count <= 4 && !d->packet_error) {
      d->new_t6 = d->current_value;
      d->config_ready = 1;
      d->config_pending = 1;
    } else {
      d->packet_error = 1;
    }
    d->current_value = 0;
    d->digit_count = 0;
    d->value_count = 0;
    d->new_packet = 1;
  }
}

void logic(TickData* d) {
  d->_g5 = d->_pg93;
  d->_g8_e1 = !d->_g5;
  d->_g11 = d->_pg93_e1;
  d->_cg11 = d->EW_done;
  d->_g12 = d->_g11 && d->_cg11;
  if (d->_g12) {
    d->_Atrig = 1;
  }
  d->_cg5 = d->tick;
  d->_g6 = d->_g5 && d->_cg5;
  if (d->_g6) {
    d->elapsed += 1;
  }
  d->_g14 = d->_g11 && !d->_cg11;
  d->_cg14 = d->elapsed >= d->t1;
  d->_g15 = d->_g14 && d->_cg14;
  if (d->_g15) {
    d->_Atrig1 = 1;
  }
  d->_g5 = d->_g6 || (d->_g5 && !d->_cg5);
  d->_cg7 = d->_Atrig || d->_Atrig1;
  d->_g6 = d->_g5 && d->_cg7;
  d->_g11 = !d->_g11;
  d->_g15 = d->_g12 || d->_g15;
  d->_g12 = (d->_g8_e1 || d->_g6) && (d->_g11 || d->_g15) && (d->_g6 || d->_g15);
  d->_cg16 = d->_Atrig;
  d->_g8 = d->_g12 && d->_cg16;
  if (d->_g8) {
    d->EW_done = 0;
  }
  d->_g8_e1 = d->_pg80;
  d->_g13_e2 = !d->_g8_e1;
  d->_cg105 = d->tick;
  d->_g13 = d->_g8_e1 && d->_cg105;
  if (d->_g13) {
    d->elapsed += 1;
  }
  d->_g111 = d->_pg85;
  d->_cg111 = d->elapsed >= 4000;
  d->_g112 = d->_g111 && d->_cg111;
  if (d->_g112) {
    d->_Atrig11 = 1;
  }
  d->_g105 = d->_g13 || (d->_g8_e1 && !d->_cg105);
  d->_cg107 = d->_Atrig11;
  d->_g106 = d->_g105 && d->_cg107;
  d->_g112_e2 = !d->_g111;
  d->_g112 = (d->_g13_e2 || d->_g106) && (d->_g112_e2 || d->_g112) && (d->_g106 || d->_g112);
  if (d->_g112) {
    d->elapsed = 0;
    d->EW_done = 1;
  }
  d->_g112_e2 = d->_pg84;
  d->_g108 = !d->_g112_e2;
  d->_g108_e1 = d->_pg87;
  d->_cg131 = d->EW_done;
  d->_g126 = d->_GO || (d->_g108_e1 && d->_cg131);
  if (d->_g126) {
    d->EW_request = 0;
  }
  d->_g128 = d->_pg99;
  d->_g129 = d->_g128 && d->EWraised;
  if (d->_g129) {
    d->EW_request = 1;
  }
  d->_g96 = d->_pg84_e2;
  d->_cg96 = d->EW_request;
  d->_g97 = d->_g96 && d->_cg96;
  if (d->_g97) {
    d->_Atrig9 = 1;
  }
  d->_cg90 = d->tick;
  d->_g91 = d->_g112_e2 && d->_cg90;
  if (d->_g91) {
    d->elapsed += 1;
  }
  d->_g99 = d->_g96 && !d->_cg96;
  d->_cg99 = d->elapsed >= d->t6 && !d->EW_request;
  d->_g100 = d->_g99 && d->_cg99;
  if (d->_g100) {
    d->_Atrig10 = 1;
  }
  d->_g91 = d->_g91 || (d->_g112_e2 && !d->_cg90);
  d->_cg92 = d->_Atrig9 || d->_Atrig10;
  d->_g90 = d->_g91 && d->_cg92;
  d->_g96 = !d->_g96;
  d->_g97 = d->_g97 || d->_g100;
  d->_g100 = (d->_g108 || d->_g90) && (d->_g96 || d->_g97) && (d->_g90 || d->_g97);
  d->_cg101 = d->_Atrig9;
  d->_g98 = d->_g100 && !d->_cg101;
  if (d->_g98) {
    d->elapsed = 0;
  }
  d->_g98_e2 = d->_GO || d->_g8 || d->_g112 || d->_g98;
  if (d->_g98_e2) {
    d->elapsed = 0;
    d->NS_red = 0;
    d->NS_yellow = 0;
    d->NS_green = 1;
    d->EW_red = 1;
    d->EW_yellow = 0;
    d->EW_green = 0;
    d->NS_ped_red = 1;
    d->NS_ped_green = 0;
    d->EW_ped_red = 1;
    d->EW_ped_green = 0;
    d->_Atrig = 0;
    d->_Atrig1 = 0;
  }
  d->_cg3 = d->_Atrig || d->_Atrig1;
  d->_g93 = (d->_g98_e2 && !d->_cg3) || (d->_g5 && !d->_cg7);
  d->_g93_e1 = d->_g98_e2 || (d->_g14 && !d->_cg14);
  d->_g113 = d->_g12 && !d->_cg16;
  if (d->_g113) {
    d->elapsed = 0;
    d->elapsed = 0;
    d->NS_red = 0;
    d->NS_yellow = 1;
    d->NS_green = 0;
    d->EW_red = 1;
    d->EW_yellow = 0;
    d->EW_green = 0;
    d->NS_ped_red = 1;
    d->NS_ped_green = 0;
    d->EW_ped_red = 1;
    d->EW_ped_green = 0;
    d->_Atrig2 = 0;
  }
  d->_cg19 = d->_Atrig2;
  d->_g17 = d->_pg16;
  d->_cg21 = d->tick;
  d->_g114 = d->_g17 && d->_cg21;
  if (d->_g114) {
    d->elapsed += 1;
  }
  d->_g7 = d->_pg23;
  d->_cg27 = d->elapsed >= d->t2;
  d->_g14 = d->_g7 && d->_cg27;
  if (d->_g14) {
    d->_Atrig2 = 1;
  }
  d->_g2 = d->_g114 || (d->_g17 && !d->_cg21);
  d->_cg23 = d->_Atrig2;
  d->_g16 = (d->_g113 && !d->_cg19) || (d->_g2 && !d->_cg23);
  d->_g22 = d->_g2 && d->_cg23;
  d->_g23 = d->_g113 || (d->_g7 && !d->_cg27);
  d->_g18 = !d->_g17;
  d->_g21 = !d->_g7;
  d->_g27 = (d->_g18 || d->_g22) && (d->_g21 || d->_g14) && (d->_g22 || d->_g14);
  if (d->_g27) {
    d->elapsed = 0;
    d->elapsed = 0;
    d->NS_red = 1;
    d->NS_yellow = 0;
    d->NS_green = 0;
    d->EW_red = 1;
    d->EW_yellow = 0;
    d->EW_green = 0;
    d->NS_ped_red = 1;
    d->NS_ped_green = 0;
    d->EW_ped_red = 1;
    d->EW_ped_green = 0;
  }
  d->_g28_e2 = d->_pg107;
  d->_g28 = d->_g28_e2 && d->rx_available;
  if (d->_g28) {
    VersionA_Task3__VersionA_Task3_local__effect2(d);
  }
  d->_cg29 = d->config_pending;
  d->_g24_e1 = d->_g27 && d->_cg29;
  if (d->_g24_e1) {
    d->t1 = d->new_t1;
    d->t2 = d->new_t2;
    d->t3 = d->new_t3;
    d->t4 = d->new_t4;
    d->t5 = d->new_t5;
    d->t6 = d->new_t6;
  }
  d->_g24 = d->_g24_e1 || (d->_g27 && !d->_cg29);
  if (d->_g24) {
    d->_Atrig3 = 0;
    d->_Atrig4 = 0;
  }
  d->_cg32 = d->_Atrig3 || d->_Atrig4;
  d->_g30 = d->_pg37;
  d->_g29 = !d->_g30;
  d->_cg49 = d->tick;
  d->_g50 = d->_g30 && d->_cg49;
  if (d->_g50) {
    d->elapsed += 1;
  }
  d->_g55 = d->_pg42;
  d->_cg55 = d->elapsed >= 4000;
  d->_g56 = d->_g55 && d->_cg55;
  if (d->_g56) {
    d->_Atrig5 = 1;
  }
  d->_g49 = d->_g50 || (d->_g30 && !d->_cg49);
  d->_cg51 = d->_Atrig5;
  d->_g50 = d->_g49 && d->_cg51;
  d->_g56_e2 = !d->_g55;
  d->_g52_e1 = (d->_g29 || d->_g50) && (d->_g56_e2 || d->_g56) && (d->_g50 || d->_g56);
  if (d->_g52_e1) {
    d->elapsed = 0;
    d->NS_done = 1;
  }
  d->_g52 = d->_pg51;
  d->_g56_e2 = !d->_g52;
  d->_g56 = d->_pg55;
  d->_cg67 = d->NS_done;
  d->_g68 = d->_g56 && d->_cg67;
  if (d->_g68) {
    d->_Atrig6 = 1;
  }
  d->_cg61 = d->tick;
  d->_g62 = d->_g52 && d->_cg61;
  if (d->_g62) {
    d->elapsed += 1;
  }
  d->_g70 = d->_g56 && !d->_cg67;
  d->_cg70 = d->elapsed >= d->t4;
  d->_g71 = d->_g70 && d->_cg70;
  if (d->_g71) {
    d->_Atrig7 = 1;
  }
  d->_g62 = d->_g62 || (d->_g52 && !d->_cg61);
  d->_cg63 = d->_Atrig6 || d->_Atrig7;
  d->_g61 = d->_g62 && d->_cg63;
  d->_g67 = !d->_g56;
  d->_g68 = d->_g68 || d->_g71;
  d->_g71 = (d->_g56_e2 || d->_g61) && (d->_g67 || d->_g68) && (d->_g61 || d->_g68);
  d->_cg72 = d->_Atrig6;
  d->_g64_e1 = d->_g71 && d->_cg72;
  if (d->_g64_e1) {
    d->NS_done = 0;
  }
  d->_g64 = d->_pg92;
  d->_cg123 = d->NS_done;
  d->_g69_e2 = d->_GO || (d->_g64 && d->_cg123);
  if (d->_g69_e2) {
    d->NS_request = 0;
  }
  d->_g69 = d->_pg86;
  d->_g121 = d->_g69 && d->NSraised;
  if (d->_g121) {
    d->NS_request = 1;
  }
  d->_g40 = d->_pg31;
  d->_cg40 = d->NS_request;
  d->_g41 = d->_g40 && d->_cg40;
  if (d->_g41) {
    d->_Atrig3 = 1;
  }
  d->_g34 = d->_pg33;
  d->_cg34 = d->tick;
  d->_g35 = d->_g34 && d->_cg34;
  if (d->_g35) {
    d->elapsed += 1;
  }
  d->_g43 = d->_g40 && !d->_cg40;
  d->_cg43 = d->elapsed >= d->t3 && !d->NS_request;
  d->_g44 = d->_g43 && d->_cg43;
  if (d->_g44) {
    d->_Atrig4 = 1;
  }
  d->_g35 = d->_g35 || (d->_g34 && !d->_cg34);
  d->_cg36 = d->_Atrig3 || d->_Atrig4;
  d->_g33 = (d->_g24 && !d->_cg32) || (d->_g35 && !d->_cg36);
  d->_g36 = d->_g35 && d->_cg36;
  d->_g31 = d->_g24 || (d->_g43 && !d->_cg43);
  d->_g43 = d->_g41 || d->_g44;
  d->_g44 = !d->_g34;
  d->_g41 = !d->_g40;
  d->_g34 = (d->_g44 || d->_g36) && (d->_g41 || d->_g43) && (d->_g36 || d->_g43);
  d->_cg45 = d->_Atrig3;
  d->_g40 = d->_g34 && d->_cg45;
  if (d->_g40) {
    d->elapsed = 0;
    d->elapsed = 0;
    d->NS_red = 1;
    d->NS_yellow = 0;
    d->NS_green = 0;
    d->EW_red = 1;
    d->EW_yellow = 0;
    d->EW_green = 0;
    d->NS_ped_red = 0;
    d->NS_ped_green = 1;
    d->EW_ped_red = 1;
    d->EW_ped_green = 0;
    d->_Atrig5 = 0;
  }
  d->_cg47 = d->_Atrig5;
  d->_g37 = (d->_g40 && !d->_cg47) || (d->_g49 && !d->_cg51);
  d->_g42 = d->_g40 || (d->_g55 && !d->_cg55);
  d->_g37_e1 = d->_g34 && !d->_cg45;
  if (d->_g37_e1) {
    d->elapsed = 0;
  }
  d->_g42_e2 = d->_g52_e1 || d->_g64_e1 || d->_g37_e1;
  if (d->_g42_e2) {
    d->elapsed = 0;
    d->NS_red = 1;
    d->NS_yellow = 0;
    d->NS_green = 0;
    d->EW_red = 0;
    d->EW_yellow = 0;
    d->EW_green = 1;
    d->NS_ped_red = 1;
    d->NS_ped_green = 0;
    d->EW_ped_red = 1;
    d->EW_ped_green = 0;
    d->_Atrig6 = 0;
    d->_Atrig7 = 0;
  }
  d->_cg59 = d->_Atrig6 || d->_Atrig7;
  d->_g51 = (d->_g42_e2 && !d->_cg59) || (d->_g62 && !d->_cg63);
  d->_g55 = d->_g42_e2 || (d->_g70 && !d->_cg70);
  d->_g46 = d->_g71 && !d->_cg72;
  if (d->_g46) {
    d->elapsed = 0;
    d->elapsed = 0;
    d->NS_red = 1;
    d->NS_yellow = 0;
    d->NS_green = 0;
    d->EW_red = 0;
    d->EW_yellow = 1;
    d->EW_green = 0;
    d->NS_ped_red = 1;
    d->NS_ped_green = 0;
    d->EW_ped_red = 1;
    d->EW_ped_green = 0;
    d->_Atrig8 = 0;
  }
  d->_cg75 = d->_Atrig8;
  d->_g45 = d->_pg70;
  d->_cg77 = d->tick;
  d->_g73 = d->_g45 && d->_cg77;
  if (d->_g73) {
    d->elapsed += 1;
  }
  d->_g57 = d->_pg72;
  d->_cg83 = d->elapsed >= d->t5;
  d->_g115 = d->_g57 && d->_cg83;
  if (d->_g115) {
    d->_Atrig8 = 1;
  }
  d->_g63 = d->_g73 || (d->_g45 && !d->_cg77);
  d->_cg79 = d->_Atrig8;
  d->_g70 = (d->_g46 && !d->_cg75) || (d->_g63 && !d->_cg79);
  d->_g58 = d->_g63 && d->_cg79;
  d->_g72 = d->_g46 || (d->_g57 && !d->_cg83);
  d->_g78 = !d->_g45;
  d->_g79 = !d->_g57;
  d->_g74 = (d->_g78 || d->_g58) && (d->_g79 || d->_g115) && (d->_g58 || d->_g115);
  if (d->_g74) {
    d->elapsed = 0;
    d->elapsed = 0;
    d->NS_red = 1;
    d->NS_yellow = 0;
    d->NS_green = 0;
    d->EW_red = 1;
    d->EW_yellow = 0;
    d->EW_green = 0;
    d->NS_ped_red = 0;
    d->NS_ped_green = 0;
    d->EW_ped_red = 0;
    d->EW_ped_green = 0;
  }
  d->_cg85 = d->config_pending;
  d->_g77 = d->_g74 && d->_cg85;
  if (d->_g77) {
    d->t1 = d->new_t1;
    d->t2 = d->new_t2;
    d->t3 = d->new_t3;
    d->t4 = d->new_t4;
    d->t5 = d->new_t5;
    d->t6 = d->new_t6;
  }
  d->_g83 = d->_g77 || (d->_g74 && !d->_cg85);
  if (d->_g83) {
    d->_Atrig9 = 0;
    d->_Atrig10 = 0;
  }
  d->_cg88 = d->_Atrig9 || d->_Atrig10;
  d->_g84 = (d->_g83 && !d->_cg88) || (d->_g91 && !d->_cg92);
  d->_g84_e2 = d->_g83 || (d->_g99 && !d->_cg99);
  d->_g80_e1 = d->_g100 && d->_cg101;
  if (d->_g80_e1) {
    d->elapsed = 0;
    d->elapsed = 0;
    d->NS_red = 1;
    d->NS_yellow = 0;
    d->NS_green = 0;
    d->EW_red = 1;
    d->EW_yellow = 0;
    d->EW_green = 0;
    d->NS_ped_red = 1;
    d->NS_ped_green = 0;
    d->EW_ped_red = 0;
    d->EW_ped_green = 1;
    d->_Atrig11 = 0;
  }
  d->_cg103 = d->_Atrig11;
  d->_g80 = (d->_g80_e1 && !d->_cg103) || (d->_g105 && !d->_cg107);
  d->_g85 = d->_g80_e1 || (d->_g111 && !d->_cg111);
  d->_g86 = d->_g69_e2 || (d->_g69 && !d->NSraised);
  d->_g92 = d->_g121 || (d->_g64 && !d->_cg123);
  d->_g99 = d->_g126 || (d->_g128 && !d->EWraised);
  d->_g87 = d->_g129 || (d->_g108_e1 && !d->_cg131);
  d->_g101 = d->_pg102;
  d->_cg138 = !d->rx_available;
  d->_g107 = d->_GO || (d->_g101 && d->_cg138) || (d->_g28_e2 && !d->rx_available);
  d->_g102 = d->_g28 || (d->_g101 && !d->_cg138);
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->tick = 0;
  d->elapsed = 0;
  d->NS_red = 0;
  d->NS_yellow = 0;
  d->NS_green = 0;
  d->EW_red = 0;
  d->EW_yellow = 0;
  d->EW_green = 0;
  d->NS_ped_red = 0;
  d->NS_ped_green = 0;
  d->EW_ped_red = 0;
  d->EW_ped_green = 0;
  d->NS_request = 0;
  d->EW_request = 0;
  d->NS_done = 0;
  d->EW_done = 0;
  d->new_packet = 1;
  d->t1 = 5000;
  d->t2 = 2000;
  d->t3 = 1000;
  d->t4 = 5000;
  d->t5 = 2000;
  d->t6 = 1000;
  d->digit_count = 0;
  d->value_count = 0;
  d->current_value = 0;
  d->new_t1 = 0;
  d->new_t2 = 0;
  d->new_t3 = 0;
  d->new_t4 = 0;
  d->new_t5 = 0;
  d->new_t6 = 0;
  d->config_ready = 0;
  d->config_pending = 0;
  d->packet_error = 0;
  d->_pg93 = 0;
  d->_pg93_e1 = 0;
  d->_pg80 = 0;
  d->_pg85 = 0;
  d->_pg84 = 0;
  d->_pg87 = 0;
  d->_pg99 = 0;
  d->_pg84_e2 = 0;
  d->_pg16 = 0;
  d->_pg23 = 0;
  d->_pg107 = 0;
  d->_pg37 = 0;
  d->_pg42 = 0;
  d->_pg51 = 0;
  d->_pg55 = 0;
  d->_pg92 = 0;
  d->_pg86 = 0;
  d->_pg31 = 0;
  d->_pg33 = 0;
  d->_pg70 = 0;
  d->_pg72 = 0;
  d->_pg102 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg93 = d->_g93;
  d->_pg93_e1 = d->_g93_e1;
  d->_pg80 = d->_g80;
  d->_pg85 = d->_g85;
  d->_pg84 = d->_g84;
  d->_pg87 = d->_g87;
  d->_pg99 = d->_g99;
  d->_pg84_e2 = d->_g84_e2;
  d->_pg16 = d->_g16;
  d->_pg23 = d->_g23;
  d->_pg107 = d->_g107;
  d->_pg37 = d->_g37;
  d->_pg42 = d->_g42;
  d->_pg51 = d->_g51;
  d->_pg55 = d->_g55;
  d->_pg92 = d->_g92;
  d->_pg86 = d->_g86;
  d->_pg31 = d->_g31;
  d->_pg33 = d->_g33;
  d->_pg70 = d->_g70;
  d->_pg72 = d->_g72;
  d->_pg102 = d->_g102;
  d->_GO = 0;
}



