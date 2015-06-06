`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:53:34 12/07/2014 
// Design Name: 
// Module Name:    EX 
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
module EX(
	input ALUSrc_ex,
	input [1:0]RegDst_ex,
	input [3:0]ALUop_ex,
	input [4:0]rs_ex,rt_ex,rd_ex,
	input [31:0]rd1_ex,rd2_ex,imm32_ex,pc_ex,
	input [1:0]forward_a_ex,forward_b_ex,
	input [31:0]wd_wb,aluout_mem,
	input [31:0]s_ex,
	input Shift_ex,
	input clk,
	input reset,
	input [1:0]MulDiv_ex,
	input [1:0]MFhilo_ex,
	input MThilo_ex,
	input multu_ex,
/*=========================================================================================================*/
	output  [4:0]a3_ex,
	output  [31:0]aluout_ex,tr_b_ex,
	output Busy
);
wire [31:0]alu_a,alu_b,alu_as,aluout_exx;
wire ifs;
/*=========================================================================================================*/
	alu i_ALU(  .A(alu_as),
					.B(alu_b),
					.Op(ALUop_ex),
		 // /*out*/.zero(0),//?
					.C(aluout_exx));
/*=========================================================================================================*/
	mux_2_32b i_MUX_alu_as(.op(Shift_ex),
								  .A(alu_a),
								  .B(s_ex),
								  .out(alu_as));
/*=========================================================================================================*/
	mux_3_32b i_MUX_alu_a(.op(forward_a_ex),
								 .A(rd1_ex), 
							    .B(wd_wb),
								 .C(aluout_mem),	
					   /*out*/.out(alu_a));
/*=========================================================================================================*/
	mux_3_32b i_MUX_tr_b(.op(forward_b_ex),
								.A(rd2_ex), 
								.B(wd_wb),
								.C(aluout_mem),	
					  /*out*/.out(tr_b_ex));	
/*=========================================================================================================*/
	mux_2_32b i_MUX_alu_b(.op(ALUSrc_ex),
								 .A(tr_b_ex),
								 .B(imm32_ex),
						/*out*/.out(alu_b));	
/*=========================================================================================================*/
	mux_3_5b  i_MUX_a3(	.op(RegDst_ex),
								.A(rt_ex), 
								.B(rd_ex),
								.C(5'b11111),	
					  /*out*/.out(a3_ex));
/*=========================================================================================================*/
	wire start;
	assign start=MulDiv_ex?1:(multu_ex?1:0);
	wire[31:0]HI,LO,HILO;
/********************************************************/
	mul_div i_MulDiv( .D1(alu_as),
							.D2(alu_b),
							.HiLo(MThilo_ex),
							.Op(MulDiv_ex),
							.Start(start),
							.We(MThilo_ex),
							.Busy(Busy),
							.HI(HI),
							.LO(LO),
							.Clk(clk),
							.Rst(reset));
/*=========================================================================================================*/
	mux_2_32bb i_MUX_HILO(.op(MFhilo_ex),
								 .A(HI),
								 .B(LO),
						/*out*/.out(HILO));
/*=========================================================================================================*/
wire mf;
assign mf=MFhilo_ex?1:0;
/**************************/
	mux_2_32b i_MUX_WD(.op(mf),
								 .A(aluout_exx),
								 .B(HILO),
						/*out*/.out(aluout_ex));
/*=========================================================================================================*/
endmodule
