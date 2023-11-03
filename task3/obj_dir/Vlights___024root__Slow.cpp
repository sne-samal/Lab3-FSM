// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlights.h for the primary calling header

#include "verilated.h"

#include "Vlights__Syms.h"
#include "Vlights___024root.h"

void Vlights___024root___ctor_var_reset(Vlights___024root* vlSelf);

Vlights___024root::Vlights___024root(Vlights__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlights___024root___ctor_var_reset(this);
}

void Vlights___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlights___024root::~Vlights___024root() {
}
