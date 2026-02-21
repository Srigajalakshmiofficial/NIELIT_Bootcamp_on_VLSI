// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vha_tb.h for the primary calling header

#include "Vha_tb__pch.h"
#include "Vha_tb__Syms.h"
#include "Vha_tb___024root.h"

void Vha_tb___024root___ctor_var_reset(Vha_tb___024root* vlSelf);

Vha_tb___024root::Vha_tb___024root(Vha_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vha_tb___024root___ctor_var_reset(this);
}

void Vha_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vha_tb___024root::~Vha_tb___024root() {
}
