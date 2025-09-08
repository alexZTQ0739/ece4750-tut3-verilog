// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegIncrNstage___05Fp_nstages_6__pch.h"

//============================================================
// Constructors

VRegIncrNstage___05Fp_nstages_6::VRegIncrNstage___05Fp_nstages_6(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegIncrNstage___05Fp_nstages_6__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , in_{vlSymsp->TOP.in_}
    , out{vlSymsp->TOP.out}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRegIncrNstage___05Fp_nstages_6::VRegIncrNstage___05Fp_nstages_6(const char* _vcname__)
    : VRegIncrNstage___05Fp_nstages_6(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegIncrNstage___05Fp_nstages_6::~VRegIncrNstage___05Fp_nstages_6() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRegIncrNstage___05Fp_nstages_6___024root___eval_debug_assertions(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);
#endif  // VL_DEBUG
void VRegIncrNstage___05Fp_nstages_6___024root___eval_static(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);
void VRegIncrNstage___05Fp_nstages_6___024root___eval_initial(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);
void VRegIncrNstage___05Fp_nstages_6___024root___eval_settle(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);
void VRegIncrNstage___05Fp_nstages_6___024root___eval(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);

void VRegIncrNstage___05Fp_nstages_6::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegIncrNstage___05Fp_nstages_6::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegIncrNstage___05Fp_nstages_6___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRegIncrNstage___05Fp_nstages_6___024root___eval_static(&(vlSymsp->TOP));
        VRegIncrNstage___05Fp_nstages_6___024root___eval_initial(&(vlSymsp->TOP));
        VRegIncrNstage___05Fp_nstages_6___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRegIncrNstage___05Fp_nstages_6___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRegIncrNstage___05Fp_nstages_6::eventsPending() { return false; }

uint64_t VRegIncrNstage___05Fp_nstages_6::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRegIncrNstage___05Fp_nstages_6::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRegIncrNstage___05Fp_nstages_6___024root___eval_final(VRegIncrNstage___05Fp_nstages_6___024root* vlSelf);

VL_ATTR_COLD void VRegIncrNstage___05Fp_nstages_6::final() {
    VRegIncrNstage___05Fp_nstages_6___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegIncrNstage___05Fp_nstages_6::hierName() const { return vlSymsp->name(); }
const char* VRegIncrNstage___05Fp_nstages_6::modelName() const { return "VRegIncrNstage___05Fp_nstages_6"; }
unsigned VRegIncrNstage___05Fp_nstages_6::threads() const { return 1; }
void VRegIncrNstage___05Fp_nstages_6::prepareClone() const { contextp()->prepareClone(); }
void VRegIncrNstage___05Fp_nstages_6::atClone() const {
    contextp()->threadPoolpOnClone();
}
