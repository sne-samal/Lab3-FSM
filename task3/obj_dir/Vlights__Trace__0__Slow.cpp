// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlights__Syms.h"


VL_ATTR_COLD void Vlights___024root__trace_init_sub__TOP__0(Vlights___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("lights ");
    tracep->declBus(c+8,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"data_out", false,-1, 7,0);
    tracep->declBit(c+4,"tick", false,-1);
    tracep->pushNamePrefix("fsm ");
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+4,"en", false,-1);
    tracep->declBus(c+3,"data_out", false,-1, 7,0);
    tracep->declBus(c+5,"current_state", false,-1, 31,0);
    tracep->declBus(c+6,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ticker ");
    tracep->declBus(c+9,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+10,"en", false,-1);
    tracep->declBus(c+11,"N", false,-1, 15,0);
    tracep->declBit(c+4,"tick", false,-1);
    tracep->declBus(c+7,"count", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vlights___024root__trace_init_top(Vlights___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root__trace_init_top\n"); );
    // Body
    Vlights___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vlights___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlights___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vlights___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vlights___024root__trace_register(Vlights___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vlights___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vlights___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vlights___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vlights___024root__trace_full_sub_0(Vlights___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vlights___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root__trace_full_top_0\n"); );
    // Init
    Vlights___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlights___024root*>(voidSelf);
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vlights___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vlights___024root__trace_full_sub_0(Vlights___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullCData(oldp+3,(vlSelf->data_out),8);
    bufp->fullBit(oldp+4,(vlSelf->lights__DOT__tick));
    bufp->fullIData(oldp+5,(vlSelf->lights__DOT__fsm__DOT__current_state),32);
    bufp->fullIData(oldp+6,((((((((((0U == vlSelf->lights__DOT__fsm__DOT__current_state) 
                                    | (1U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                                   | (2U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                                  | (3U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                                 | (4U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                                | (5U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                               | (6U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
                              | (7U == vlSelf->lights__DOT__fsm__DOT__current_state))
                              ? ((0U == vlSelf->lights__DOT__fsm__DOT__current_state)
                                  ? 1U : ((1U == vlSelf->lights__DOT__fsm__DOT__current_state)
                                           ? 2U : (
                                                   (2U 
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
    bufp->fullSData(oldp+7,(vlSelf->lights__DOT__ticker__DOT__count),16);
    bufp->fullIData(oldp+8,(8U),32);
    bufp->fullIData(oldp+9,(0x10U),32);
    bufp->fullBit(oldp+10,(1U));
    bufp->fullSData(oldp+11,(0x1bU),16);
}
