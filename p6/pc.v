`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:49:44 12/07/2014 
// Design Name: 
// Module Name:    pc 
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
module pc(
	 input clk,
	 input pc_we,
	 input [31:0] npc,
/*=========================================================================================================*/
	 output reg [31:0] pc,
	 output  [31:0] pc_next
    );
/*=========================================================================================================*/
	initial
	begin
		pc=32'b0000_0000_0000_0000_0011_0000_0000_0000;
	end
/*=========================================================================================================*/
	 always @(posedge clk)
	 begin
		if(~pc_we)
			pc<=npc;
	 end
	assign pc_next=pc+4;
endmodule

