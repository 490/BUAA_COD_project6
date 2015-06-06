`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:52:29 12/07/2014 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [1:0] extop,
    input [15:0] imm16,
    output reg[31:0] imm32
    );
	 //                                       00                  01                   10
//	assign imm32=(~extop[1])?((~extop[0])?{16'b0,imm16}:{{16{imm16[15]}},imm16}):{imm16,16'b0};
	always@(*)
	begin
	case(extop)
	2'b00:imm32<={16'b0,imm16};
	2'b01:imm32<={{16{imm16[15]}},imm16};
	2'b10:imm32<={imm16,16'b0};
	2'b11:imm32<={imm16[15],15'b0,imm16};
	endcase
	end
endmodule