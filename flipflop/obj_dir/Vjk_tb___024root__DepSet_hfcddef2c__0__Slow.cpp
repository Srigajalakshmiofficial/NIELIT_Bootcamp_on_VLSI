// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_tb.h for the primary calling header

#include "Vjk_tb__pch.h"
#include "Vjk_tb___024root.h"

VL_ATTR_COLD void Vjk_tb___024root___eval_static(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vjk_tb___024root___eval_final(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_tb___024root___dump_triggers__stl(Vjk_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vjk_tb___024root___eval_phase__stl(Vjk_tb___024root* vlSelf);

VL_ATTR_COLD void Vjk_tb___024root___eval_settle(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vjk_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("jk_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vjk_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_tb___024root___dump_triggers__stl(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vjk_tb___024root___act_sequent__TOP__0(Vjk_tb___024root* vlSelf);

VL_ATTR_COLD void Vjk_tb___024root___eval_stl(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vjk_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vjk_tb___024root___eval_triggers__stl(Vjk_tb___024root* vlSelf);

VL_ATTR_COLD bool Vjk_tb___024root___eval_phase__stl(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vjk_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vjk_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_tb___024root___dump_triggers__act(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge jk_tb.clk or posedge jk_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_tb___024root___dump_triggers__nba(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge jk_tb.clk or posedge jk_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vjk_tb___024root___ctor_var_reset(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->jk_tb__DOT__j = VL_RAND_RESET_I(1);
    vlSelf->jk_tb__DOT__k = VL_RAND_RESET_I(1);
    vlSelf->jk_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->jk_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->jk_tb__DOT__q = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__jk_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__jk_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__jk_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__jk_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
}
