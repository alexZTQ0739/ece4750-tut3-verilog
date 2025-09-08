// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegIncrNstage___05Fp_nstages_3.h for the primary calling header

#ifndef VERILATED_VREGINCRNSTAGE___05FP_NSTAGES_3___024ROOT_H_
#define VERILATED_VREGINCRNSTAGE___05FP_NSTAGES_3___024ROOT_H_  // guard

#include "verilated.h"


class VRegIncrNstage___05Fp_nstages_3__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRegIncrNstage___05Fp_nstages_3___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in_,7,0);
    VL_OUT8(out,7,0);
    VL_IN8(reset,0,0);
    CData/*7:0*/ RegIncrNstage___05Fp_nstages_3__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__reg_out;
    CData/*7:0*/ RegIncrNstage___05Fp_nstages_3__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__reg_out;
    CData/*7:0*/ RegIncrNstage___05Fp_nstages_3__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__reg_out;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VlWide<128>/*4095:0*/ RegIncrNstage___05Fp_nstages_3__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__str;
    VlWide<128>/*4095:0*/ RegIncrNstage___05Fp_nstages_3__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__str;
    VlWide<128>/*4095:0*/ RegIncrNstage___05Fp_nstages_3__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__str;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRegIncrNstage___05Fp_nstages_3__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegIncrNstage___05Fp_nstages_3___024root(VRegIncrNstage___05Fp_nstages_3__Syms* symsp, const char* v__name);
    ~VRegIncrNstage___05Fp_nstages_3___024root();
    VL_UNCOPYABLE(VRegIncrNstage___05Fp_nstages_3___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
