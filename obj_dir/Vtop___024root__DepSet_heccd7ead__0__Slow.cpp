// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h2e5ff9df__0;
    // Body
    vlSelf->top__DOT__dut__DOT__cu__DOT____Vxrand_h96ff3613__1 
        = (3U & VL_RAND_RESET_I(2));
    vlSelf->top__DOT__dut__DOT__cu__DOT____Vxrand_h96ff3613__0 
        = (3U & VL_RAND_RESET_I(2));
    vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    __Vtemp_h2e5ff9df__0[0U] = 0x64617461U;
    __Vtemp_h2e5ff9df__0[1U] = 0x6d656d2eU;
    __Vtemp_h2e5ff9df__0[2U] = 0x696e7374U;
    __Vtemp_h2e5ff9df__0[3U] = 0x6f72792fU;
    __Vtemp_h2e5ff9df__0[4U] = 0x6d656dU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h2e5ff9df__0)
                 ,  &(vlSelf->top__DOT__dut__DOT__im__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__instr = vlSelf->top__DOT__dut__DOT__im__DOT__mem
        [(0xfffU & (vlSelf->top__DOT__dut__DOT__pc_o 
                    >> 2U))];
    if ((0x40U & vlSelf->top__DOT__dut__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__dut__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__dut__DOT__instr)) {
                    if ((4U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                                vlSelf->top__DOT__dut__DOT__mem_wren = 0U;
                                vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                                vlSelf->top__DOT__dut__DOT__wb_sel = 2U;
                                vlSelf->top__DOT__dut__DOT__op_a_sel = 1U;
                                vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                                     >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                            vlSelf->top__DOT__dut__DOT__mem_wren = 0U;
                            vlSelf->top__DOT__dut__DOT__rd_wren = 0U;
                            vlSelf->top__DOT__dut__DOT__wb_sel 
                                = vlSelf->top__DOT__dut__DOT__cu__DOT____Vxrand_h96ff3613__1;
                            vlSelf->top__DOT__dut__DOT__op_a_sel = 1U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                            if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                                if ((5U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                                  >> 0xcU)))) {
                                    vlSelf->top__DOT__dut__DOT__br_unsigned = 0U;
                                } else if ((7U == (7U 
                                                   & (vlSelf->top__DOT__dut__DOT__instr 
                                                      >> 0xcU)))) {
                                    vlSelf->top__DOT__dut__DOT__br_unsigned = 1U;
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm = ((0x10U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0
                                                : (
                                                   (8U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? 
                                                   ((4U 
                                                     & vlSelf->top__DOT__dut__DOT__instr)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | ((0xff000U 
                                                           & vlSelf->top__DOT__dut__DOT__instr) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__dut__DOT__instr 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->top__DOT__dut__DOT__instr 
                                                                   >> 0x14U)))))
                                                       : vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0)
                                                      : vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0)
                                                     : vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0)
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__dut__DOT__instr)
                                                     ? vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0
                                                     : 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__instr)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__dut__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__dut__DOT__instr 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__dut__DOT__instr 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__dut__DOT__instr 
                                                                   >> 7U)))))
                                                       : vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0)
                                                      : vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0))));
        } else {
            vlSelf->top__DOT__dut__DOT__imm = vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0;
        }
    } else if ((0x20U & vlSelf->top__DOT__dut__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__dut__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                            vlSelf->top__DOT__dut__DOT__mem_wren = 0U;
                            vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                            vlSelf->top__DOT__dut__DOT__wb_sel = 0U;
                            vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel = 0U;
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm = vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0;
        } else {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                        if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                            vlSelf->top__DOT__dut__DOT__mem_wren = 1U;
                            vlSelf->top__DOT__dut__DOT__rd_wren = 0U;
                            vlSelf->top__DOT__dut__DOT__wb_sel 
                                = vlSelf->top__DOT__dut__DOT__cu__DOT____Vxrand_h96ff3613__0;
                            vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                            vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                        }
                    }
                }
            }
            vlSelf->top__DOT__dut__DOT__imm = ((8U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0
                                                : (
                                                   (4U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0
                                                    : 
                                                   ((2U 
                                                     & vlSelf->top__DOT__dut__DOT__instr)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->top__DOT__dut__DOT__instr)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__dut__DOT__instr 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelf->top__DOT__dut__DOT__instr 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->top__DOT__dut__DOT__instr 
                                                               >> 7U))))
                                                      : vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0)
                                                     : vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0)));
        }
    } else if ((0x10U & vlSelf->top__DOT__dut__DOT__instr)) {
        if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dut__DOT__instr 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__dut__DOT__instr)) {
                    if ((1U & vlSelf->top__DOT__dut__DOT__instr)) {
                        vlSelf->top__DOT__dut__DOT__mem_wren = 0U;
                        vlSelf->top__DOT__dut__DOT__rd_wren = 1U;
                        vlSelf->top__DOT__dut__DOT__wb_sel = 0U;
                        vlSelf->top__DOT__dut__DOT__op_a_sel = 0U;
                        vlSelf->top__DOT__dut__DOT__op_b_sel = 1U;
                    }
                }
            }
        }
        vlSelf->top__DOT__dut__DOT__imm = ((8U & vlSelf->top__DOT__dut__DOT__instr)
                                            ? vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0
                                            : ((4U 
                                                & vlSelf->top__DOT__dut__DOT__instr)
                                                ? vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0
                                                : (
                                                   (2U 
                                                    & vlSelf->top__DOT__dut__DOT__instr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->top__DOT__dut__DOT__instr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__dut__DOT__instr 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->top__DOT__dut__DOT__instr 
                                                        >> 0x14U))
                                                     : vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0)
                                                    : vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0)));
    } else {
        vlSelf->top__DOT__dut__DOT__imm = vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0;
    }
    if (((0x33U == (0x7fU & vlSelf->top__DOT__dut__DOT__instr)) 
         | (0x13U == (0x7fU & vlSelf->top__DOT__dut__DOT__instr)))) {
        if ((0x40000000U & vlSelf->top__DOT__dut__DOT__instr)) {
            if ((0U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                              >> 0xcU)))) {
                vlSelf->top__DOT__dut__DOT__alu_op = 9U;
            } else if ((5U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__dut__DOT__alu_op = 6U;
            }
        } else if ((0U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__dut__DOT__alu_op = 0U;
        } else if ((1U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__dut__DOT__alu_op = 1U;
        } else if ((2U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__dut__DOT__alu_op = 2U;
        } else if ((3U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__dut__DOT__alu_op = 3U;
        } else if ((4U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__dut__DOT__alu_op = 4U;
        } else if ((5U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__dut__DOT__alu_op = 5U;
        } else if ((6U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__dut__DOT__alu_op = 7U;
        } else if ((7U == (7U & (vlSelf->top__DOT__dut__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__dut__DOT__alu_op = 8U;
        }
    } else {
        vlSelf->top__DOT__dut__DOT__alu_op = 0U;
    }
    vlSelf->top__DOT__dut__DOT__rs1_data = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xfU)))
                                             ? vlSelf->top__DOT__dut__DOT__rf__DOT__mem
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0xfU))]
                                             : 0U);
    vlSelf->top__DOT__dut__DOT__rs2_data = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0x14U)))
                                             ? vlSelf->top__DOT__dut__DOT__rf__DOT__mem
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__dut__DOT__instr 
                                                 >> 0x14U))]
                                             : 0U);
    vlSelf->top__DOT__dut__DOT__operand_a = ((IData)(vlSelf->top__DOT__dut__DOT__op_a_sel)
                                              ? vlSelf->top__DOT__dut__DOT__pc_o
                                              : vlSelf->top__DOT__dut__DOT__rs1_data);
    vlSelf->top__DOT__dut__DOT__operand_b = ((IData)(vlSelf->top__DOT__dut__DOT__op_b_sel)
                                              ? vlSelf->top__DOT__dut__DOT__imm
                                              : vlSelf->top__DOT__dut__DOT__rs2_data);
    vlSelf->top__DOT__dut__DOT__al__DOT__subtractor 
        = ((IData)(1U) + (vlSelf->top__DOT__dut__DOT__operand_a 
                          + (~ vlSelf->top__DOT__dut__DOT__operand_b)));
    if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__dut__DOT__alu_op) 
                          >> 1U)))) {
                vlSelf->top__DOT__dut__DOT__alu_data 
                    = ((1U & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                        ? vlSelf->top__DOT__dut__DOT__al__DOT__subtractor
                        : (vlSelf->top__DOT__dut__DOT__operand_a 
                           & vlSelf->top__DOT__dut__DOT__operand_b));
            }
        }
    } else {
        vlSelf->top__DOT__dut__DOT__alu_data = ((4U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  (vlSelf->top__DOT__dut__DOT__operand_a 
                                                   | vlSelf->top__DOT__dut__DOT__operand_b)
                                                   : 
                                                  ((0x1fU 
                                                    >= vlSelf->top__DOT__dut__DOT__operand_b)
                                                    ? 
                                                   (vlSelf->top__DOT__dut__DOT__operand_a 
                                                    >> vlSelf->top__DOT__dut__DOT__operand_b)
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  ((0x1fU 
                                                    >= vlSelf->top__DOT__dut__DOT__operand_b)
                                                    ? 
                                                   (vlSelf->top__DOT__dut__DOT__operand_a 
                                                    >> vlSelf->top__DOT__dut__DOT__operand_b)
                                                    : 0U)
                                                   : 
                                                  (vlSelf->top__DOT__dut__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__operand_b)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  ((vlSelf->top__DOT__dut__DOT__operand_a 
                                                    < vlSelf->top__DOT__dut__DOT__operand_b)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (vlSelf->top__DOT__dut__DOT__al__DOT__subtractor 
                                                   >> 0x1fU))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__alu_op))
                                                   ? 
                                                  ((0x1fU 
                                                    >= vlSelf->top__DOT__dut__DOT__operand_b)
                                                    ? 
                                                   (vlSelf->top__DOT__dut__DOT__operand_a 
                                                    << vlSelf->top__DOT__dut__DOT__operand_b)
                                                    : 0U)
                                                   : 
                                                  (vlSelf->top__DOT__dut__DOT__operand_a 
                                                   + vlSelf->top__DOT__dut__DOT__operand_b))));
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__pc_four = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__br_unsigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__op_a_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__op_b_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__imm_src = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ld_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__im__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__rf__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__dut__DOT__cu__DOT____Vxrand_h96ff3613__1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__cu__DOT____Vxrand_h96ff3613__0 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__imgen__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__al__DOT__subtractor = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
