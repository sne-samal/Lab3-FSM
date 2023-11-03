// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlights.h for the primary calling header

#include "verilated.h"

#include "Vlights___024root.h"

VL_INLINE_OPT void Vlights___024root___sequent__TOP__0(Vlights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__lights__DOT__ticker__DOT__count 
        = vlSelf->lights__DOT__ticker__DOT__count;
}

VL_INLINE_OPT void Vlights___024root___sequent__TOP__1(Vlights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->lights__DOT__fsm__DOT__current_state = 0U;
    } else if (vlSelf->lights__DOT__tick) {
        vlSelf->lights__DOT__fsm__DOT__current_state 
            = vlSelf->lights__DOT__fsm__DOT__next_state;
    }
    if (((((((((0U == vlSelf->lights__DOT__fsm__DOT__current_state) 
               | (1U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
              | (2U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
             | (3U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
            | (4U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
           | (5U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
          | (6U == vlSelf->lights__DOT__fsm__DOT__current_state)) 
         | (7U == vlSelf->lights__DOT__fsm__DOT__current_state))) {
        if ((0U == vlSelf->lights__DOT__fsm__DOT__current_state)) {
            vlSelf->lights__DOT__fsm__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->lights__DOT__fsm__DOT__current_state)) {
            vlSelf->lights__DOT__fsm__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->lights__DOT__fsm__DOT__current_state)) {
            vlSelf->lights__DOT__fsm__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->lights__DOT__fsm__DOT__current_state)) {
            vlSelf->lights__DOT__fsm__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->lights__DOT__fsm__DOT__current_state)) {
            vlSelf->lights__DOT__fsm__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->lights__DOT__fsm__DOT__current_state)) {
            vlSelf->lights__DOT__fsm__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->lights__DOT__fsm__DOT__current_state)) {
            vlSelf->lights__DOT__fsm__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->lights__DOT__fsm__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->lights__DOT__fsm__DOT__next_state = 0U;
        vlSelf->data_out = ((8U == vlSelf->lights__DOT__fsm__DOT__current_state)
                             ? 0xffU : 0U);
    }
}

VL_INLINE_OPT void Vlights___024root___sequent__TOP__2(Vlights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->lights__DOT__tick = 0U;
        vlSelf->__Vdly__lights__DOT__ticker__DOT__count = 0x1bU;
    } else if ((0U == (IData)(vlSelf->lights__DOT__ticker__DOT__count))) {
        vlSelf->lights__DOT__tick = 1U;
        vlSelf->__Vdly__lights__DOT__ticker__DOT__count = 0x1bU;
    } else {
        vlSelf->__Vdly__lights__DOT__ticker__DOT__count 
            = (0xffffU & ((IData)(vlSelf->lights__DOT__ticker__DOT__count) 
                          - (IData)(1U)));
        vlSelf->lights__DOT__tick = 0U;
    }
    vlSelf->lights__DOT__ticker__DOT__count = vlSelf->__Vdly__lights__DOT__ticker__DOT__count;
}

void Vlights___024root___eval(Vlights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlights___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vlights___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlights___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vlights___024root___eval_debug_assertions(Vlights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
