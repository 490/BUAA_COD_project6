`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:50:23 12/07/2014 
// Design Name: 
// Module Name:    pc_sel 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module pc_sel(
	 input [2:0]Branch,
	 input Br,
    input j,
    input jal,
    input jr,
    input jalr,
    output reg [1:0] pc_op
    );
	 
	 always@(*)
	 begin
		if(Branch&&Br)
			pc_op<=2'b01;//B
		 else if(j||jal)
			pc_op<=2'b10;//C
		 else if(jr|jalr)
			pc_op<=2'b11;//D
		 else 
			pc_op<=2'b00;//A
	 end
endmodule
