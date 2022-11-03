/* verilator lint_off MULTITOP */
module ctrl_unit (
/* verilator lint_off UNUSED */
    input logic br_less_i,
    input logic br_equal_i,
 
    input logic [31:0] instr_i,
/* verilator lint_on UNUSED */   
    output logic br_sel_o,      
    output logic br_unsigned_o,
    output logic rd_wren_o,
    output logic op_a_sel_o,
    output logic op_b_sel_o,
    output logic [3:0] alu_op_o,
    output logic mem_wren_o,
    output logic [1:0] wb_sel_o
);

/*
typedef enum logic [6:0] {
    lw      = 7'b0000011,
    R_TYPE  = 7'b0110011,
    I_TYPE  = 7'b0010011,
    S_TYPE  = 7'b0100011,
    B_TYPE  = 7'b1100011,
    J_TYPE  = 7'b1101111 
} type_op_e;
*/
//type_op_e op_e_tmp;
//assign op_e_tmp = instr_i[6:0];

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

/* verilator lint_off LATCH */
always_latch begin
    case(instr_i[6:0])
        7'b0000011: begin
            rd_wren_o  = 1'b1;
            op_a_sel_o = 1'b0;
            op_b_sel_o = 1'b1;    
            mem_wren_o = 1'b0; 
            wb_sel_o   = 2'b01;
            br_sel_o = 1'b0;       
        end
        7'b0110011: begin
            rd_wren_o  = 1'b1;
            op_a_sel_o = 1'b0;
            op_b_sel_o = 1'b0;
            mem_wren_o = 1'b0;
            wb_sel_o   = 2'b00;
            br_sel_o = 1'b0;
        end

        7'b0010011: begin
            rd_wren_o  = 1'b1;
            op_a_sel_o = 1'b0;
            op_b_sel_o = 1'b1;
            mem_wren_o = 1'b0;
            wb_sel_o   = 2'b00;
            br_sel_o = 1'b0;
        end
        
        7'b0100011: begin
            rd_wren_o  = 1'b0;
            op_a_sel_o = 1'b0;
            op_b_sel_o = 1'b1;
            mem_wren_o = 1'b1;
            wb_sel_o   = 2'bxx;
            br_sel_o = 1'b0;
        end

        7'b1100011: begin
            rd_wren_o  = 1'b0;
            op_a_sel_o = 1'b1;
            op_b_sel_o = 1'b1;
            mem_wren_o = 1'b0;
            wb_sel_o   = 2'bxx;
            case (instr_i[14:12])
                3'b000 : begin // beq
                    br_unsigned_o = 1'b0;
                    if({br_equal_i, br_less_i} == 2'b10)
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0;
                end           
                3'b001 : begin // bne
                    br_unsigned_o = 1'b0;
                    if({br_equal_i, br_less_i} == 2'b0x)
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0;                   
                end           
                3'b100 : begin // blt
                    br_unsigned_o = 1'b0;
                    if({br_equal_i, br_less_i} == 2'b01)
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0; 
                end           
                3'b101 : begin // bge
                    br_unsigned_o = 1'b0;
                    if({br_equal_i, br_less_i} == 2'bx0)
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0; 
                end           
                3'b110 : begin //bltu
                    br_unsigned_o = 1'b1;
                    if({br_equal_i, br_less_i} == 2'b01)
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0; 
                end           
                3'b111 : begin //bgeu
                     br_unsigned_o = 1'b0;
                    if({br_equal_i, br_less_i} == 2'bx0)
                        br_sel_o = 1'b1;
                    else br_sel_o = 1'b0;            
                end           
                default : begin
                end 
            endcase          
        end

        7'b1101111: begin
            rd_wren_o = 1'b1;
            op_a_sel_o  = 1'b1;
            op_b_sel_o  = 1'b1;
            mem_wren_o= 1'b0;
            wb_sel_o  = 2'b10;
            br_sel_o = 1'b1;
        end

        default: ;
    endcase
end

always_latch begin
    if ((instr_i[6:0]==7'b0110011) | (instr_i[6:0]==7'b0010011)) begin
        if(instr_i[30] == 1'b1) begin
            if(instr_i[14:12] == 3'b000) alu_op_o = A_SUB;
            else if (instr_i[14:12] == 3'b101) alu_op_o = A_SRA;
        end
        else begin
            if(instr_i[14:12] == 3'd0) alu_op_o = A_ADD;
            else if(instr_i[14:12] == 3'd1) alu_op_o = A_SLL;
            else if(instr_i[14:12] == 3'd2) alu_op_o = A_SLT;
            else if(instr_i[14:12] == 3'd3) alu_op_o = A_SLTU;
            else if(instr_i[14:12] == 3'd4) alu_op_o = A_XOR;
            else if(instr_i[14:12] == 3'd5) alu_op_o = A_SRL;
            else if(instr_i[14:12] == 3'd6) alu_op_o = A_OR;
            else if(instr_i[14:12] == 3'd7) alu_op_o = A_AND;
        end
    end
    else alu_op_o = A_ADD;
end
endmodule: ctrl_unit
