#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vlfsr.h"

#include "vbuddy.cpp"


int main(int argc, char **argv, char **env){
    int i;
    int clk;


    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vlfsr* top = new Vlfsr;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("lfsr.vcd");

    if (vbdOpen()!=1) return(-1);
    vbdHeader("LFSR");

    // simulation input
    top->clk = 1; 
    top->rst = 0; 
    top->en = 1;

    for (i = 0; i<1000; i++)
    {
        
        for (clk = 0; clk<2; ++clk)
        {
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        vbdSetMode(1);
        top->en = vbdFlag();
        vbdHex(1, top->data_out & 0xF);
        vbdHex(2, (top->data_out >> 4) & 0xF);
        vbdBar(top->data_out & 0xFF);
        top->rst = (i < 2);
        vbdCycle(i+1);

        if (Verilated::gotFinish()) exit(0);
    }
    vbdClose();
    tfp->close();
    exit(0);
}