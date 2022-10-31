module inst_memory (

`ifdef VERILATOR
    /*verilator lint_off UNUSED*/
    input logic [31:0] adrr_i,
    /*verilator lint_on UNUSED*/
`endif
    
    output logic [31:0] inst_o
);

`ifdef VERILATOR
/*verilator lint_off WIDTH*/
logic [31:0] mem [4095:0];


initial begin
    $readmemh("memory/instmem.data", mem); 
end

assign inst_o = mem[adrr_i[31:2]];

/*verilator lint_on WIDTH*/
`endif
endmodule: inst_memory
