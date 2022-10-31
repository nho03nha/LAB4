/* verilator lint_off MULTITOP */

module pc (
    input logic clk_i,
    input logic rst_ni,

    input logic pc_src_i,
    input logic [31:0] alu_data_i,

    output logic [31:0] pc_o,
    output logic [31:0] pc_four_o
);

logic [31:0]nxt_pc; //pc_target;

assign nxt_pc = pc_src_i? alu_data_i:pc_four_o;

always_ff @( posedge clk_i, negedge rst_ni ) begin : proc_pc
    if (!rst_ni) pc_o <= 0;
    else begin
        pc_o <= nxt_pc;
        /* verilator lint_off BLKSEQ */
        pc_four_o = pc_o + 32'd4;
    end
end

endmodule: pc
