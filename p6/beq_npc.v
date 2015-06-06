`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:52:16 12/07/2014 
// Design Name: 
// Module Name:    beq_npc 
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
module beq_npc(
	 input [31:0] pc,
	 input [15:0] imm16,
	 output reg [31:0] npc
    );
	 always@(*)
	 begin
		npc=pc+{{14{imm16[15]}},imm16[15:0],2'b00};
	 end
endmodule

