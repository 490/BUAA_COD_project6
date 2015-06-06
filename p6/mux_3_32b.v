`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:52:59 12/07/2014 
// Design Name: 
// Module Name:    mux_3_32b 
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
module mux_3_32b( 
	input [1:0]op,
	input [31:0] A, B,C,	
	output reg [31:0] out
);
	always@(*)
	begin
		case(op[1:0])
			2'b00:out<=A;
			2'b01:out<=B;
			2'b10:out<=C;
			2'b11:out<=A;
		endcase
	end
endmodule
