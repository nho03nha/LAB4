module brcomp (
    input logic [31:0] rs1_data_i,
    input logic [31:0] rs2_data_i,
    input logic br_unsigned_i,
    
    output logic br_less_o,
    output logic br_equal_o
);

assign br_equal_o = (rs1_data_i==rs2_data_i)? 1:0;

`ifdef VERILATOR
    /*verilator lint_off UNUSED*/
logic [31:0] subtractor;
    /*verilator lint_on UNUSED*/
`endif

assign subtractor = rs1_data_i + ~(rs2_data_i) + 1;

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
        br_less_o = subtractor[31];
    end
end    


endmodule: brcomp
