// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux_4x1_tb__Syms.h"


VL_ATTR_COLD void Vmux_4x1_tb___024root__trace_init_sub__TOP__0(Vmux_4x1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("mux_4x1_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"i0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"i0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"i3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"s0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"s1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmux_4x1_tb___024root__trace_init_top(Vmux_4x1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root__trace_init_top\n"); );
    // Body
    Vmux_4x1_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux_4x1_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vmux_4x1_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux_4x1_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmux_4x1_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux_4x1_tb___024root__trace_register(Vmux_4x1_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vmux_4x1_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmux_4x1_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmux_4x1_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmux_4x1_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux_4x1_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root__trace_const_0\n"); );
    // Init
    Vmux_4x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux_4x1_tb___024root*>(voidSelf);
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmux_4x1_tb___024root__trace_full_0_sub_0(Vmux_4x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmux_4x1_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root__trace_full_0\n"); );
    // Init
    Vmux_4x1_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux_4x1_tb___024root*>(voidSelf);
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux_4x1_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmux_4x1_tb___024root__trace_full_0_sub_0(Vmux_4x1_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux_4x1_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_4x1_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->mux_4x1_tb__DOT__i0));
    bufp->fullBit(oldp+2,(vlSelf->mux_4x1_tb__DOT__i1));
    bufp->fullBit(oldp+3,(vlSelf->mux_4x1_tb__DOT__i2));
    bufp->fullBit(oldp+4,(vlSelf->mux_4x1_tb__DOT__i3));
    bufp->fullBit(oldp+5,(vlSelf->mux_4x1_tb__DOT__s0));
    bufp->fullBit(oldp+6,(vlSelf->mux_4x1_tb__DOT__s1));
    bufp->fullBit(oldp+7,((((~ (IData)(vlSelf->mux_4x1_tb__DOT__s0)) 
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
