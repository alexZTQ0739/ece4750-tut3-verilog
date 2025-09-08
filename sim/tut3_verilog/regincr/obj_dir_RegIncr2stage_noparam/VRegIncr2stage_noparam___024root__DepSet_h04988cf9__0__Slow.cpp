// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegIncr2stage_noparam.h for the primary calling header

#include "VRegIncr2stage_noparam__pch.h"
#include "VRegIncr2stage_noparam___024root.h"

VL_ATTR_COLD void VRegIncr2stage_noparam___024root___eval_static(VRegIncr2stage_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr2stage_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr2stage_noparam___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRegIncr2stage_noparam___024root___eval_initial(VRegIncr2stage_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr2stage_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr2stage_noparam___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VRegIncr2stage_noparam___024root___eval_final(VRegIncr2stage_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr2stage_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr2stage_noparam___024root___eval_final\n"); );
}

VL_ATTR_COLD void VRegIncr2stage_noparam___024root___eval_settle(VRegIncr2stage_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr2stage_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr2stage_noparam___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncr2stage_noparam___024root___dump_triggers__act(VRegIncr2stage_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr2stage_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr2stage_noparam___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncr2stage_noparam___024root___dump_triggers__nba(VRegIncr2stage_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr2stage_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr2stage_noparam___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRegIncr2stage_noparam___024root___ctor_var_reset(VRegIncr2stage_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncr2stage_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncr2stage_noparam___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->in_ = VL_RAND_RESET_I(8);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->RegIncr2stage_noparam__DOT__v__DOT__reg_incr_0__DOT__reg_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(4096, vlSelf->RegIncr2stage_noparam__DOT__v__DOT__reg_incr_0__DOT__str);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
