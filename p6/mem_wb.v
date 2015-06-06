`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:55:32 12/07/2014 
// Design Name: 
// Module Name:    mem_wb 
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
module mem_wb(
	 input clk,
	 input RegWrite_mem,
	 input [1:0] MemtoReg_mem,
	 input [31:0] dmout_mem,
	 input [31:0]aluout_mem,
	 input [4:0] a3_mem,
	 input [31:2] pc_mem,
	 input [2:0]Load_mem,
 /*=========================================================================================================*/
	 output reg RegWrite_wb,
	 output reg [1:0] MemtoReg_wb,
	 output reg [31:0] dmout_wb,aluout_wb,pc_wb,
	 output reg [4:0] a3_wb,
	 output reg [2:0]Load_wb
    );
/*=========================================================================================================*/
	initial
	begin
		RegWrite_wb<=0;
		MemtoReg_wb<=0;
		dmout_wb<=0;
		aluout_wb<=0;
		pc_wb<=0;
		a3_wb<=0;
		Load_wb<=0;
	end
/*=========================================================================================================*/
	always@(posedge clk)
		begin
			RegWrite_wb<=RegWrite_mem;
			MemtoReg_wb<=MemtoReg_mem;
			dmout_wb<=dmout_mem;
			aluout_wb<=aluout_mem;
			pc_wb<=pc_mem;
			a3_wb<=a3_mem;
			Load_wb<=Load_mem;
		end
/*=========================================================================================================*/

/*=========================================================================================================*/

endmodule

