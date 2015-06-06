`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:51:31 12/07/2014 
// Design Name: 
// Module Name:    ID 
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
module ID(
	input clk, 
	input [31:0]instr_id,
	input [31:0]pc_id,
	input [31:0]wd_wb,
	input [31:0]aluout_mem,
	input [4:0]a3_wb,
	input [1:0]forward_a_id,forward_b_id,
	input RegWrite_wb,
/*=========================================================================================================*/
	output RegWrite_id,
	output MemWrite_id,
	output ALUSrc_id,
	output Br,
	output [2:0]Branch_id,
	output j_id,jal_id,jr_id,
	output [1:0]RegDst_id,MemtoReg_id,
	output [3:0]ALUop_id,
	output [31:0]tr_rd1_id,tr_rd2_id,imm32_id,beq_npc,
	output Shift_id,
	output [31:0]s_id,
	output [2:0]Load_id,
	output [1:0]Store_id,
	output [1:0]MulDiv_id,
	output [1:0]MFhilo_id,
	output MThilo_id,
	output jalr_id,
	output multu_id,
	output lw_id

    );
/*=========================================================================================================*/
	 wire [31:0]rd1_id,rd2_id;
	 wire [1:0]EXTop_id;
/*=========================================================================================================*/
	control i_CTRL(.rt(instr_id[20:16]),
						.op(instr_id[31:26]),
						.func(instr_id[5:0]),
			 /*out*/.RegWrite_id(RegWrite_id),
					  .MemWrite_id(MemWrite_id),
					  .ALUSrc_id(ALUSrc_id),
					  .Branch_id(Branch_id),
					  .j_id(j_id),
					  .jal_id(jal_id),
					  .jr_id(jr_id),
					  .EXTop_id(EXTop_id),
					  .MemtoReg_id(MemtoReg_id),
					  .ALUop_id(ALUop_id),
					  .RegDst_id(RegDst_id),
					  .Shift_id(Shift_id),
					  .Load_id(Load_id),
					  .Store_id(Store_id),
					  .MulDiv(MulDiv_id),
					  .MFhilo(MFhilo_id),
					  .MThilo(MThilo_id),
					  .jalr_id(jalr_id),
					  .multu(multu_id),
					  .lw(lw_id));
/*=========================================================================================================*/
	gpr i_GPR( .Clk(clk),
				  .A1(instr_id[25:21]),
				  .A2(instr_id[20:16]),
				  .A3(a3_wb),
				  .We(RegWrite_wb),
				  .Rst(0),//reset?
				  .WD(wd_wb),
	    /*out*/.RD1(rd1_id),
			     .RD2(rd2_id));
/*=========================================================================================================*/
	beq_npc i_Beq_NPC( .pc(pc_id),
							 .imm16(instr_id[15:0]),
					/*out*/.npc(beq_npc));
/*=========================================================================================================*/
	ext i_EXT(.extop(EXTop_id),
				 .imm16(instr_id[15:0]),
		/*out*/.imm32(imm32_id));
/*=========================================================================================================*/
	ext_5 i_EXT_5(.imm5(instr_id[10:6]),
						.s_id(s_id));
/*=========================================================================================================*/
	CMP i_CMP(.A(tr_rd1_id),
				.B(tr_rd2_id),
				.Op(Branch_id),
				/*out*/.Br(Br));
/*=========================================================================================================*/
	mux_3_32b i_MUX_Rd1(	.op(forward_a_id),
								.A(rd1_id), 
								.B(wd_wb),
								.C(aluout_mem),	
					  /*out*/.out(tr_rd1_id));
/*=========================================================================================================*/
	mux_3_32b i_MUX_Rd2(	.op(forward_b_id),
								.A(rd2_id), 
								.B(wd_wb),
								.C(aluout_mem),	
					  /*out*/.out(tr_rd2_id));
/*=========================================================================================================*/
	

/*=========================================================================================================*/
endmodule
