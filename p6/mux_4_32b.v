`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:50:41 12/07/2014 
// Design Name: 
// Module Name:    mux_4_32b 
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
module mux_4_32b(
    input [31:0] A,
    input [31:0] B,
    input [31:0] C,
    input [31:0] D,
    input [1:0] pc_op,
    output reg [31:0] out
    );
/*=========================================================================================================*/	 
	 initial
	 begin
	 out<=0;
	 end
/*=========================================================================================================*/	 
	 always@(*)
	 begin
		case (pc_op)
		2'b00 : out<=A;
		2'b01 : out<=B;
		2'b10 : out<=C;
		2'b11 : out<=D;
		default out<=A;
		endcase
	 end
/*=========================================================================================================*/
endmodule


