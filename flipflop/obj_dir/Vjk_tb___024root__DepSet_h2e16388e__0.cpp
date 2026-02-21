// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_tb.h for the primary calling header

#include "Vjk_tb__pch.h"
#include "Vjk_tb__Syms.h"
#include "Vjk_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vjk_tb___024root___eval_initial__TOP__Vtiming__0(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->jk_tb__DOT__clk = 0U;
    vlSelf->jk_tb__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(0xfULL, nullptr, 
                                       "jk_tb.v", 13);
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->jk_tb__DOT__rst = 0U;
    vlSelf->jk_tb__DOT__j = 0U;
    vlSelf->jk_tb__DOT__k = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "jk_tb.v", 16);
    vlSelf->jk_tb__DOT__j = 1U;
    vlSelf->jk_tb__DOT__k = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "jk_tb.v", 17);
    vlSelf->jk_tb__DOT__j = 0U;
    vlSelf->jk_tb__DOT__k = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "jk_tb.v", 18);
    vlSelf->jk_tb__DOT__j = 1U;
    vlSelf->jk_tb__DOT__k = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "jk_tb.v", 19);
    VL_FINISH_MT("jk_tb.v", 20, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_tb___024root___dump_triggers__act(Vjk_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vjk_tb___024root___eval_triggers__act(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->jk_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__jk_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->jk_tb__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__jk_tb__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__jk_tb__DOT__clk__0 
        = vlSelf->jk_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__jk_tb__DOT__rst__0 
        = vlSelf->jk_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjk_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vjk_tb___024root___act_sequent__TOP__0(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("clk= %0t , j= %b , k=%b,q=%b,qn=%1#\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->jk_tb__DOT__j),
                  1,vlSelf->jk_tb__DOT__k,1,(IData)(vlSelf->jk_tb__DOT__q),
                  1,(1U & (~ (IData)(vlSelf->jk_tb__DOT__q))));
    }
}
