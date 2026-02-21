// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer_tb.h for the primary calling header

#include "Vtimer_tb__pch.h"
#include "Vtimer_tb__Syms.h"
#include "Vtimer_tb___024root.h"

void Vtimer_tb___024root___ctor_var_reset(Vtimer_tb___024root* vlSelf);

Vtimer_tb___024root::Vtimer_tb___024root(Vtimer_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtimer_tb___024root___ctor_var_reset(this);
}

void Vtimer_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtimer_tb___024root::~Vtimer_tb___024root() {
}
