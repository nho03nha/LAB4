module brcomp (
    input logic [31:0] rs1_data_i,
    input logic [31:0] rs2_data_i,
    input logic br_unsigned_i,
    
    output logic br_less_o,
    output logic br_equal_o
);

assign br_equal_o = (rs1_data_i==rs2_data_i)? 1:0;
/* verilator lint_off UNUSED */
logic [31:0]subtractor;
/* verilator lint_on UNUSED */
/* verilator lint_off WIDTH */
assign subtractor = rs1_data_i + ~(rs2_data_i) + {{30{1'b0}},1'b1};
/* verilator lint_on WIDTH */
logic result;
assign result = subtractor[31];

always_comb begin : prc_br_less_o
    if (br_unsigned_i) begin
        if (rs1_data_i < rs2_data_i) begin
            br_less_o = 1;
        end
        else begin
            br_less_o = 0;
        end
    end

    else begin
        br_less_o = result;
    end
end    


endmodule: brcomp
