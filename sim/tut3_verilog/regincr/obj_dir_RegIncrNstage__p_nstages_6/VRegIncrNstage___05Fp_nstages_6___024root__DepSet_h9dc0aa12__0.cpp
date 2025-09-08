// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegIncrNstage___05Fp_nstages_6.h for the primary calling header

#include "VRegIncrNstage___05Fp_nstages_6__pch.h"
#include "VRegIncrNstage___05Fp_nstages_6___024root.h"

void VRegIncrNstage___05Fp_nstages_6___024root___eval_act(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_act\n"); );
}

void VRegIncrNstage___05Fp_nstages_6___024root___nba_sequent__TOP__0(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);

void VRegIncrNstage___05Fp_nstages_6___024root___eval_nba(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRegIncrNstage___05Fp_nstages_6___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VRegIncrNstage___05Fp_nstages_6___024root___nba_sequent__TOP__0(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__5__KET____DOT__reg_incr__DOT__reg_out = 0U;
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__reg_out = 0U;
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__reg_out = 0U;
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__reg_out = 0U;
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__reg_out = 0U;
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__reg_out = 0U;
    } else {
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__5__KET____DOT__reg_incr__DOT__reg_out 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__reg_out)));
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__reg_out 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__reg_out)));
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__reg_out 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__reg_out)));
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__reg_out 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__reg_out)));
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__reg_out 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__reg_out)));
        vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__reg_out 
            = vlSelf->in_;
    }
    vlSelf->out = (0xffU & ((IData)(1U) + (IData)(vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__5__KET____DOT__reg_incr__DOT__reg_out)));
}

void VRegIncrNstage___05Fp_nstages_6___024root___eval_triggers__act(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);

bool VRegIncrNstage___05Fp_nstages_6___024root___eval_phase__act(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRegIncrNstage___05Fp_nstages_6___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VRegIncrNstage___05Fp_nstages_6___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRegIncrNstage___05Fp_nstages_6___024root___eval_phase__nba(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRegIncrNstage___05Fp_nstages_6___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__nba(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__act(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);
#endif  // VL_DEBUG

void VRegIncrNstage___05Fp_nstages_6___024root___eval(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tut3_verilog/regincr/RegIncrNstage.v", 68, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tut3_verilog/regincr/RegIncrNstage.v", 68, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VRegIncrNstage___05Fp_nstages_6___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VRegIncrNstage___05Fp_nstages_6___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRegIncrNstage___05Fp_nstages_6___024root___eval_debug_assertions(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
