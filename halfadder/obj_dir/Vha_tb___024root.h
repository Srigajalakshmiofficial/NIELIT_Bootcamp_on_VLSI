// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vha_tb.h for the primary calling header

#ifndef VERILATED_VHA_TB___024ROOT_H_
#define VERILATED_VHA_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vha_tb___024unit;


class Vha_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vha_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vha_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ha_tb__DOT__a;
    CData/*0:0*/ ha_tb__DOT__b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vha_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vha_tb___024root(Vha_tb__Syms* symsp, const char* v__name);
    ~Vha_tb___024root();
    VL_UNCOPYABLE(Vha_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
