// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vha_tb.h for the primary calling header

#include "Vha_tb__pch.h"
#include "Vha_tb__Syms.h"
#include "Vha_tb___024unit.h"

void Vha_tb___024unit___ctor_var_reset(Vha_tb___024unit* vlSelf);

Vha_tb___024unit::Vha_tb___024unit(Vha_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vha_tb___024unit___ctor_var_reset(this);
}

void Vha_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vha_tb___024unit::~Vha_tb___024unit() {
}
