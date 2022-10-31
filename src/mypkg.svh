package mypkg;
       	
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
  
endpackage
