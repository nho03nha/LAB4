// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__dut__DOT__rf__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__dut__DOT__rf__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__rf__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__dut__DOT__rf__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__rf__DOT__mem__v1;
    VlWide<7>/*223:0*/ __Vtemp_h4d3eb16d__0;
    // Body
    __Vdlyvset__top__DOT__dut__DOT__rf__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__rf__DOT__mem__v1 = 0U;
    __Vtemp_h4d3eb16d__0[0U] = 0x64617461U;
    __Vtemp_h4d3eb16d__0[1U] = 0x6174612eU;
    __Vtemp_h4d3eb16d__0[2U] = 0x74657264U;
    __Vtemp_h4d3eb16d__0[3U] = 0x66676973U;
    __Vtemp_h4d3eb16d__0[4U] = 0x792f7265U;
    __Vtemp_h4d3eb16d__0[5U] = 0x656d6f72U;
    __Vtemp_h4d3eb16d__0[6U] = 0x6dU;
    VL_WRITEMEM_N(true, 32, 32, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h4d3eb16d__0)
                  ,  &(vlSelf->top__DOT__dut__DOT__rf__DOT__mem)
                  , 0, ~0ULL);
    if (vlSelf->rst_ni) {
        vlSelf->top__DOT__dut__DOT__pc_four = ((IData)(4U) 
                                               + vlSelf->top__DOT__dut__DOT__pc_o);
        if ((1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__mem_wren)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__dut__DOT__mem_wren)))) {
                if (((((((((0x500U == vlSelf->top__DOT__dut__DOT__alu_data) 
                           | (0x4a0U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                          | (0x490U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                         | (0x480U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                        | (0x470U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                       | (0x460U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                      | (0x450U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                     | (0x440U == vlSelf->top__DOT__dut__DOT__alu_data))) {
                    vlSelf->top__DOT__dut__DOT__ld_data 
                        = ((0x500U == vlSelf->top__DOT__dut__DOT__alu_data)
                            ? vlSelf->io_sw_i : ((0x4a0U 
                                                  == vlSelf->top__DOT__dut__DOT__alu_data)
                                                  ? vlSelf->io_lcd_o
                                                  : 
                                                 ((0x490U 
                                                   == vlSelf->top__DOT__dut__DOT__alu_data)
                                                   ? vlSelf->io_ledg_o
                                                   : 
                                                  ((0x480U 
                                                    == vlSelf->top__DOT__dut__DOT__alu_data)
                                                    ? vlSelf->io_ledr_o
                                                    : 
                                                   ((0x470U 
                                                     == vlSelf->top__DOT__dut__DOT__alu_data)
                                                     ? vlSelf->io_hex7_o
                                                     : 
                                                    ((0x460U 
                                                      == vlSelf->top__DOT__dut__DOT__alu_data)
                                                      ? vlSelf->io_hex6_o
                                                      : 
                                                     ((0x450U 
                                                       == vlSelf->top__DOT__dut__DOT__alu_data)
                                                       ? vlSelf->io_hex5_o
                                                       : vlSelf->io_hex4_o)))))));
                } else if ((0x430U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                    vlSelf->top__DOT__dut__DOT__ld_data 
                        = vlSelf->io_hex3_o;
                } else if ((0x420U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                    vlSelf->top__DOT__dut__DOT__ld_data 
                        = vlSelf->io_hex2_o;
                } else if ((0x410U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                    vlSelf->top__DOT__dut__DOT__ld_data 
                        = vlSelf->io_hex1_o;
                } else if ((0x400U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                    vlSelf->top__DOT__dut__DOT__ld_data 
                        = vlSelf->io_hex0_o;
                }
            }
        }
        if (vlSelf->top__DOT__dut__DOT__rd_wren) {
            __Vdlyvval__top__DOT__dut__DOT__rf__DOT__mem__v0 
                = vlSelf->top__DOT__dut__DOT__alu_data;
            __Vdlyvset__top__DOT__dut__DOT__rf__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__dut__DOT__rf__DOT__mem__v0 
                = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                            >> 7U));
        }
        vlSelf->top__DOT__dut__DOT__pc_o = ((1U & (
                                                   (((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__dut__DOT__instr)) 
                                                     & (~ 
                                                        ((vlSelf->top__DOT__dut__DOT__rs1_data 
                                                          == vlSelf->top__DOT__dut__DOT__rs2_data)
                                                          ? 1U
                                                          : 0U))) 
                                                    & (~ 
                                                       ((IData)(vlSelf->top__DOT__dut__DOT__br_unsigned)
                                                         ? 
                                                        (vlSelf->top__DOT__dut__DOT__rs1_data 
                                                         < vlSelf->top__DOT__dut__DOT__rs2_data)
                                                         : 
                                                        (((IData)(1U) 
                                                          + 
                                                          (vlSelf->top__DOT__dut__DOT__rs1_data 
                                                           + 
                                                           (~ vlSelf->top__DOT__dut__DOT__rs2_data))) 
                                                         >> 0x1fU)))) 
                                                   | ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__dut__DOT__instr))
                                                       ? 1U
                                                       : 0U)))
                                             ? vlSelf->top__DOT__dut__DOT__alu_data
                                             : vlSelf->top__DOT__dut__DOT__pc_four);
        if (vlSelf->top__DOT__dut__DOT__mem_wren) {
            if (((((((((0x4a0U == vlSelf->top__DOT__dut__DOT__alu_data) 
                       | (0x490U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                      | (0x480U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                     | (0x470U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                    | (0x460U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                   | (0x450U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                  | (0x440U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                 | (0x430U == vlSelf->top__DOT__dut__DOT__alu_data))) {
                if ((0x4a0U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                    vlSelf->io_lcd_o = vlSelf->top__DOT__dut__DOT__rs2_data;
                }
                if ((0x4a0U != vlSelf->top__DOT__dut__DOT__alu_data)) {
                    if ((0x490U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                        vlSelf->io_ledg_o = vlSelf->top__DOT__dut__DOT__rs2_data;
                    }
                    if ((0x490U != vlSelf->top__DOT__dut__DOT__alu_data)) {
                        if ((0x480U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                            vlSelf->io_ledr_o = vlSelf->top__DOT__dut__DOT__rs2_data;
                        }
                        if ((0x480U != vlSelf->top__DOT__dut__DOT__alu_data)) {
                            if ((0x470U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                                vlSelf->io_hex7_o = vlSelf->top__DOT__dut__DOT__rs2_data;
                            }
                            if ((0x470U != vlSelf->top__DOT__dut__DOT__alu_data)) {
                                if ((0x460U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                                    vlSelf->io_hex6_o 
                                        = vlSelf->top__DOT__dut__DOT__rs2_data;
                                }
                                if ((0x460U != vlSelf->top__DOT__dut__DOT__alu_data)) {
                                    if ((0x450U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                                        vlSelf->io_hex5_o 
                                            = vlSelf->top__DOT__dut__DOT__rs2_data;
                                    }
                                    if ((0x450U != vlSelf->top__DOT__dut__DOT__alu_data)) {
                                        if ((0x440U 
                                             == vlSelf->top__DOT__dut__DOT__alu_data)) {
                                            vlSelf->io_hex4_o 
                                                = vlSelf->top__DOT__dut__DOT__rs2_data;
                                        }
                                        if ((0x440U 
                                             != vlSelf->top__DOT__dut__DOT__alu_data)) {
                                            vlSelf->io_hex3_o 
                                                = vlSelf->top__DOT__dut__DOT__rs2_data;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((((((((0x4a0U == vlSelf->top__DOT__dut__DOT__alu_data) 
                                | (0x490U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                               | (0x480U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                              | (0x470U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                             | (0x460U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                            | (0x450U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                           | (0x440U == vlSelf->top__DOT__dut__DOT__alu_data)) 
                          | (0x430U == vlSelf->top__DOT__dut__DOT__alu_data))))) {
                if ((0x420U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                    vlSelf->io_hex2_o = vlSelf->top__DOT__dut__DOT__rs2_data;
                }
                if ((0x420U != vlSelf->top__DOT__dut__DOT__alu_data)) {
                    if ((0x410U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                        vlSelf->io_hex1_o = vlSelf->top__DOT__dut__DOT__rs2_data;
                    }
                    if ((0x410U != vlSelf->top__DOT__dut__DOT__alu_data)) {
                        if ((0x400U == vlSelf->top__DOT__dut__DOT__alu_data)) {
                            vlSelf->io_hex0_o = vlSelf->top__DOT__dut__DOT__rs2_data;
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__dut__DOT__ld_data = 0U;
        __Vdlyvset__top__DOT__dut__DOT__rf__DOT__mem__v1 = 1U;
        __Vdlyvdim0__top__DOT__dut__DOT__rf__DOT__mem__v1 
            = (0x1fU & (vlSelf->top__DOT__dut__DOT__instr 
                        >> 7U));
        vlSelf->top__DOT__dut__DOT__pc_o = 0U;
        vlSelf->io_lcd_o = 0U;
        vlSelf->io_ledg_o = 0U;
        vlSelf->io_ledr_o = 0U;
        vlSelf->io_hex7_o = 0U;
        vlSelf->io_hex6_o = 0U;
        vlSelf->io_hex5_o = 0U;
        vlSelf->io_hex4_o = 0U;
        vlSelf->io_hex3_o = 0U;
        vlSelf->io_hex2_o = 0U;
        vlSelf->io_hex1_o = 0U;
        vlSelf->io_hex0_o = 0U;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__rf__DOT__mem__v0) {
        vlSelf->top__DOT__dut__DOT__rf__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__rf__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__rf__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__rf__DOT__mem__v1) {
        vlSelf->top__DOT__dut__DOT__rf__DOT__mem[__Vdlyvdim0__top__DOT__dut__DOT__rf__DOT__mem__v1] = 0U;
    }
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
