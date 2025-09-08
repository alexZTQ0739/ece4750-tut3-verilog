// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGINCR2STAGE_NOPARAM__SYMS_H_
#define VERILATED_VREGINCR2STAGE_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRegIncr2stage_noparam.h"

// INCLUDE MODULE CLASSES
#include "VRegIncr2stage_noparam___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VRegIncr2stage_noparam__Vcb_line_trace_t = void (*) (VRegIncr2stage_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRegIncr2stage_noparam__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRegIncr2stage_noparam* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRegIncr2stage_noparam___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_RegIncr2stage_noparam__v__reg_incr_0;

    // CONSTRUCTORS
    VRegIncr2stage_noparam__Syms(VerilatedContext* contextp, const char* namep, VRegIncr2stage_noparam* modelp);
    ~VRegIncr2stage_noparam__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
