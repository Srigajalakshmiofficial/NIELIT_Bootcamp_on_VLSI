// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_4x1_tb.h for the primary calling header

#include "Vmux_4x1_tb__pch.h"
#include "Vmux_4x1_tb__Syms.h"
#include "Vmux_4x1_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmux_4x1_tb___024root___eval_initial__TOP__Vtiming__0(Vmux_4x1_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->mux_4x1_tb__DOT__i0 = 1U;
    vlSelf->mux_4x1_tb__DOT__i1 = 0U;
    vlSelf->mux_4x1_tb__DOT__i2 = 1U;
    vlSelf->mux_4x1_tb__DOT__i3 = 0U;
    vlSelf->mux_4x1_tb__DOT__s0 = 0U;
    vlSelf->mux_4x1_tb__DOT__s1 = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_4x1_tb.v", 
                                       13);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux_4x1_tb__DOT__s0 = 0U;
    vlSelf->mux_4x1_tb__DOT__s1 = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_4x1_tb.v", 
                                       14);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux_4x1_tb__DOT__s0 = 1U;
    vlSelf->mux_4x1_tb__DOT__s1 = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_4x1_tb.v", 
                                       15);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->mux_4x1_tb__DOT__s0 = 1U;
    vlSelf->mux_4x1_tb__DOT__s1 = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mux_4x1_tb.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("mux_4x1_tb.v", 17, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux_4x1_tb___024root___dump_triggers__act(Vmux_4x1_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux_4x1_tb___024root___eval_triggers__act(Vmux_4x1_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux_4x1_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vmux_4x1_tb___024root___act_sequent__TOP__0(Vmux_4x1_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("s0=%b,s1=%b,y=%b\n",1,vlSelf->mux_4x1_tb__DOT__s0,
                  1,(IData)(vlSelf->mux_4x1_tb__DOT__s1),
                  1,(((~ (IData)(vlSelf->mux_4x1_tb__DOT__s0)) 
                      & ((~ (IData)(vlSelf->mux_4x1_tb__DOT__s1)) 
                         & (IData)(vlSelf->mux_4x1_tb__DOT__i0))) 
                     | (((~ (IData)(vlSelf->mux_4x1_tb__DOT__s0)) 
                         & ((IData)(vlSelf->mux_4x1_tb__DOT__i1) 
                            & (IData)(vlSelf->mux_4x1_tb__DOT__s1))) 
                        | ((IData)(vlSelf->mux_4x1_tb__DOT__s0) 
                           & (((~ (IData)(vlSelf->mux_4x1_tb__DOT__s1)) 
                               & (IData)(vlSelf->mux_4x1_tb__DOT__i2)) 
                              | ((IData)(vlSelf->mux_4x1_tb__DOT__i3) 
                                 & (IData)(vlSelf->mux_4x1_tb__DOT__s1)))))));
    }
}
