// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer_tb.h for the primary calling header

#include "Vtimer_tb__pch.h"
#include "Vtimer_tb__Syms.h"
#include "Vtimer_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vtimer_tb___024root___eval_initial__TOP__Vtiming__0(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x696d6572U;
    __Vtemp_1[2U] = 0x54U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "timer_tb.v", 
                                       24);
    vlSelf->timer_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "timer_tb.v", 
                                       25);
    vlSelf->timer_tb__DOT__load_Val = 7U;
    vlSelf->timer_tb__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0xfULL, nullptr, 
                                       "timer_tb.v", 
                                       26);
    vlSelf->timer_tb__DOT__end_val = 2U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "timer_tb.v", 
                                       27);
    vlSelf->timer_tb__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "timer_tb.v", 
                                       28);
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "timer_tb.v", 
                                       29);
    vlSelf->timer_tb__DOT__load_Val = 5U;
    vlSelf->timer_tb__DOT__start = 1U;
    co_await vlSelf->__VdlySched.delay(0xfULL, nullptr, 
                                       "timer_tb.v", 
                                       30);
    vlSelf->timer_tb__DOT__end_val = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "timer_tb.v", 
                                       31);
    vlSelf->timer_tb__DOT__start = 0U;
    co_await vlSelf->__VdlySched.delay(0x96ULL, nullptr, 
                                       "timer_tb.v", 
                                       33);
    VL_FINISH_MT("timer_tb.v", 33, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_tb___024root___dump_triggers__act(Vtimer_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtimer_tb___024root___eval_triggers__act(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->timer_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->timer_tb__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__clk__0 
        = vlSelf->timer_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__rst__0 
        = vlSelf->timer_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtimer_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
