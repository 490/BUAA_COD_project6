`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:55:06 12/07/2014 
// Design Name: 
// Module Name:    MEM 
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
module MEM(
	input clk,
	input MemWrite_mem,
	input [31:0]aluout_mem,tr_b_mem,
	input [4:0]a3_mem,
	input [1:0]Store_mem,
/*=========================================================================================================*/
	output [31:0]dmout_mem
    );
	 wire [3:0]BE;
/*=========================================================================================================*/
	dm i_DM(	.A(aluout_mem[11:2]),
				.BE(BE),
				.WD(tr_b_mem), 
		/*out*/.RD(dmout_mem),
				.We(MemWrite_mem), 
				.Clk(clk)
	  );
/*=========================================================================================================*/
	be i_BE(.addr(aluout_mem[1:0]),
				.Store_mem(Store_mem),
				.BE(BE));
/*=========================================================================================================*/
endmodule
