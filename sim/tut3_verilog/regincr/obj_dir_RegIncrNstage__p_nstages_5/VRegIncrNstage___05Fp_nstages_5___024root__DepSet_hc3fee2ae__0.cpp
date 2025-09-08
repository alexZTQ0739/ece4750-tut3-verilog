// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegIncrNstage___05Fp_nstages_5.h for the primary calling header

#include "VRegIncrNstage___05Fp_nstages_5__pch.h"
#include "VRegIncrNstage___05Fp_nstages_5__Syms.h"
#include "VRegIncrNstage___05Fp_nstages_5___024root.h"

void VRegIncrNstage___05Fp_nstages_5___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__line_trace_TOP(VRegIncrNstage___05Fp_nstages_5__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_5___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__trace;
    VL_ZERO_W(4096, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__trace);
    VlWide<128>/*4095:0*/ __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__str;
    VL_ZERO_W(4096, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__str
                  ,"%x (%x) %x",0,8,vlSymsp->TOP.in_,
                  8,(IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__reg_out),
                  8,(0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__reg_out))));
    VL_ASSIGN_W(4096,__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__str, vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__trace, trace_str);
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))))))) {
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0);
    }
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
        = __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__trace[0U];
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
        = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0)), __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))))));
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
            = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
            = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__trace[0U] 
        = RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__0__trace);
}

void VRegIncrNstage___05Fp_nstages_5___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__line_trace_TOP(VRegIncrNstage___05Fp_nstages_5__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_5___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__trace;
    VL_ZERO_W(4096, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__trace);
    VlWide<128>/*4095:0*/ __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__str;
    VL_ZERO_W(4096, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__str
                  ,"%x (%x) %x",0,8,(0xffU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__reg_out))),
                  8,(IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__reg_out),
                  8,(0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__reg_out))));
    VL_ASSIGN_W(4096,__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__str, vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__trace, trace_str);
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))))))) {
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0);
    }
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
        = __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__trace[0U];
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
        = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0)), __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))))));
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
            = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
            = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__trace[0U] 
        = RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__1__trace);
}

void VRegIncrNstage___05Fp_nstages_5___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__line_trace_TOP(VRegIncrNstage___05Fp_nstages_5__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_5___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__trace;
    VL_ZERO_W(4096, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__trace);
    VlWide<128>/*4095:0*/ __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__str;
    VL_ZERO_W(4096, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__str
                  ,"%x (%x) %x",0,8,(0xffU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__reg_out))),
                  8,(IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__reg_out),
                  8,(0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__reg_out))));
    VL_ASSIGN_W(4096,__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__str, vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__trace, trace_str);
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))))))) {
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0);
    }
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
        = __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__trace[0U];
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
        = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0)), __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))))));
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
            = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
            = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__trace[0U] 
        = RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__2__trace);
}

void VRegIncrNstage___05Fp_nstages_5___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__line_trace_TOP(VRegIncrNstage___05Fp_nstages_5__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_5___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__trace;
    VL_ZERO_W(4096, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__trace);
    VlWide<128>/*4095:0*/ __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__str
                  ,"%x (%x) %x",0,8,(0xffU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__reg_out))),
                  8,(IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__reg_out),
                  8,(0xffU & ((IData)(1U) + (IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__reg_out))));
    VL_ASSIGN_W(4096,__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__str, vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__trace, trace_str);
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))))))) {
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0);
    }
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
        = __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__trace[0U];
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
        = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0)), __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))))));
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
            = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
            = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__trace[0U] 
        = RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__3__trace);
}

void VRegIncrNstage___05Fp_nstages_5___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__line_trace_TOP(VRegIncrNstage___05Fp_nstages_5__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_5___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1;
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__trace;
    VL_ZERO_W(4096, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__trace);
    VlWide<128>/*4095:0*/ __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__str;
    VL_ZERO_W(4096, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__str
                  ,"%x (%x) %x",0,8,(0xffU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__reg_out))),
                  8,(IData)(vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__reg_out),
                  8,vlSymsp->TOP.out);
    VL_ASSIGN_W(4096,__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__str, vlSymsp->TOP.RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__str);
    VL_ASSIGN_W(4096,__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__trace, trace_str);
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0))))))) {
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0);
    }
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
        = __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__trace[0U];
    RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
        = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0)), __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1))))));
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
            = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
            = (RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__trace[0U] 
        = RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_RegIncrNstage___05Fp_nstages_5__DOT__v__DOT__gen__BRA__4__KET____DOT__reg_incr__DOT__vc_trace__DOT__append_str__4__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_5___024root___dump_triggers__act(VRegIncrNstage___05Fp_nstages_5___024root* vlSelf);
#endif  // VL_DEBUG

void VRegIncrNstage___05Fp_nstages_5___024root___eval_triggers__act(VRegIncrNstage___05Fp_nstages_5___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRegIncrNstage___05Fp_nstages_5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegIncrNstage___05Fp_nstages_5___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRegIncrNstage___05Fp_nstages_5___024root___dump_triggers__act(vlSelf);
    }
#endif
}
