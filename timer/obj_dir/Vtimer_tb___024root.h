// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtimer_tb.h for the primary calling header

#ifndef VERILATED_VTIMER_TB___024ROOT_H_
#define VERILATED_VTIMER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtimer_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtimer_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ timer_tb__DOT__clk;
    CData/*0:0*/ timer_tb__DOT__rst;
    CData/*0:0*/ timer_tb__DOT__start;
    CData/*0:0*/ timer_tb__DOT__done;
    CData/*0:0*/ timer_tb__DOT__dut__DOT__running;
    CData/*0:0*/ __Vdlyvval__timer_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__timer_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__timer_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__timer_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ timer_tb__DOT__load_Val;
    SData/*9:0*/ timer_tb__DOT__end_val;
    SData/*9:0*/ timer_tb__DOT__dut__DOT__count;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtimer_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtimer_tb___024root(Vtimer_tb__Syms* symsp, const char* v__name);
    ~Vtimer_tb___024root();
    VL_UNCOPYABLE(Vtimer_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
