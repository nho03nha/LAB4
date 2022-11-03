module lsu
(
    input logic clk_i,
    input logic rst_ni,
    input [31:0] addr_i,
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

typedef enum logic[31:0]{
    SW   = 32'h0500,
    
    LCD  = 32'h04A0,
    
    LEDG = 32'h0490,
    LEDR = 32'h0480,
    
    HEX7 = 32'h0470,
    HEX6 = 32'h0460,
    HEX5 = 32'h0450,
    HEX4 = 32'h0440,
    HEX3 = 32'h0430,
    HEX2 = 32'h0420,
    HEX1 = 32'h0410,
    HEX0 = 32'h0400
} addr_sel_e;

//addr_sel_e addr_i_e;
//assign addr_i_e = addr_i;
logic [31:0]mem [1534:0];
/* verilator lint_off WIDTH */
assign rdata_o = mem[addr_i[31:2]];
/* verilator lint_on WIDTH */
assign io_lcd_o  = mem[LCD];
assign io_ledg_o = mem[LEDG];
assign io_ledr_o = mem[LEDR];
assign io_hex7_o = mem[HEX7];
assign io_hex6_o = mem[HEX6];
assign io_hex5_o = mem[HEX5];
assign io_hex4_o = mem[HEX4];
assign io_hex3_o = mem[HEX3];
assign io_hex2_o = mem[HEX2];
assign io_hex1_o = mem[HEX1];
assign io_hex0_o = mem[HEX0];

always_ff @(posedge clk_i, negedge rst_ni) begin
    if (rst_ni == 1'b0) begin
        for (int i=0; i<1535; i=i+1) begin
            /* verilator lint_off BLKSEQ */
            mem [i] = 32'b0;
            /* verilator lint_on BLKSEQ */
        end
    end
    else if(wren_i) begin
        mem[addr_i] <= wdata_i;
		mem[SW] <= io_sw_i;
    end

    $writememh("memory/datamem.data", mem);
end



endmodule: lsu
