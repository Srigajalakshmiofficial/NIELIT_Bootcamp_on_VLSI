// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux_4x1_tb__Syms.h"


void Vmux_4x1_tb___024root__trace_chg_0_sub_0(Vmux_4x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmux_4x1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root__trace_chg_0\n"); );
    // Init
    Vmux_4x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux_4x1_tb___024root*>(voidSelf);
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux_4x1_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmux_4x1_tb___024root__trace_chg_0_sub_0(Vmux_4x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->mux_4x1_tb__DOT__i0));
        bufp->chgBit(oldp+1,(vlSelf->mux_4x1_tb__DOT__i1));
        bufp->chgBit(oldp+2,(vlSelf->mux_4x1_tb__DOT__i2));
        bufp->chgBit(oldp+3,(vlSelf->mux_4x1_tb__DOT__i3));
        bufp->chgBit(oldp+4,(vlSelf->mux_4x1_tb__DOT__s0));
        bufp->chgBit(oldp+5,(vlSelf->mux_4x1_tb__DOT__s1));
        bufp->chgBit(oldp+6,((((~ (IData)(vlSelf->mux_4x1_tb__DOT__s0)) 
                               & ((~ (IData)(vlSelf->mux_4x1_tb__DOT__s1)) 
                                  & (IData)(vlSelf->mux_4x1_tb__DOT__i0))) 
                              | (((~ (IData)(vlSelf->mux_4x1_tb__DOT__s0)) 
                                  & ((IData)(vlSelf->mux_4x1_tb__DOT__i1) 
                                     & (IData)(vlSelf->mux_4x1_tb__DOT__s1))) 
                                 | ((IData)(vlSelf->mux_4x1_tb__DOT__s0) 
                                    & (((~ (IData)(vlSelf->mux_4x1_tb__DOT__s1)) 
                                        & (IData)(vlSelf->mux_4x1_tb__DOT__i2)) 
                                       | ((IData)(vlSelf->mux_4x1_tb__DOT__i3) 
                                          & (IData)(vlSelf->mux_4x1_tb__DOT__s1))))))));
    }
}

void Vmux_4x1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root__trace_cleanup\n"); );
    // Init
    Vmux_4x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux_4x1_tb___024root*>(voidSelf);
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
