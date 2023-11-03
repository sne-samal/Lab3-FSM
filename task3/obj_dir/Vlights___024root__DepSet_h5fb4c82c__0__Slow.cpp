// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlights.h for the primary calling header

#include "verilated.h"

#include "Vlights___024root.h"

VL_ATTR_COLD void Vlights___024root___settle__TOP__0(Vlights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root___settle__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vlights___024root___eval_initial(Vlights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vlights___024root___eval_settle(Vlights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root___eval_settle\n"); );
    // Body
    Vlights___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vlights___024root___final(Vlights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root___final\n"); );
}

VL_ATTR_COLD void Vlights___024root___ctor_var_reset(Vlights___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlights__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlights___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->lights__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->lights__DOT__ticker__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->lights__DOT__fsm__DOT__current_state = 0;
    vlSelf->lights__DOT__fsm__DOT__next_state = 0;
    vlSelf->__Vdly__lights__DOT__ticker__DOT__count = VL_RAND_RESET_I(16);
}
