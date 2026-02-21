// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_tb.h for the primary calling header

#include "Vjk_tb__pch.h"
#include "Vjk_tb___024root.h"

VL_ATTR_COLD void Vjk_tb___024root___eval_initial__TOP(Vjk_tb___024root* vlSelf);
VlCoroutine Vjk_tb___024root___eval_initial__TOP__Vtiming__0(Vjk_tb___024root* vlSelf);
VlCoroutine Vjk_tb___024root___eval_initial__TOP__Vtiming__1(Vjk_tb___024root* vlSelf);

void Vjk_tb___024root___eval_initial(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_initial\n"); );
    // Body
    Vjk_tb___024root___eval_initial__TOP(vlSelf);
    Vjk_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vjk_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__jk_tb__DOT__clk__0 
        = vlSelf->jk_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__jk_tb__DOT__rst__0 
        = vlSelf->jk_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vjk_tb___024root___eval_initial__TOP__Vtiming__1(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "jk_tb.v", 
                                           5);
        vlSelf->__Vdlyvval__jk_tb__DOT__clk__v0 = (1U 
                                                   & (~ (IData)(vlSelf->jk_tb__DOT__clk)));
        vlSelf->__Vdlyvset__jk_tb__DOT__clk__v0 = 1U;
    }
}

void Vjk_tb___024root___act_sequent__TOP__0(Vjk_tb___024root* vlSelf);

void Vjk_tb___024root___eval_act(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vjk_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vjk_tb___024root___nba_sequent__TOP__0(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->jk_tb__DOT__q = ((1U & (~ (IData)(vlSelf->jk_tb__DOT__rst))) 
                             && ((IData)(vlSelf->jk_tb__DOT__j)
                                  ? ((1U & (~ (IData)(vlSelf->jk_tb__DOT__k))) 
                                     || (1U & (~ (IData)(vlSelf->jk_tb__DOT__q))))
                                  : ((1U & (~ (IData)(vlSelf->jk_tb__DOT__k))) 
                                     && (IData)(vlSelf->jk_tb__DOT__q))));
}

VL_INLINE_OPT void Vjk_tb___024root___nba_sequent__TOP__1(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__jk_tb__DOT__clk__v0) {
        vlSelf->jk_tb__DOT__clk = vlSelf->__Vdlyvval__jk_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__jk_tb__DOT__clk__v0 = 0U;
    }
}

void Vjk_tb___024root___eval_nba(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vjk_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vjk_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vjk_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vjk_tb___024root___timing_resume(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vjk_tb___024root___eval_triggers__act(Vjk_tb___024root* vlSelf);

bool Vjk_tb___024root___eval_phase__act(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vjk_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vjk_tb___024root___timing_resume(vlSelf);
        Vjk_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vjk_tb___024root___eval_phase__nba(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vjk_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_tb___024root___dump_triggers__nba(Vjk_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_tb___024root___dump_triggers__act(Vjk_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vjk_tb___024root___eval(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vjk_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("jk_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vjk_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("jk_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vjk_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vjk_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vjk_tb___024root___eval_debug_assertions(Vjk_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
