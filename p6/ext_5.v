`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:30:07 12/09/2014 
// Design Name: 
// Module Name:    ext_5 
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
module ext_5(
	input [4:0]imm5,
	output [31:0]s_id
	);
	assign s_id={27'b0,imm5};
endmodule
