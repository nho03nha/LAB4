module lsu
import mypkg::*;
(
    input logic clk_i,
    input logic rst_ni,
    input addr_sel_e addr_i,
    input logic [31:0]wdata_i,
    input logic wren_i,
    input logic [31:0]io_sw_i,

    output logic [31:0] rdata_o,
    output logic [31:0] io_lcd_o,
    output logic [31:0] io_ledg_o,
    output logic [31:0] io_ledr_o,
    output logic [31:0] io_hex0_o,
    output logic [31:0] io_hex1_o,
    output logic [31:0] io_hex2_o,
    output logic [31:0] io_hex3_o,
    output logic [31:0] io_hex4_o,
    output logic [31:0] io_hex5_o,
    output logic [31:0] io_hex6_o,
    output logic [31:0] io_hex7_o
);

always_ff @(posedge clk_i, negedge rst_ni) begin : proc_read
    if(rst_ni == 1'b0)
        begin
            rdata_o <= 32'b0;
            io_lcd_o  <= 32'b0;   
            io_ledg_o <= 32'b0;
            io_ledr_o <= 32'b0;
            io_hex0_o <= 32'b0;
            io_hex1_o <= 32'b0;
            io_hex2_o <= 32'b0;
            io_hex3_o <= 32'b0;
            io_hex4_o <= 32'b0;
            io_hex5_o <= 32'b0;
            io_hex6_o <= 32'b0;
            io_hex7_o <= 32'b0;
        end
    
    else if(wren_i)
        begin
            case (addr_i)
                LCD:  io_lcd_o  <= wdata_i;
                LEDG: io_ledg_o <= wdata_i;
                LEDR: io_ledr_o <= wdata_i;
                HEX7: io_hex7_o <= wdata_i;
                HEX6: io_hex6_o <= wdata_i;
                HEX5: io_hex5_o <= wdata_i;
                HEX4: io_hex4_o <= wdata_i;
                HEX3: io_hex3_o <= wdata_i;
                HEX2: io_hex2_o <= wdata_i;
                HEX1: io_hex1_o <= wdata_i;
                HEX0: io_hex0_o <= wdata_i;
                default: ;
            endcase
        end
    
    else if(!wren_i)
        begin
            case (addr_i)
                SW:   rdata_o <= io_sw_i;
                LCD:  rdata_o <= io_lcd_o ;
                LEDG: rdata_o <= io_ledg_o;
                LEDR: rdata_o <= io_ledr_o;
                HEX7: rdata_o <= io_hex7_o;
                HEX6: rdata_o <= io_hex6_o;
                HEX5: rdata_o <= io_hex5_o;
                HEX4: rdata_o <= io_hex4_o;
                HEX3: rdata_o <= io_hex3_o;
                HEX2: rdata_o <= io_hex2_o;
                HEX1: rdata_o <= io_hex1_o;
                HEX0: rdata_o <= io_hex0_o;
                default: ;
            endcase
        end
end

endmodule: lsu
