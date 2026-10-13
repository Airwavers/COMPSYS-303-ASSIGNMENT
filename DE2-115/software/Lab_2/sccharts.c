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

void logic(TickData* d) {
  d->_g59 = d->_pg51_e1;
  d->_g62_e1 = !d->_g59;
  d->_cg59 = d->_region0_null_tick;
  d->_g60 = d->_g59 && d->_cg59;
  if (d->_g60) {
    d->_region0_null_elapsed = d->_region0_null_elapsed + 1;
  }
  d->_g65 = d->_pg55_e2;
  d->_cg65 = d->_region0_null_elapsed >= 1000;
  d->_g66 = d->_g65 && d->_cg65;
  if (d->_g66) {
    d->_Atrig5 = 1;
  }
  d->_g59 = d->_g60 || (d->_g59 && !d->_cg59);
  d->_cg61 = d->_Atrig5;
  d->_g60 = d->_g59 && d->_cg61;
  d->_g66_e2 = !d->_g65;
  d->_g62 = (d->_g62_e1 || d->_g60) && (d->_g66_e2 || d->_g66) && (d->_g60 || d->_g66);
  d->_g66_e2 = d->_GO || d->_g62;
  if (d->_g66_e2) {
    d->_region0_null_elapsed = 0;
    d->_region0_null_NS_red = 0;
    d->_region0_null_NS_yellow = 0;
    d->_region0_null_NS_green = 1;
    d->_region0_null_EW_red = 1;
    d->_region0_null_EW_yellow = 0;
    d->_region0_null_EW_green = 0;
    d->_Atrig = 0;
  }
  d->_cg2 = d->_Atrig;
  d->_g62_e1 = d->_pg3;
  d->_cg4 = d->_region0_null_tick;
  d->_g66 = d->_g62_e1 && d->_cg4;
  if (d->_g66) {
    d->_region0_null_elapsed = d->_region0_null_elapsed + 1;
  }
  d->_g67 = d->_pg1;
  d->_cg10 = d->_region0_null_elapsed >= 5000;
  d->_g11 = d->_g67 && d->_cg10;
  if (d->_g11) {
    d->_Atrig = 1;
  }
  d->_g5 = d->_g66 || (d->_g62_e1 && !d->_cg4);
  d->_cg6 = d->_Atrig;
  d->_g3 = (d->_g66_e2 && !d->_cg2) || (d->_g5 && !d->_cg6);
  d->_g6 = d->_g5 && d->_cg6;
  d->_g1 = d->_g66_e2 || (d->_g67 && !d->_cg10);
  d->_g4 = !d->_g62_e1;
  d->_g10 = !d->_g67;
  d->_g11_e2 = (d->_g4 || d->_g6) && (d->_g10 || d->_g11) && (d->_g6 || d->_g11);
  if (d->_g11_e2) {
    d->_region0_null_elapsed = 0;
    d->_region0_null_NS_red = 0;
    d->_region0_null_NS_yellow = 1;
    d->_region0_null_NS_green = 0;
    d->_region0_null_EW_red = 1;
    d->_region0_null_EW_yellow = 0;
    d->_region0_null_EW_green = 0;
    d->_Atrig1 = 0;
  }
  d->_cg13 = d->_Atrig1;
  d->_g11 = d->_pg14;
  d->_cg15 = d->_region0_null_tick;
  d->_g7_e1 = d->_g11 && d->_cg15;
  if (d->_g7_e1) {
    d->_region0_null_elapsed = d->_region0_null_elapsed + 1;
  }
  d->_g7 = d->_pg12;
  d->_cg21 = d->_region0_null_elapsed >= 2000;
  d->_g22 = d->_g7 && d->_cg21;
  if (d->_g22) {
    d->_Atrig1 = 1;
  }
  d->_g16 = d->_g7_e1 || (d->_g11 && !d->_cg15);
  d->_cg17 = d->_Atrig1;
  d->_g14 = (d->_g11_e2 && !d->_cg13) || (d->_g16 && !d->_cg17);
  d->_g17 = d->_g16 && d->_cg17;
  d->_g12 = d->_g11_e2 || (d->_g7 && !d->_cg21);
  d->_g15 = !d->_g11;
  d->_g21 = !d->_g7;
  d->_g18 = (d->_g15 || d->_g17) && (d->_g21 || d->_g22) && (d->_g17 || d->_g22);
  if (d->_g18) {
    d->_region0_null_elapsed = 0;
    d->_region0_null_NS_red = 1;
    d->_region0_null_NS_yellow = 0;
    d->_region0_null_NS_green = 0;
    d->_region0_null_EW_red = 1;
    d->_region0_null_EW_yellow = 0;
    d->_region0_null_EW_green = 0;
    d->_Atrig2 = 0;
  }
  d->_cg24 = d->_Atrig2;
  d->_g22 = d->_pg25;
  d->_cg26 = d->_region0_null_tick;
  d->_g18_e1 = d->_g22 && d->_cg26;
  if (d->_g18_e1) {
    d->_region0_null_elapsed = d->_region0_null_elapsed + 1;
  }
  d->_g22_e2 = d->_pg23;
  d->_cg32 = d->_region0_null_elapsed >= 1000;
  d->_g33 = d->_g22_e2 && d->_cg32;
  if (d->_g33) {
    d->_Atrig2 = 1;
  }
  d->_g27 = d->_g18_e1 || (d->_g22 && !d->_cg26);
  d->_cg28 = d->_Atrig2;
  d->_g25 = (d->_g18 && !d->_cg24) || (d->_g27 && !d->_cg28);
  d->_g28 = d->_g27 && d->_cg28;
  d->_g23 = d->_g18 || (d->_g22_e2 && !d->_cg32);
  d->_g26 = !d->_g22;
  d->_g32 = !d->_g22_e2;
  d->_g29 = (d->_g26 || d->_g28) && (d->_g32 || d->_g33) && (d->_g28 || d->_g33);
  if (d->_g29) {
    d->_region0_null_elapsed = 0;
    d->_region0_null_NS_red = 1;
    d->_region0_null_NS_yellow = 0;
    d->_region0_null_NS_green = 0;
    d->_region0_null_EW_red = 0;
    d->_region0_null_EW_yellow = 0;
    d->_region0_null_EW_green = 1;
    d->_Atrig3 = 0;
  }
  d->_cg35 = d->_Atrig3;
  d->_g29_e1 = d->_pg36;
  d->_cg37 = d->_region0_null_tick;
  d->_g33 = d->_g29_e1 && d->_cg37;
  if (d->_g33) {
    d->_region0_null_elapsed = d->_region0_null_elapsed + 1;
  }
  d->_g33_e2 = d->_pg34;
  d->_cg43 = d->_region0_null_elapsed >= 5000;
  d->_g44 = d->_g33_e2 && d->_cg43;
  if (d->_g44) {
    d->_Atrig3 = 1;
  }
  d->_g38 = d->_g33 || (d->_g29_e1 && !d->_cg37);
  d->_cg39 = d->_Atrig3;
  d->_g36 = (d->_g29 && !d->_cg35) || (d->_g38 && !d->_cg39);
  d->_g39 = d->_g38 && d->_cg39;
  d->_g34 = d->_g29 || (d->_g33_e2 && !d->_cg43);
  d->_g37 = !d->_g29_e1;
  d->_g43 = !d->_g33_e2;
  d->_g40_e1 = (d->_g37 || d->_g39) && (d->_g43 || d->_g44) && (d->_g39 || d->_g44);
  if (d->_g40_e1) {
    d->_region0_null_elapsed = 0;
    d->_region0_null_NS_red = 1;
    d->_region0_null_NS_yellow = 0;
    d->_region0_null_NS_green = 0;
    d->_region0_null_EW_red = 0;
    d->_region0_null_EW_yellow = 1;
    d->_region0_null_EW_green = 0;
    d->_Atrig4 = 0;
  }
  d->_cg46 = d->_Atrig4;
  d->_g40 = d->_pg47;
  d->_cg48 = d->_region0_null_tick;
  d->_g44_e2 = d->_g40 && d->_cg48;
  if (d->_g44_e2) {
    d->_region0_null_elapsed = d->_region0_null_elapsed + 1;
  }
  d->_g44 = d->_pg45;
  d->_cg54 = d->_region0_null_elapsed >= 2000;
  d->_g55 = d->_g44 && d->_cg54;
  if (d->_g55) {
    d->_Atrig4 = 1;
  }
  d->_g49 = d->_g44_e2 || (d->_g40 && !d->_cg48);
  d->_cg50 = d->_Atrig4;
  d->_g47 = (d->_g40_e1 && !d->_cg46) || (d->_g49 && !d->_cg50);
  d->_g50 = d->_g49 && d->_cg50;
  d->_g45 = d->_g40_e1 || (d->_g44 && !d->_cg54);
  d->_g48 = !d->_g40;
  d->_g54 = !d->_g44;
  d->_g51 = (d->_g48 || d->_g50) && (d->_g54 || d->_g55) && (d->_g50 || d->_g55);
  if (d->_g51) {
    d->_region0_null_elapsed = 0;
    d->_region0_null_NS_red = 1;
    d->_region0_null_NS_yellow = 0;
    d->_region0_null_NS_green = 0;
    d->_region0_null_EW_red = 1;
    d->_region0_null_EW_yellow = 0;
    d->_region0_null_EW_green = 0;
    d->_Atrig5 = 0;
  }
  d->_cg57 = d->_Atrig5;
  d->_g51_e1 = (d->_g51 && !d->_cg57) || (d->_g59 && !d->_cg61);
  d->_g55_e2 = d->_g51 || (d->_g65 && !d->_cg65);
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->_region0_null_tick = 0;
  d->_region0_null_NS_red = 0;
  d->_region0_null_NS_yellow = 0;
  d->_region0_null_NS_green = 0;
  d->_region0_null_EW_red = 0;
  d->_region0_null_EW_yellow = 0;
  d->_region0_null_EW_green = 0;
  d->_region0_null_elapsed = 0;
  d->_pg51_e1 = 0;
  d->_pg55_e2 = 0;
  d->_pg3 = 0;
  d->_pg1 = 0;
  d->_pg14 = 0;
  d->_pg12 = 0;
  d->_pg25 = 0;
  d->_pg23 = 0;
  d->_pg36 = 0;
  d->_pg34 = 0;
  d->_pg47 = 0;
  d->_pg45 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg51_e1 = d->_g51_e1;
  d->_pg55_e2 = d->_g55_e2;
  d->_pg3 = d->_g3;
  d->_pg1 = d->_g1;
  d->_pg14 = d->_g14;
  d->_pg12 = d->_g12;
  d->_pg25 = d->_g25;
  d->_pg23 = d->_g23;
  d->_pg36 = d->_g36;
  d->_pg34 = d->_g34;
  d->_pg47 = d->_g47;
  d->_pg45 = d->_g45;
  d->_GO = 0;
}


