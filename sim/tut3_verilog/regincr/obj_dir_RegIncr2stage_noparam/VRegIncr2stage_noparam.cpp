// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegIncr2stage_noparam__pch.h"

//============================================================
// Constructors

VRegIncr2stage_noparam::VRegIncr2stage_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegIncr2stage_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , in_{vlSymsp->TOP.in_}
    , out{vlSymsp->TOP.out}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRegIncr2stage_noparam::VRegIncr2stage_noparam(const char* _vcname__)
    : VRegIncr2stage_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegIncr2stage_noparam::~VRegIncr2stage_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRegIncr2stage_noparam___024root___eval_debug_assertions(VRegIncr2stage_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VRegIncr2stage_noparam___024root___eval_static(VRegIncr2stage_noparam___024root* vlSelf);
void VRegIncr2stage_noparam___024root___eval_initial(VRegIncr2stage_noparam___024root* vlSelf);
void VRegIncr2stage_noparam___024root___eval_settle(VRegIncr2stage_noparam___024root* vlSelf);
void VRegIncr2stage_noparam___024root___eval(VRegIncr2stage_noparam___024root* vlSelf);

void VRegIncr2stage_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegIncr2stage_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegIncr2stage_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRegIncr2stage_noparam___024root___eval_static(&(vlSymsp->TOP));
        VRegIncr2stage_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VRegIncr2stage_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRegIncr2stage_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRegIncr2stage_noparam::eventsPending() { return false; }

uint64_t VRegIncr2stage_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRegIncr2stage_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRegIncr2stage_noparam___024root___eval_final(VRegIncr2stage_noparam___024root* vlSelf);

VL_ATTR_COLD void VRegIncr2stage_noparam::final() {
    VRegIncr2stage_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegIncr2stage_noparam::hierName() const { return vlSymsp->name(); }
const char* VRegIncr2stage_noparam::modelName() const { return "VRegIncr2stage_noparam"; }
unsigned VRegIncr2stage_noparam::threads() const { return 1; }
void VRegIncr2stage_noparam::prepareClone() const { contextp()->prepareClone(); }
void VRegIncr2stage_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
