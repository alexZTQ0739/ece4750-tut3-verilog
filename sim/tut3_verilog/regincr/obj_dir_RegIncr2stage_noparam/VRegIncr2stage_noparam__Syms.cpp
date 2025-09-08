// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRegIncr2stage_noparam__pch.h"
#include "VRegIncr2stage_noparam.h"
#include "VRegIncr2stage_noparam___024root.h"

void VRegIncr2stage_noparam___024root____Vdpiexp_RegIncr2stage_noparam__DOT__v__DOT__reg_incr_0__DOT__line_trace_TOP(VRegIncr2stage_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VRegIncr2stage_noparam__Syms::~VRegIncr2stage_noparam__Syms()
{
}

VRegIncr2stage_noparam__Syms::VRegIncr2stage_noparam__Syms(VerilatedContext* contextp, const char* namep, VRegIncr2stage_noparam* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(2583);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_RegIncr2stage_noparam__v__reg_incr_0.configure(this, name(), "RegIncr2stage_noparam.v.reg_incr_0", "reg_incr_0", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_RegIncr2stage_noparam__v__reg_incr_0.exportInsert(__Vfinal, "line_trace", (void*)(&VRegIncr2stage_noparam___024root____Vdpiexp_RegIncr2stage_noparam__DOT__v__DOT__reg_incr_0__DOT__line_trace_TOP));
    }
}
