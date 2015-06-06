`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:54:48 12/07/2014 
// Design Name: 
// Module Name:    ex_mem 
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
module ex_mem(
	input  clk,
	input  RegWrite_ex,
	input  MemWrite_ex,
	input  [1:0]MemtoReg_ex,
	input  [4:0]a3_ex,
	input  [31:0]pc_ex,aluout_ex,tr_b_ex,
	input [2:0]Load_ex,
	input [1:0]Store_ex,
/*=========================================================================================================*/
	output reg RegWrite_mem,
	output reg MemWrite_mem,
	output reg [1:0]MemtoReg_mem,
	output reg [4:0]a3_mem,
	output reg [31:0]aluout_mem,pc_mem,tr_b_mem,
	output reg [2:0]Load_mem,
	output reg[1:0]Store_mem
    );
/*=========================================================================================================*/
	initial
	begin
		RegWrite_mem<=0;
		MemWrite_mem<=0;
		MemtoReg_mem<=0;
		a3_mem<=0;
		aluout_mem<=0;
		pc_mem<=0;
		tr_b_mem<=0;
		Load_mem<=0;
		Store_mem<=0;
	end
/*=========================================================================================================*/
	always@(posedge clk)	
	begin
		RegWrite_mem<=RegWrite_ex;
		MemWrite_mem<=MemWrite_ex;
		MemtoReg_mem<=MemtoReg_ex;
		a3_mem<=a3_ex;
		aluout_mem<=aluout_ex;
		pc_mem<=pc_ex;
		tr_b_mem<=tr_b_ex;
		Load_mem<=Load_ex;
		Store_mem<=Store_ex;
	end
/*=========================================================================================================*/
endmodule
