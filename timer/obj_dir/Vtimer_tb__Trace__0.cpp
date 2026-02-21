// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtimer_tb__Syms.h"


void Vtimer_tb___024root__trace_chg_0_sub_0(Vtimer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtimer_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root__trace_chg_0\n"); );
    // Init
    Vtimer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtimer_tb___024root*>(voidSelf);
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtimer_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtimer_tb___024root__trace_chg_0_sub_0(Vtimer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->timer_tb__DOT__done));
        bufp->chgSData(oldp+1,(vlSelf->timer_tb__DOT__dut__DOT__count),10);
        bufp->chgBit(oldp+2,(vlSelf->timer_tb__DOT__dut__DOT__running));
    }
    bufp->chgBit(oldp+3,(vlSelf->timer_tb__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelf->timer_tb__DOT__rst));
    bufp->chgBit(oldp+5,(vlSelf->timer_tb__DOT__start));
    bufp->chgSData(oldp+6,(vlSelf->timer_tb__DOT__load_Val),10);
    bufp->chgSData(oldp+7,(vlSelf->timer_tb__DOT__end_val),10);
}

void Vtimer_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root__trace_cleanup\n"); );
    // Init
    Vtimer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtimer_tb___024root*>(voidSelf);
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
