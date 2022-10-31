// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    CData/*0:0*/ top__DOT__dut__DOT__rd_wren;
    CData/*0:0*/ top__DOT__dut__DOT__br_unsigned;
    CData/*0:0*/ top__DOT__dut__DOT__op_a_sel;
    CData/*0:0*/ top__DOT__dut__DOT__op_b_sel;
    CData/*3:0*/ top__DOT__dut__DOT__alu_op;
    CData/*0:0*/ top__DOT__dut__DOT__mem_wren;
    CData/*1:0*/ top__DOT__dut__DOT__wb_sel;
    CData/*1:0*/ top__DOT__dut__DOT__imm_src;
    CData/*1:0*/ top__DOT__dut__DOT__cu__DOT____Vxrand_h96ff3613__1;
    CData/*1:0*/ top__DOT__dut__DOT__cu__DOT____Vxrand_h96ff3613__0;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__rst_ni;
    VL_IN(io_sw_i,31,0);
    VL_OUT(io_lcd_o,31,0);
    VL_OUT(io_ledg_o,31,0);
    VL_OUT(io_ledr_o,31,0);
    VL_OUT(io_hex0_o,31,0);
    VL_OUT(io_hex1_o,31,0);
    VL_OUT(io_hex2_o,31,0);
    VL_OUT(io_hex3_o,31,0);
    VL_OUT(io_hex4_o,31,0);
    VL_OUT(io_hex5_o,31,0);
    VL_OUT(io_hex6_o,31,0);
    VL_OUT(io_hex7_o,31,0);
    IData/*31:0*/ top__DOT__dut__DOT__pc_four;
    IData/*31:0*/ top__DOT__dut__DOT__alu_data;
    IData/*31:0*/ top__DOT__dut__DOT__pc_o;
    IData/*31:0*/ top__DOT__dut__DOT__instr;
    IData/*31:0*/ top__DOT__dut__DOT__rs1_data;
    IData/*31:0*/ top__DOT__dut__DOT__rs2_data;
    IData/*31:0*/ top__DOT__dut__DOT__imm;
    IData/*31:0*/ top__DOT__dut__DOT__operand_a;
    IData/*31:0*/ top__DOT__dut__DOT__operand_b;
    IData/*31:0*/ top__DOT__dut__DOT__ld_data;
    IData/*31:0*/ top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0;
    IData/*31:0*/ top__DOT__dut__DOT__al__DOT__subtractor;
    VlUnpacked<IData/*31:0*/, 4096> top__DOT__dut__DOT__im__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__rf__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
