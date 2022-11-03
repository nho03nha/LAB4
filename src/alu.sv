module alu
(
	input logic [31:0] operand_a_i,
	input logic [31:0] operand_b_i,
	input [3:0] alu_op_i,

	// output
	output logic [31:0]alu_data_o
);
/*

typedef enum logic[3:0]{
	A_ADD  = 4'h0,
	A_SLL  = 4'h1,
	A_SLT  = 4'h2,
	A_SLTU = 4'h3, 
	A_XOR  = 4'h4, 
 	A_SRL  = 4'h5,
  	A_SRA  = 4'h6,
	A_OR   = 4'h7, 
	A_AND  = 4'h8,
	A_SUB  = 4'h9
} alu_op_e;
*/
//alu_op_e alu_op_tmp = alu_op_i;
logic [31:0] subtractor;
/* verilator lint_off WIDTH */
assign subtractor = operand_a_i + ~operand_b_i + 1;
/* verilator lint_on WIDTH */
always_latch begin
	case (alu_op_i)
		4'h0:  alu_data_o  = operand_a_i + operand_b_i;
		4'h9:  alu_data_o  = subtractor;
		4'h2:  alu_data_o  = {31'b0,subtractor[31]};
		4'h3: alu_data_o  = (operand_a_i < operand_b_i) ? 1:0;
		4'h4:  alu_data_o  = operand_a_i ^ operand_b_i;
		4'h7:  	alu_data_o  = operand_a_i | operand_b_i;
		4'h8: 	alu_data_o  = operand_a_i & operand_b_i;
        4'h1: 	alu_data_o  = operand_a_i << operand_b_i;
	 	4'h5: 	alu_data_o  = operand_a_i >> operand_b_i;
		4'h6:  alu_data_o  = operand_a_i >>> operand_b_i;
		default: ;	
	endcase
end

endmodule: alu
