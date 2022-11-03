/* verilator lint_off MULTITOP */

module regfile (
    input logic clk_i,
    input logic rst_ni,

    input logic [4:0] rs1_addr_i,
    input logic [4:0] rs2_addr_i,

    /* verilator lint_off UNUSED */
    input logic [4:0] rd_addr_i,
    /* verilator lint_on UNUSED */
    input logic [31:0] rd_data_i,
    input logic rd_wren_i,

    output logic [31:0] rs1_data_o,
    output logic [31:0] rs2_data_o
);

logic [31:0] mem [31:0];
 
always_ff @(posedge clk_i, negedge rst_ni) begin
    if (rst_ni == 1'b0)
        for (int i=0; i<32; i++) 
            mem[i] <= 0;
    else if (rd_wren_i) begin
        mem[rd_addr_i] <= rd_data_i;
    end

    $writememh("memory/refgisterdata.data", mem);
end

assign rs1_data_o = (rs1_addr_i != 0) ? mem[rs1_addr_i] : 0;
assign rs2_data_o = (rs2_addr_i != 0) ? mem[rs2_addr_i] : 0;

endmodule: regfile
