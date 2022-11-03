// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__dut__DOT__br_sel));
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__dut__DOT__pc_four),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__dut__DOT__alu_data),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__dut__DOT__pc_o),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__dut__DOT__instr),32);
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__dut__DOT__rd_wren));
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__dut__DOT__rs1_data),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__dut__DOT__rs2_data),32);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__dut__DOT__br_less));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__dut__DOT__br_equal));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__dut__DOT__br_unsigned));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__dut__DOT__op_a_sel));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__dut__DOT__op_b_sel));
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__dut__DOT__alu_op),4);
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__dut__DOT__mem_wren));
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__dut__DOT__wb_sel),2);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__dut__DOT__imm),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__dut__DOT__operand_a),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__dut__DOT__operand_b),32);
        bufp->chgIData(oldp+19,(((vlSelf->top__DOT__dut__DOT__wdata__out0 
                                  | vlSelf->top__DOT__dut__DOT__wdata__out1) 
                                 | vlSelf->top__DOT__dut__DOT__wdata__out2)),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__dut__DOT__r_data),32);
        bufp->chgIData(oldp+21,(((((vlSelf->top__DOT__dut__DOT__ld_data__out8 
                                    | vlSelf->top__DOT__dut__DOT__ld_data__out9) 
                                   | vlSelf->top__DOT__dut__DOT__ld_data__out10) 
                                  | vlSelf->top__DOT__dut__DOT__ld_data__out11) 
                                 | vlSelf->top__DOT__dut__DOT__ld_data__out12)),32);
        bufp->chgIData(oldp+22,(((vlSelf->top__DOT__dut__DOT__wb_data__out4 
                                  | vlSelf->top__DOT__dut__DOT__wb_data__out5) 
                                 | vlSelf->top__DOT__dut__DOT__wb_data__out6)),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__dut__DOT__al__DOT__subtractor),32);
        bufp->chgIData(oldp+24,(((IData)(1U) + (vlSelf->top__DOT__dut__DOT__rs1_data 
                                                + (~ vlSelf->top__DOT__dut__DOT__rs2_data)))),32);
        bufp->chgBit(oldp+25,((((IData)(1U) + (vlSelf->top__DOT__dut__DOT__rs1_data 
                                               + (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                               >> 0x1fU)));
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__dut__DOT__ls__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+27,(((IData)(vlSelf->top__DOT__dut__DOT__br_sel)
                                  ? vlSelf->top__DOT__dut__DOT__alu_data
                                  : vlSelf->top__DOT__dut__DOT__pc_four)),32);
        bufp->chgCData(oldp+28,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+30,((0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[0]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[1]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[2]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[3]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[4]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[5]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[6]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[7]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[8]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[9]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[10]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[11]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[12]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[13]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[14]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[15]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[16]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[17]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[18]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[19]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[20]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[21]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[22]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[23]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[24]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[25]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[26]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[27]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[28]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[29]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[30]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__dut__DOT__rf__DOT__mem[31]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__dut__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+64,(vlSelf->clk_i));
    bufp->chgBit(oldp+65,(vlSelf->rst_ni));
    bufp->chgIData(oldp+66,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+67,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+68,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+69,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+70,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+71,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+72,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+73,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+74,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+75,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+76,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+77,(vlSelf->io_hex7_o),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
