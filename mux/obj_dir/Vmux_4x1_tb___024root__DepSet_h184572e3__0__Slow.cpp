// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_4x1_tb.h for the primary calling header

#include "Vmux_4x1_tb__pch.h"
#include "Vmux_4x1_tb__Syms.h"
#include "Vmux_4x1_tb___024root.h"

VL_ATTR_COLD void Vmux_4x1_tb___024root___eval_initial__TOP(Vmux_4x1_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f347831U;
    __Vtemp_1[2U] = 0x6d7578U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux_4x1_tb___024root___dump_triggers__stl(Vmux_4x1_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmux_4x1_tb___024root___eval_triggers__stl(Vmux_4x1_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux_4x1_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
