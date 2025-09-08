// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRegIncrNstage___05Fp_nstages_4__pch.h"
#include "VRegIncrNstage___05Fp_nstages_4.h"
#include "VRegIncrNstage___05Fp_nstages_4___024root.h"

void VRegIncrNstage___05Fp_nstages_4___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_4__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__line_trace_TOP(VRegIncrNstage___05Fp_nstages_4__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VRegIncrNstage___05Fp_nstages_4___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_4__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__line_trace_TOP(VRegIncrNstage___05Fp_nstages_4__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VRegIncrNstage___05Fp_nstages_4___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_4__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__line_trace_TOP(VRegIncrNstage___05Fp_nstages_4__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VRegIncrNstage___05Fp_nstages_4___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_4__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__line_trace_TOP(VRegIncrNstage___05Fp_nstages_4__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VRegIncrNstage___05Fp_nstages_4__Syms::~VRegIncrNstage___05Fp_nstages_4__Syms()
{
}

VRegIncrNstage___05Fp_nstages_4__Syms::VRegIncrNstage___05Fp_nstages_4__Syms(VerilatedContext* contextp, const char* namep, VRegIncrNstage___05Fp_nstages_4* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(7234);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_RegIncrNstage___05Fp_nstages_4__v__gen__BRA__0__KET____reg_incr.configure(this, name(), "RegIncrNstage__p_nstages_4.v.gen[0].reg_incr", "reg_incr", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_RegIncrNstage___05Fp_nstages_4__v__gen__BRA__1__KET____reg_incr.configure(this, name(), "RegIncrNstage__p_nstages_4.v.gen[1].reg_incr", "reg_incr", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_RegIncrNstage___05Fp_nstages_4__v__gen__BRA__2__KET____reg_incr.configure(this, name(), "RegIncrNstage__p_nstages_4.v.gen[2].reg_incr", "reg_incr", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_RegIncrNstage___05Fp_nstages_4__v__gen__BRA__3__KET____reg_incr.configure(this, name(), "RegIncrNstage__p_nstages_4.v.gen[3].reg_incr", "reg_incr", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_RegIncrNstage___05Fp_nstages_4__v__gen__BRA__0__KET____reg_incr.exportInsert(__Vfinal, "line_trace", (void*)(&VRegIncrNstage___05Fp_nstages_4___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_4__DOT__v__DOT__gen__BRA__0__KET____DOT__reg_incr__DOT__line_trace_TOP));
        __Vscope_RegIncrNstage___05Fp_nstages_4__v__gen__BRA__1__KET____reg_incr.exportInsert(__Vfinal, "line_trace", (void*)(&VRegIncrNstage___05Fp_nstages_4___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_4__DOT__v__DOT__gen__BRA__1__KET____DOT__reg_incr__DOT__line_trace_TOP));
        __Vscope_RegIncrNstage___05Fp_nstages_4__v__gen__BRA__2__KET____reg_incr.exportInsert(__Vfinal, "line_trace", (void*)(&VRegIncrNstage___05Fp_nstages_4___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_4__DOT__v__DOT__gen__BRA__2__KET____DOT__reg_incr__DOT__line_trace_TOP));
        __Vscope_RegIncrNstage___05Fp_nstages_4__v__gen__BRA__3__KET____reg_incr.exportInsert(__Vfinal, "line_trace", (void*)(&VRegIncrNstage___05Fp_nstages_4___024root____Vdpiexp_RegIncrNstage___05Fp_nstages_4__DOT__v__DOT__gen__BRA__3__KET____DOT__reg_incr__DOT__line_trace_TOP));
    }
}
