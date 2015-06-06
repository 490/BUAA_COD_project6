`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:55:47 12/07/2014 
// Design Name: 
// Module Name:    WB 
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
module WB(
	input [1:0] MemtoReg_wb,
	input [31:0] dmout_wb,aluout_wb,pc_wb,
	input [2:0]Load_wb,
/*=========================================================================================================*/
	output [31:0]wd_wb
    );
	 wire [31:0]DOut;
/*=========================================================================================================*/
	mux_3_32b i_MUX_wd(.op(MemtoReg_wb),
							 .A(aluout_wb), 
							 .B(DOut),
							 .C({pc_wb+4}),	
				   /*out*/.out(wd_wb));
/*=========================================================================================================*/
	ext_load i_EXT_Load(.A(aluout_wb[1:0]),
							  .Din(dmout_wb),
							  .Op(Load_wb),
							  .DOut(DOut));

endmodule
