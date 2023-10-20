#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env){
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance 
    Vcounter* top = new Vcounter;
    // init trace dump 
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open ("counter.vcd");

    //innit VBuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("Lab 1: Counter");

    //initialize simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;
    top->dir = 1;

    int check = 0;

    //run simulation for many clock cycles
    for(i = 0; i < 500; i++){
        if(check!=0){check--;}
        
        //dump variables into VCD file and toggle clock 
        for(clk=0; clk<2; clk++){
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }


        // Send count value to VBuddy

        vbdHex(4, (int(top->count) >> 16) & 0xF);
        vbdHex(3, (int(top->count) >> 8) & 0xF);
        vbdHex(2, (int(top->count) >> 4) & 0xF);
        vbdHex(1, int(top->count) & 0xF);
        // end of Vbudy output section 
        vbdPlot(int(top->count), 0, 255);

        top->rst = (check == 1);
        top->en = ((top->count<9 && top->dir) || (top->count>0 && !top->dir));
        //single & and | means bitwise and and or
        top->dir = vbdFlag();
        if(!(top->en) && check == 0) {check = 3;}
        if(top->count==0 && !top->dir && check == 0) {top->count = 9;}

        if(Verilated::gotFinish())  exit(0);
    }
    vbdClose();
    tfp->close();
    exit(0);
}