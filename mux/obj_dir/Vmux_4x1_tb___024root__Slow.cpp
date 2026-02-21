// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_4x1_tb.h for the primary calling header

#include "Vmux_4x1_tb__pch.h"
#include "Vmux_4x1_tb__Syms.h"
#include "Vmux_4x1_tb___024root.h"

void Vmux_4x1_tb___024root___ctor_var_reset(Vmux_4x1_tb___024root* vlSelf);

Vmux_4x1_tb___024root::Vmux_4x1_tb___024root(Vmux_4x1_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmux_4x1_tb___024root___ctor_var_reset(this);
}

void Vmux_4x1_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmux_4x1_tb___024root::~Vmux_4x1_tb___024root() {
}
