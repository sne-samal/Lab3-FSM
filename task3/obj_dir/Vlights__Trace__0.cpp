// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlights__Syms.h"


void Vlights___024root__trace_chg_sub_0(Vlights___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlights___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root__trace_chg_top_0\n"); );
    // Init
    Vlights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlights___024root*>(voidSelf);
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlights___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vlights___024root__trace_chg_sub_0(Vlights___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgCData(oldp+2,(vlSelf->data_out),8);
    bufp->chgBit(oldp+3,(vlSelf->lights__DOT__tick));
    bufp->chgIData(oldp+4,(vlSelf->lights__DOT__fsm__DOT__current_state),32);
    bufp->chgIData(oldp+5,((((((((((0U == vlSelf->lights__DOT__fsm__DOT__current_state) 
                                   | (1U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                                  | (2U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                                 | (3U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                                | (4U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                               | (5U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                              | (6U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                             | (7U == vlSelf->lights__DOT__fsm__DOT__current_state))
                             ? ((0U == vlSelf->lights__DOT__fsm__DOT__current_state)
                                 ? 1U : ((1U == vlSelf->lights__DOT__fsm__DOT__current_state)
                                          ? 2U : ((2U 
                                                   == vlSelf->lights__DOT__fsm__DOT__current_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == vlSelf->lights__DOT__fsm__DOT__current_state)
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == vlSelf->lights__DOT__fsm__DOT__current_state)
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == vlSelf->lights__DOT__fsm__DOT__current_state)
                                                      ? 6U
                                                      : 
                                                     ((6U 
                                                       == vlSelf->lights__DOT__fsm__DOT__current_state)
                                                       ? 7U
                                                       : 8U)))))))
                             : 0U)),32);
    bufp->chgSData(oldp+6,(vlSelf->lights__DOT__ticker__DOT__count),16);
}

void Vlights___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root__trace_cleanup\n"); );
    // Init
    Vlights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlights___024root*>(voidSelf);
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
