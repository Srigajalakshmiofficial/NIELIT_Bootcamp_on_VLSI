// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux_4x1_tb.h for the primary calling header

#ifndef VERILATED_VMUX_4X1_TB___024ROOT_H_
#define VERILATED_VMUX_4X1_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vmux_4x1_tb___024unit;


class Vmux_4x1_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux_4x1_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vmux_4x1_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mux_4x1_tb__DOT__i0;
    CData/*0:0*/ mux_4x1_tb__DOT__i1;
    CData/*0:0*/ mux_4x1_tb__DOT__i2;
    CData/*0:0*/ mux_4x1_tb__DOT__i3;
    CData/*0:0*/ mux_4x1_tb__DOT__s0;
    CData/*0:0*/ mux_4x1_tb__DOT__s1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux_4x1_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux_4x1_tb___024root(Vmux_4x1_tb__Syms* symsp, const char* v__name);
    ~Vmux_4x1_tb___024root();
    VL_UNCOPYABLE(Vmux_4x1_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
