// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGINCRNSTAGE___05FP_NSTAGES_3__SYMS_H_
#define VERILATED_VREGINCRNSTAGE___05FP_NSTAGES_3__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRegIncrNstage___05Fp_nstages_3.h"

// INCLUDE MODULE CLASSES
#include "VRegIncrNstage___05Fp_nstages_3___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VRegIncrNstage___05Fp_nstages_3__Vcb_line_trace_t = void (*) (VRegIncrNstage___05Fp_nstages_3__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRegIncrNstage___05Fp_nstages_3__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRegIncrNstage___05Fp_nstages_3* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRegIncrNstage___05Fp_nstages_3___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_RegIncrNstage___05Fp_nstages_3__v__gen__BRA__0__KET____reg_incr;
    VerilatedScope __Vscope_RegIncrNstage___05Fp_nstages_3__v__gen__BRA__1__KET____reg_incr;
    VerilatedScope __Vscope_RegIncrNstage___05Fp_nstages_3__v__gen__BRA__2__KET____reg_incr;

    // CONSTRUCTORS
    VRegIncrNstage___05Fp_nstages_3__Syms(VerilatedContext* contextp, const char* namep, VRegIncrNstage___05Fp_nstages_3* modelp);
    ~VRegIncrNstage___05Fp_nstages_3__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
