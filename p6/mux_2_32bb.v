`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:11 12/11/2014 
// Design Name: 
// Module Name:    mux_2_32bb 
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
module mux_2_32bb(
	input [1:0]op,
	input [31:0] A, B,	
	output reg [31:0] out
);
	always@(*)
	begin
		case(op)
			2'b10:out<=A;
			2'b11:out<=B;
		endcase
	end
endmodule