/*
 * sccharts.h
 *
 *  Created on: 1/10/2026
 *      Author: esin806
 */

#ifndef SCCHARTS_H_
#define SCCHARTS_H_



typedef struct {
  char _region0_null_tick;
  int _region0_null_NS_red;
  int _region0_null_NS_yellow;
  int _region0_null_NS_green;
  int _region0_null_EW_red;
  int _region0_null_EW_yellow;
  int _region0_null_EW_green;
  int _region0_null_elapsed;
  char _Atrig;
  char _Atrig1;
  char _Atrig2;
  char _Atrig3;
  char _Atrig4;
  char _Atrig5;
  char _g1;
  char _g3;
  char _g4;
  char _g5;
  char _g6;
  char _g7;
  char _g10;
  char _g11;
  char _g12;
  char _g14;
  char _g15;
  char _g16;
  char _g17;
  char _g18;
  char _g21;
  char _g22;
  char _g23;
  char _g25;
  char _g26;
  char _g27;
  char _g28;
  char _g29;
  char _g32;
  char _g33;
  char _g34;
  char _g36;
  char _g37;
  char _g38;
  char _g39;
  char _g40;
  char _g43;
  char _g44;
  char _g45;
  char _g47;
  char _g48;
  char _g49;
  char _g50;
  char _g51;
  char _g54;
  char _g55;
  char _g59;
  char _g60;
  char _g62;
  char _g65;
  char _g66;
  char _g67;
  char _GO;
  char _cg2;
  char _cg6;
  char _cg4;
  char _cg10;
  char _cg13;
  char _cg17;
  char _cg15;
  char _cg21;
  char _cg24;
  char _cg28;
  char _cg26;
  char _cg32;
  char _cg35;
  char _cg39;
  char _cg37;
  char _cg43;
  char _cg46;
  char _cg50;
  char _cg48;
  char _cg54;
  char _cg57;
  char _cg61;
  char _cg59;
  char _cg65;
  char _g7_e1;
  char _g11_e2;
  char _g18_e1;
  char _g22_e2;
  char _g29_e1;
  char _g33_e2;
  char _g40_e1;
  char _g44_e2;
  char _g51_e1;
  char _g55_e2;
  char _g62_e1;
  char _g66_e2;
  char _TERM;
  char _pg51_e1;
  char _pg55_e2;
  char _pg3;
  char _pg1;
  char _pg14;
  char _pg12;
  char _pg25;
  char _pg23;
  char _pg36;
  char _pg34;
  char _pg47;
  char _pg45;
} TickData;

void reset(TickData* d);
void logic(TickData* d);
void tick(TickData* d);

#endif /* !VERSIONB_H */
