`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:54:30 12/07/2014 
// Design Name: 
// Module Name:    mux_3_5b 
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
module mux_3_5b(
	input [1:0] op,
	input [4:0] A,B,C,
	output reg[4:0] out
);
	always@(*)
	begin
		case(op[1:0])
			2'b00:out<=A;
			2'b01:out<=B;
			2'b10:out<=C;
			default:out<=A;
		endcase
	end
endmodule