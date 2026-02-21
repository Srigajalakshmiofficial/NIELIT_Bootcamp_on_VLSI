// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vha_tb.h for the primary calling header

#include "Vha_tb__pch.h"
#include "Vha_tb__Syms.h"
#include "Vha_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vha_tb___024root___eval_initial__TOP__Vtiming__0(Vha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vha_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->ha_tb__DOT__a = 0U;
    vlSelf->ha_tb__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ha_tb.v", 11);
    vlSelf->ha_tb__DOT__a = 0U;
    vlSelf->ha_tb__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ha_tb.v", 12);
    vlSelf->ha_tb__DOT__a = 1U;
    vlSelf->ha_tb__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ha_tb.v", 13);
    vlSelf->ha_tb__DOT__a = 1U;
    vlSelf->ha_tb__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "ha_tb.v", 14);
    VL_FINISH_MT("ha_tb.v", 15, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vha_tb___024root___dump_triggers__act(Vha_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vha_tb___024root___eval_triggers__act(Vha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vha_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vha_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vha_tb___024root___act_sequent__TOP__0(Vha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vha_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("time=$time, a=%0b,b=%b,sum=%b,carry=%b\n",
                  1,vlSelf->ha_tb__DOT__a,1,(IData)(vlSelf->ha_tb__DOT__b),
                  1,((IData)(vlSelf->ha_tb__DOT__a) 
                     ^ (IData)(vlSelf->ha_tb__DOT__b)),
                  1,((IData)(vlSelf->ha_tb__DOT__a) 
                     & (IData)(vlSelf->ha_tb__DOT__b)));
    }
}
