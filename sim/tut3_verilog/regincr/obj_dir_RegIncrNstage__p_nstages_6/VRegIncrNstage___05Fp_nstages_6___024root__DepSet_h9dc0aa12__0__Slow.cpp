// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegIncrNstage___05Fp_nstages_6.h for the primary calling header

#include "VRegIncrNstage___05Fp_nstages_6__pch.h"
#include "VRegIncrNstage___05Fp_nstages_6___024root.h"

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___eval_static(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___eval_initial(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___eval_final(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__stl(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRegIncrNstage___05Fp_nstages_6___024root___eval_phase__stl(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___eval_settle(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tut3_verilog/regincr/RegIncrNstage.v", 68, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRegIncrNstage___05Fp_nstages_6___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__stl(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___stl_sequent__TOP__0(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___eval_stl(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VRegIncrNstage___05Fp_nstages_6___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___stl_sequent__TOP__0(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->out = (0xffU & ((IData)(1U) + (IData)(vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__5__KET____DOT__reg_incr__DOT__reg_out)));
}

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___eval_triggers__stl(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);

VL_ATTR_COLD bool VRegIncrNstage___05Fp_nstages_6___024root___eval_phase__stl(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VRegIncrNstage___05Fp_nstages_6___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VRegIncrNstage___05Fp_nstages_6___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__act(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__nba(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6___024root___ctor_var_reset(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_6__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_6___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->in_ = VL_RAND_RESET_I(8);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__reg_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(4096, vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__str);
    vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__reg_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(4096, vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__str);
    vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__reg_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(4096, vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__str);
    vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__reg_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(4096, vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__str);
    vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__reg_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(4096, vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__str);
    vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__5__KET____DOT__reg_incr__DOT__reg_out = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(4096, vlSelf->RegIncrNstage___05Fp_nstages_6__DOT__v__DOT__gen__BRA__5__KET____DOT__reg_incr__DOT__str);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
