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
  d->_g5 = d->_pg94_e2;
  d->_g8_e1 = !d->_g5;
  d->_g11 = d->_pg94;
  d->_cg11 = d->EW_done;
  d->_g12 = d->_g11 && d->_cg11;
  if (d->_g12) {
    d->_Atrig = 1;
  }
  d->_cg5 = d->tick;
  d->_g6 = d->_g5 && d->_cg5;
  if (d->_g6) {
    d->elapsed = d->elapsed + 1;
  }
  d->_g14 = d->_g11 && !d->_cg11;
  d->_cg14 = d->elapsed >= 5000;
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
  d->_g8_e1 = d->_pg78;
  d->_g13_e2 = !d->_g8_e1;
  d->_cg101 = d->tick;
  d->_g13 = d->_g8_e1 && d->_cg101;
  if (d->_g13) {
    d->elapsed = d->elapsed + 1;
  }
  d->_g107 = d->_pg82;
  d->_cg107 = d->elapsed >= 4000;
  d->_g108 = d->_g107 && d->_cg107;
  if (d->_g108) {
    d->_Atrig11 = 1;
  }
  d->_g101 = d->_g13 || (d->_g8_e1 && !d->_cg101);
  d->_cg103 = d->_Atrig11;
  d->_g102 = d->_g101 && d->_cg103;
  d->_g108_e2 = !d->_g107;
  d->_g104_e1 = (d->_g13_e2 || d->_g102) && (d->_g108_e2 || d->_g108) && (d->_g102 || d->_g108);
  if (d->_g104_e1) {
    d->elapsed = 0;
    d->EW_done = 1;
  }
  d->_g108 = d->_pg75;
  d->_g108_e2 = !d->_g108;
  d->_g104 = d->_pg83;
  d->_cg127 = d->EW_done;
  d->_g122 = d->_GO || (d->_g104 && d->_cg127);
  if (d->_g122) {
    d->EW_request = 0;
  }
  d->_g124 = d->_pg95;
  d->_g125 = d->_g124 && d->EWraised;
  if (d->_g125) {
    d->EW_request = 1;
  }
  d->_g92 = d->_pg81;
  d->_cg92 = d->EW_request;
  d->_g93 = d->_g92 && d->_cg92;
  if (d->_g93) {
    d->_Atrig9 = 1;
  }
  d->_cg86 = d->tick;
  d->_g87 = d->_g108 && d->_cg86;
  if (d->_g87) {
    d->elapsed = d->elapsed + 1;
  }
  d->_g95 = d->_g92 && !d->_cg92;
  d->_cg95 = d->elapsed >= 1000 && !d->EW_request;
  d->_g96 = d->_g95 && d->_cg95;
  if (d->_g96) {
    d->_Atrig10 = 1;
  }
  d->_g86 = d->_g87 || (d->_g108 && !d->_cg86);
  d->_cg88 = d->_Atrig9 || d->_Atrig10;
  d->_g87 = d->_g86 && d->_cg88;
  d->_g92 = !d->_g92;
  d->_g96 = d->_g93 || d->_g96;
  d->_g93 = (d->_g108_e2 || d->_g87) && (d->_g92 || d->_g96) && (d->_g87 || d->_g96);
  d->_cg97 = d->_Atrig9;
  d->_g89_e1 = d->_g93 && !d->_cg97;
  if (d->_g89_e1) {
    d->elapsed = 0;
  }
  d->_g89 = d->_GO || d->_g8 || d->_g104_e1 || d->_g89_e1;
  if (d->_g89) {
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
  d->_g94_e2 = (d->_g89 && !d->_cg3) || (d->_g5 && !d->_cg7);
  d->_g94 = d->_g89 || (d->_g14 && !d->_cg14);
  d->_g109 = d->_g12 && !d->_cg16;
  if (d->_g109) {
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
  d->_g110 = d->_g17 && d->_cg21;
  if (d->_g110) {
    d->elapsed = d->elapsed + 1;
  }
  d->_g7 = d->_pg23;
  d->_cg27 = d->elapsed >= 2000;
  d->_g14 = d->_g7 && d->_cg27;
  if (d->_g14) {
    d->_Atrig2 = 1;
  }
  d->_g2 = d->_g110 || (d->_g17 && !d->_cg21);
  d->_cg23 = d->_Atrig2;
  d->_g16 = (d->_g109 && !d->_cg19) || (d->_g2 && !d->_cg23);
  d->_g22 = d->_g2 && d->_cg23;
  d->_g23 = d->_g109 || (d->_g7 && !d->_cg27);
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
    d->_Atrig3 = 0;
    d->_Atrig4 = 0;
  }
  d->_cg30 = d->_Atrig3 || d->_Atrig4;
  d->_g28_e2 = d->_pg40;
  d->_g28 = !d->_g28_e2;
  d->_cg47 = d->tick;
  d->_g24_e1 = d->_g28_e2 && d->_cg47;
  if (d->_g24_e1) {
    d->elapsed = d->elapsed + 1;
  }
  d->_g24 = d->_pg35_e1;
  d->_cg53 = d->elapsed >= 4000;
  d->_g54 = d->_g24 && d->_cg53;
  if (d->_g54) {
    d->_Atrig5 = 1;
  }
  d->_g48 = d->_g24_e1 || (d->_g28_e2 && !d->_cg47);
  d->_cg49 = d->_Atrig5;
  d->_g47 = d->_g48 && d->_cg49;
  d->_g54_e2 = !d->_g24;
  d->_g54_e2 = (d->_g28 || d->_g47) && (d->_g54_e2 || d->_g54) && (d->_g47 || d->_g54);
  if (d->_g54_e2) {
    d->elapsed = 0;
    d->NS_done = 1;
  }
  d->_g54 = d->_pg49;
  d->_g50_e1 = !d->_g54;
  d->_g50 = d->_pg44;
  d->_cg65 = d->NS_done;
  d->_g66 = d->_g50 && d->_cg65;
  if (d->_g66) {
    d->_Atrig6 = 1;
  }
  d->_cg59 = d->tick;
  d->_g60 = d->_g54 && d->_cg59;
  if (d->_g60) {
    d->elapsed = d->elapsed + 1;
  }
  d->_g68 = d->_g50 && !d->_cg65;
  d->_cg68 = d->elapsed >= 5000;
  d->_g69 = d->_g68 && d->_cg68;
  if (d->_g69) {
    d->_Atrig7 = 1;
  }
  d->_g59 = d->_g60 || (d->_g54 && !d->_cg59);
  d->_cg61 = d->_Atrig6 || d->_Atrig7;
  d->_g60 = d->_g59 && d->_cg61;
  d->_g65 = !d->_g50;
  d->_g66 = d->_g66 || d->_g69;
  d->_g69 = (d->_g50_e1 || d->_g60) && (d->_g65 || d->_g66) && (d->_g60 || d->_g66);
  d->_cg70 = d->_Atrig6;
  d->_g62 = d->_g69 && d->_cg70;
  if (d->_g62) {
    d->NS_done = 0;
  }
  d->_g62_e1 = d->_pg88;
  d->_cg119 = d->NS_done;
  d->_g67_e2 = d->_GO || (d->_g62_e1 && d->_cg119);
  if (d->_g67_e2) {
    d->NS_request = 0;
  }
  d->_g67 = d->_pg78_e1;
  d->_g117 = d->_g67 && d->NSraised;
  if (d->_g117) {
    d->NS_request = 1;
  }
  d->_g38 = d->_pg41;
  d->_cg38 = d->NS_request;
  d->_g39 = d->_g38 && d->_cg38;
  if (d->_g39) {
    d->_Atrig3 = 1;
  }
  d->_g32 = d->_pg31;
  d->_cg32 = d->tick;
  d->_g33 = d->_g32 && d->_cg32;
  if (d->_g33) {
    d->elapsed = d->elapsed + 1;
  }
  d->_g41 = d->_g38 && !d->_cg38;
  d->_cg41 = d->elapsed >= 1000 && !d->NS_request;
  d->_g42 = d->_g41 && d->_cg41;
  if (d->_g42) {
    d->_Atrig4 = 1;
  }
  d->_g33 = d->_g33 || (d->_g32 && !d->_cg32);
  d->_cg34 = d->_Atrig3 || d->_Atrig4;
  d->_g31 = (d->_g27 && !d->_cg30) || (d->_g33 && !d->_cg34);
  d->_g34 = d->_g33 && d->_cg34;
  d->_g41 = d->_g27 || (d->_g41 && !d->_cg41);
  d->_g29 = d->_g39 || d->_g42;
  d->_g42 = !d->_g32;
  d->_g39 = !d->_g38;
  d->_g32 = (d->_g42 || d->_g34) && (d->_g39 || d->_g29) && (d->_g34 || d->_g29);
  d->_cg43 = d->_Atrig3;
  d->_g38 = d->_g32 && d->_cg43;
  if (d->_g38) {
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
  d->_cg45 = d->_Atrig5;
  d->_g40 = (d->_g38 && !d->_cg45) || (d->_g48 && !d->_cg49);
  d->_g35_e1 = d->_g38 || (d->_g24 && !d->_cg53);
  d->_g35 = d->_g32 && !d->_cg43;
  if (d->_g35) {
    d->elapsed = 0;
  }
  d->_g40_e2 = d->_g54_e2 || d->_g62 || d->_g35;
  if (d->_g40_e2) {
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
  d->_cg57 = d->_Atrig6 || d->_Atrig7;
  d->_g49 = (d->_g40_e2 && !d->_cg57) || (d->_g59 && !d->_cg61);
  d->_g44 = d->_g40_e2 || (d->_g68 && !d->_cg68);
  d->_g53 = d->_g69 && !d->_cg70;
  if (d->_g53) {
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
  d->_cg73 = d->_Atrig8;
  d->_g43 = d->_pg56;
  d->_cg75 = d->tick;
  d->_g55 = d->_g43 && d->_cg75;
  if (d->_g55) {
    d->elapsed = d->elapsed + 1;
  }
  d->_g71 = d->_pg70;
  d->_cg81 = d->elapsed >= 2000;
  d->_g111 = d->_g71 && d->_cg81;
  if (d->_g111) {
    d->_Atrig8 = 1;
  }
  d->_g61 = d->_g55 || (d->_g43 && !d->_cg75);
  d->_cg77 = d->_Atrig8;
  d->_g56 = (d->_g53 && !d->_cg73) || (d->_g61 && !d->_cg77);
  d->_g68 = d->_g61 && d->_cg77;
  d->_g70 = d->_g53 || (d->_g71 && !d->_cg81);
  d->_g76 = !d->_g43;
  d->_g77 = !d->_g71;
  d->_g72 = (d->_g76 || d->_g68) && (d->_g77 || d->_g111) && (d->_g68 || d->_g111);
  if (d->_g72) {
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
    d->_Atrig9 = 0;
    d->_Atrig10 = 0;
  }
  d->_cg84 = d->_Atrig9 || d->_Atrig10;
  d->_g75 = (d->_g72 && !d->_cg84) || (d->_g86 && !d->_cg88);
  d->_g81 = d->_g72 || (d->_g95 && !d->_cg95);
  d->_g82_e2 = d->_g93 && d->_cg97;
  if (d->_g82_e2) {
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
  d->_cg99 = d->_Atrig11;
  d->_g78 = (d->_g82_e2 && !d->_cg99) || (d->_g101 && !d->_cg103);
  d->_g82 = d->_g82_e2 || (d->_g107 && !d->_cg107);
  d->_g78_e1 = d->_g67_e2 || (d->_g67 && !d->NSraised);
  d->_g88 = d->_g117 || (d->_g62_e1 && !d->_cg119);
  d->_g95 = d->_g122 || (d->_g124 && !d->EWraised);
  d->_g83 = d->_g125 || (d->_g104 && !d->_cg127);
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->tick = 0;
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
  d->elapsed = 0;
  d->_pg94_e2 = 0;
  d->_pg94 = 0;
  d->_pg78 = 0;
  d->_pg82 = 0;
  d->_pg75 = 0;
  d->_pg83 = 0;
  d->_pg95 = 0;
  d->_pg81 = 0;
  d->_pg16 = 0;
  d->_pg23 = 0;
  d->_pg40 = 0;
  d->_pg35_e1 = 0;
  d->_pg49 = 0;
  d->_pg44 = 0;
  d->_pg88 = 0;
  d->_pg78_e1 = 0;
  d->_pg41 = 0;
  d->_pg31 = 0;
  d->_pg56 = 0;
  d->_pg70 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg94_e2 = d->_g94_e2;
  d->_pg94 = d->_g94;
  d->_pg78 = d->_g78;
  d->_pg82 = d->_g82;
  d->_pg75 = d->_g75;
  d->_pg83 = d->_g83;
  d->_pg95 = d->_g95;
  d->_pg81 = d->_g81;
  d->_pg16 = d->_g16;
  d->_pg23 = d->_g23;
  d->_pg40 = d->_g40;
  d->_pg35_e1 = d->_g35_e1;
  d->_pg49 = d->_g49;
  d->_pg44 = d->_g44;
  d->_pg88 = d->_g88;
  d->_pg78_e1 = d->_g78_e1;
  d->_pg41 = d->_g41;
  d->_pg31 = d->_g31;
  d->_pg56 = d->_g56;
  d->_pg70 = d->_g70;
  d->_GO = 0;
}


