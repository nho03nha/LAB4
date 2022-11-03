/* verilator lint_off MULTITOP */

module immgen 
(
    input logic [31:0] instr_i,
    output logic [31:0] imm_o
);

always_comb begin: proc_pc
    case(instr_i[6:0])
        7'b0000011: imm_o = {{20{instr_i[31]}}, instr_i[31:20]}; //lw
        7'b0010011: imm_o = {{20{instr_i[31]}}, instr_i[31:20]}; //I-type
        7'b0100011: imm_o = {{20{instr_i[31]}}, instr_i[31:25], instr_i[11:7]}; //S-type
        7'b1100011: imm_o = {{20{instr_i[31]}}, instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0}; //B-type
        7'b1101111: imm_o = {{12{instr_i[31]}}, instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0}; //J-Type
        default: imm_o = 32'bx;
    endcase
end

endmodule: immgen
