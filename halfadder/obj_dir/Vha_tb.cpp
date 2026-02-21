// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vha_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vha_tb::Vha_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vha_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vha_tb::Vha_tb(const char* _vcname__)
    : Vha_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vha_tb::~Vha_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vha_tb___024root___eval_debug_assertions(Vha_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vha_tb___024root___eval_static(Vha_tb___024root* vlSelf);
void Vha_tb___024root___eval_initial(Vha_tb___024root* vlSelf);
void Vha_tb___024root___eval_settle(Vha_tb___024root* vlSelf);
void Vha_tb___024root___eval(Vha_tb___024root* vlSelf);

void Vha_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vha_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vha_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vha_tb___024root___eval_static(&(vlSymsp->TOP));
        Vha_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vha_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vha_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vha_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vha_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vha_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vha_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vha_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vha_tb___024root___eval_final(Vha_tb___024root* vlSelf);

VL_ATTR_COLD void Vha_tb::final() {
    Vha_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vha_tb::hierName() const { return vlSymsp->name(); }
const char* Vha_tb::modelName() const { return "Vha_tb"; }
unsigned Vha_tb::threads() const { return 1; }
void Vha_tb::prepareClone() const { contextp()->prepareClone(); }
void Vha_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vha_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vha_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vha_tb___024root__trace_init_top(Vha_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vha_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vha_tb___024root*>(voidSelf);
    Vha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vha_tb___024root__trace_decl_types(tracep);
    Vha_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vha_tb___024root__trace_register(Vha_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vha_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vha_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vha_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
