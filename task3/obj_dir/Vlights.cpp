// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlights.h"
#include "Vlights__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlights::Vlights(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlights__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlights::Vlights(const char* _vcname__)
    : Vlights(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlights::~Vlights() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vlights___024root___eval_initial(Vlights___024root* vlSelf);
void Vlights___024root___eval_settle(Vlights___024root* vlSelf);
void Vlights___024root___eval(Vlights___024root* vlSelf);
#ifdef VL_DEBUG
void Vlights___024root___eval_debug_assertions(Vlights___024root* vlSelf);
#endif  // VL_DEBUG
void Vlights___024root___final(Vlights___024root* vlSelf);

static void _eval_initial_loop(Vlights__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vlights___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vlights___024root___eval_settle(&(vlSymsp->TOP));
        Vlights___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vlights::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlights::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlights___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vlights___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vlights::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vlights::final() {
    Vlights___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlights::hierName() const { return vlSymsp->name(); }
const char* Vlights::modelName() const { return "Vlights"; }
unsigned Vlights::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vlights::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlights___024root__trace_init_top(Vlights___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlights___024root*>(voidSelf);
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vlights___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vlights___024root__trace_register(Vlights___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlights::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlights___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
