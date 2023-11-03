// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlights.h for the primary calling header

#ifndef VERILATED_VLIGHTS___024ROOT_H_
#define VERILATED_VLIGHTS___024ROOT_H_  // guard

#include "verilated.h"

class Vlights__Syms;

class Vlights___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ lights__DOT__tick;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*15:0*/ lights__DOT__ticker__DOT__count;
    SData/*15:0*/ __Vdly__lights__DOT__ticker__DOT__count;
    IData/*31:0*/ lights__DOT__fsm__DOT__current_state;
    IData/*31:0*/ lights__DOT__fsm__DOT__next_state;

    // INTERNAL VARIABLES
    Vlights__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlights___024root(Vlights__Syms* symsp, const char* name);
    ~Vlights___024root();
    VL_UNCOPYABLE(Vlights___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
