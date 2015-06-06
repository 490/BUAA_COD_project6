`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:53:19 12/07/2014 
// Design Name: 
// Module Name:    id_ex 
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
module id_ex(
	input clk,
	input reset,
	input RegWrite_id,
	input MemWrite_id,
	input ALUSrc_id,
	input [1:0]RegDst_id,MemtoReg_id,
	input [3:0]ALUop_id,
	input [4:0]rs_id,rt_id,rd_id,
	input [31:0]rd1_id,rd2_id,imm32_id,pc_id,
	input [31:0]s_id,
	input Shift_id,
	input [2:0]Load_id,
	input [1:0]Store_id,
	input [1:0]MulDiv_id,
	input [1:0]MFhilo_id,
	input MThilo_id,
	input multu_id,
/*=========================================================================================================*/
	output reg RegWrite_ex,
	output reg MemWrite_ex,
	output reg ALUSrc_ex,
	output reg [1:0]RegDst_ex,MemtoReg_ex,
	output reg[3:0]ALUop_ex,
	output reg [4:0]rs_ex,rt_ex,rd_ex,
	output reg [31:0]rd1_ex,rd2_ex,imm32_ex,pc_ex,
	output reg[31:0]s_ex,
	output reg Shift_ex,
	output reg [2:0]Load_ex,
	output reg [1:0]Store_ex,
	output reg [1:0]MulDiv_ex,
	output reg [1:0]MFhilo_ex,
	output reg MThilo_ex,
	output reg multu_ex
    );
/*=========================================================================================================*/
	initial
	begin
		RegWrite_ex<=0;
		MemWrite_ex<=0;
		ALUSrc_ex<=0;
		RegDst_ex<=0;
		MemtoReg_ex<=0;
		ALUop_ex<=0;
		rs_ex<=0;
		rt_ex<=0;
		rd_ex<=0;
		rd1_ex<=0;
		rd2_ex<=0;
		imm32_ex<=0;
		pc_ex<=0;
		s_ex<=0;
		Shift_ex<=0;
		Load_ex<=0;
		Store_ex<=0;
		MulDiv_ex<=0;
		MFhilo_ex<=0;
		MThilo_ex<=0;
		multu_ex<=0;
	end
/*=========================================================================================================*/
	always@(posedge clk)
	if(reset)
		begin
			RegWrite_ex<=0;
			MemWrite_ex<=0;
			ALUSrc_ex<=0;
			RegDst_ex<=0;
			MemtoReg_ex<=0;
			ALUop_ex<=0;
			rs_ex<=0;
			rt_ex<=0;
			rd_ex<=0;
			rd1_ex<=0;
			rd2_ex<=0;
			imm32_ex<=0;
			pc_ex<=0;
			s_ex<=0;
			Shift_ex<=0;	
			Load_ex<=0;
			Store_ex<=0;
			MulDiv_ex<=0;
			MFhilo_ex<=0;
			MThilo_ex<=0;
			multu_ex<=0;
		end
/*=========================================================================================================*/
	else
		begin
			RegWrite_ex<=RegWrite_id;
			MemWrite_ex<=MemWrite_id;
			ALUSrc_ex<=ALUSrc_id;
			RegDst_ex<=RegDst_id;
			MemtoReg_ex<=MemtoReg_id;
			ALUop_ex<=ALUop_id;
			rs_ex<=rs_id;
			rt_ex<=rt_id;
			rd_ex<=rd_id;
			rd1_ex<=rd1_id;
			rd2_ex<=rd2_id;
			imm32_ex<=imm32_id;
			pc_ex<=pc_id;
			s_ex<=s_id;
			Shift_ex<=Shift_id;
			Load_ex<=Load_id;
			Store_ex<=Store_id;
			MulDiv_ex<=MulDiv_id;
			MFhilo_ex<=MFhilo_id;
			MThilo_ex<=MThilo_id;
			multu_ex<=multu_id;
		end
/*=========================================================================================================*/
endmodule
