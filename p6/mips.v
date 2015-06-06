`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:56:41 12/07/2014 
// Design Name: 
// Module Name:    mips 
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
module mips(
input clk,
input reset
    );
/*=========================================================================================================*/
	 
	 
/*=========================================================================================================*/
	wire Br,j_id,jal_id,stall,jr_id,jalr_id;
	wire [31:0]pc_if,instr_if,beq_npc;
	wire[2:0]Branch_id;
/***********************************************************************/
	IF i_IF(	 .clk(clk),
				 .Br(Br),
				 .branch(Branch_id),
				 .j(j_id),
				 .jal(jal_id),
				 .stall(stall),
				 .jr(jr_id),
				 .beq_npc(beq_npc),
				 .pc_id(pc_id),
				 .instr_id(instr_id),
				 .tr_rd1_id(tr_rd1_id),
				 .jalr(jalr_id),
		/*out*/.instr_if(instr_if),
				 .pc_if(pc_if));
/*=========================================================================================================*/

/***********************************************************************/
	if_id i_IF_ID(.clk(clk),
					  .IF_ID_we(stall),//stall?
					  .instr_if(instr_if),
					  .pc_if(pc_if),
			 /*out*/.instr_id(instr_id),
					  .pc_id(pc_id));
/*=========================================================================================================*/
	wire [31:0]wd_wb,aluout_mem,tr_rd1_id,tr_rd2_id,imm32_id,instr_id,pc_id;
	wire [4:0]a3_wb;
	wire [1:0]forward_a_id,forward_b_id,RegDst_id,MemtoReg_id,Store_id,Store_ex,Store_mem;
	wire [3:0] ALUop_id;
	wire RegWrite_wb,ALUSrc_id;
	wire Shift_id;
	wire [2:0]Load_id,Load_ex,Load_mem,Load_wb;
	wire [1:0]MulDiv_id,MulDiv_ex,MFhilo_id,MFhilo_ex;
	wire MThilo_id,MThilo_ex;
;
/***********************************************************************/
	ID i_ID(	.clk(clk),
				.instr_id(instr_id),
				.pc_id(pc_id),
				.wd_wb(wd_wb),
				.aluout_mem(aluout_mem),
				.a3_wb(a3_wb),
				.forward_a_id(forward_a_id),
				.forward_b_id(forward_b_id),
				.RegWrite_wb(RegWrite_wb),
	  /*out*/.RegWrite_id(RegWrite_id),
				.MemWrite_id(MemWrite_id),
				.ALUSrc_id(ALUSrc_id),
				.Br(Br),
				.Branch_id(Branch_id),
				.j_id(j_id),
				.jal_id(jal_id),
				.jr_id(jr_id),
				.RegDst_id(RegDst_id),
				.MemtoReg_id(MemtoReg_id),
				.ALUop_id(ALUop_id),
				.tr_rd1_id(tr_rd1_id),
				.tr_rd2_id(tr_rd2_id),
				.imm32_id(imm32_id),
				.beq_npc(beq_npc),
				.Shift_id(Shift_id),
				.s_id(s_id),
				.Load_id(Load_id),
				.Store_id(Store_id),
				.MulDiv_id(MulDiv_id),
				.MFhilo_id(MFhilo_id),
				.MThilo_id(MThilo_id),
				.jalr_id(jalr_id),
				.multu_id(multu_id),
				.lw_id(lw_id));
/*=========================================================================================================*/
	wire RegWrite_ex,MemWrite_ex,ALUSrc_ex;
	wire [1:0]RegDst_ex,MemtoReg_ex;
	wire [3:0]ALUop_ex;
	wire [4:0]rs_ex,rt_ex,rd_ex;
	wire [31:0]rd1_ex,rd2_ex,imm32_ex,pc_ex;
	wire [31:0]s_ex,s_id;
	wire 	Shift_ex;

/***********************************************************************/
	id_ex i_ID_EX(  .clk(clk),
						 .reset(stall),//stall?
						 .RegWrite_id(RegWrite_id),
						 .MemWrite_id(MemWrite_id),
						 .ALUSrc_id(ALUSrc_id),
						 .RegDst_id(RegDst_id),
						 .MemtoReg_id(MemtoReg_id),
						 .ALUop_id(ALUop_id),
						 .rs_id(instr_id[25:21]),
						 .rt_id(instr_id[20:16]),
						 .rd_id(instr_id[15:11]),
						 .rd1_id(tr_rd1_id),
						 .rd2_id(tr_rd2_id),
						 .imm32_id(imm32_id),
						 .pc_id(pc_id),
						 .s_id(s_id),
						 .Shift_id(Shift_id),
						 .Load_id(Load_id),
						 .Store_id(Store_id),
						 .MulDiv_id(MulDiv_id),
						 .MFhilo_id(MFhilo_id),
						 .MThilo_id(MThilo_id),
						 .multu_id(multu_id),
				/*out*/.RegWrite_ex(RegWrite_ex),
						 .MemWrite_ex(MemWrite_ex),
						 .ALUSrc_ex(ALUSrc_ex),
						 .RegDst_ex(RegDst_ex),
						 .MemtoReg_ex(MemtoReg_ex),
						 .ALUop_ex(ALUop_ex),
						 .rs_ex(rs_ex),
						 .rt_ex(rt_ex),
						 .rd_ex(rd_ex),
						 .rd1_ex(rd1_ex),
						 .rd2_ex(rd2_ex),
						 .imm32_ex(imm32_ex),
						 .pc_ex(pc_ex),
						 .s_ex(s_ex),
						 .Shift_ex(Shift_ex),
						 .Load_ex(Load_ex),
						 .Store_ex(Store_ex),
						 .MulDiv_ex(MulDiv_ex),
						 .MFhilo_ex(MFhilo_ex),
						 .MThilo_ex(MThilo_ex),
						 .multu_ex(multu_ex));
/*=========================================================================================================*/
	wire [1:0]forward_a_ex,forward_b_ex;
	wire [31:0]aluout_ex,tr_b_ex;
	wire Busy;
/***********************************************************************/
	EX i_EX( .ALUSrc_ex(ALUSrc_ex),
				.RegDst_ex(RegDst_ex),
				.ALUop_ex(ALUop_ex),
				.rs_ex(rs_ex),
				.rt_ex(rt_ex),
				.rd_ex(rd_ex),
				.rd1_ex(rd1_ex),
				.rd2_ex(rd2_ex),
				.imm32_ex(imm32_ex),
				.pc_ex(pc_ex),
				.forward_a_ex(forward_a_ex),
				.forward_b_ex(forward_b_ex),
				.wd_wb(wd_wb),
				.aluout_mem(aluout_mem),
				.s_ex(s_ex),
				.Shift_ex(Shift_ex),
				.clk(clk),
				.reset(reset),
				.MulDiv_ex(MulDiv_ex),
				.MFhilo_ex(MFhilo_ex),
				.MThilo_ex(MThilo_ex),
				.multu_ex(multu_ex),
		/*out*/.a3_ex(a3_ex),
				 .aluout_ex(aluout_ex),
				 .tr_b_ex(tr_b_ex),
				 .Busy(Busy));
/*=========================================================================================================*/
	wire RegWrite_mem,MemWrite_mem;
	wire [1:0]MemtoReg_mem;
	wire [4:0]a3_mem,a3_ex;
	wire [31:0]pc_mem,tr_b_mem;
/***********************************************************************/
	ex_mem i_EX_MEM(.clk(clk),
						 .RegWrite_ex(RegWrite_ex),
						 .MemWrite_ex(MemWrite_ex),
						 .MemtoReg_ex(MemtoReg_ex),
						 .a3_ex(a3_ex),
						 .pc_ex(pc_ex),
						 .aluout_ex(aluout_ex),
						 .tr_b_ex(tr_b_ex),
						 .Load_ex(Load_ex),
						 .Store_ex(Store_ex),
				/*out*/.RegWrite_mem(RegWrite_mem),
						 .MemWrite_mem(MemWrite_mem),
						 .MemtoReg_mem(MemtoReg_mem),
						 .a3_mem(a3_mem),
						 .aluout_mem(aluout_mem),
						 .pc_mem(pc_mem),
						 .tr_b_mem(tr_b_mem),
						 .Load_mem(Load_mem),
						 .Store_mem(Store_mem));
/*=========================================================================================================*/
	wire [31:0]dmout_mem;
/***********************************************************************/
	MEM i_MEM(.clk(clk),
				 .MemWrite_mem(MemWrite_mem),
				 .aluout_mem(aluout_mem),
				 .tr_b_mem(tr_b_mem),
				 .a3_mem(a3_mem),
				 .Store_mem(Store_mem),
		/*out*/.dmout_mem(dmout_mem));
/*=========================================================================================================*/
	wire [1:0]MemtoReg_wb;
	wire [31:0]dmout_wb,aluout_wb,pc_wb;
/***********************************************************************/
	mem_wb i_MEM_WB( .clk(clk),
						  .RegWrite_mem(RegWrite_mem),
						  .MemtoReg_mem(MemtoReg_mem),
						  .dmout_mem(dmout_mem),
						  .aluout_mem(aluout_mem),
						  .a3_mem(a3_mem),
						  .pc_mem(pc_mem),
						  .Load_mem(Load_mem),
				/*out*/.RegWrite_wb(RegWrite_wb),
						 .MemtoReg_wb(MemtoReg_wb),
						 .dmout_wb(dmout_wb),
						 .aluout_wb(aluout_wb),
						 .pc_wb(pc_wb),
						 .a3_wb(a3_wb),
						 .Load_wb(Load_wb));
/*=========================================================================================================*/

/***********************************************************************/
	WB i_WB(.MemtoReg_wb(MemtoReg_wb),
			 .dmout_wb(dmout_wb),
			 .aluout_wb(aluout_wb),
			 .pc_wb(pc_wb),
			 .Load_wb(Load_wb),
	/*out*/.wd_wb(wd_wb));
/*=========================================================================================================*/
wire lw;
assign lw=(Load_id||lw_id)?1:0;
/***********************************************************************/
	hazard i_Hazard(  .jr(jr_id),
							.jalr(jalr_id),
						   .Branch(Branch_id),
							.RegWrite_ex(RegWrite_ex),
							.RegWrite_mem(RegWrite_mem),
						   .MemtoReg_ex(MemtoReg_ex),
							.MemtoReg_mem(MemtoReg_mem),
							.rs_id(instr_id[25:21]),
						   .rt_id(instr_id[20:16]),
							.a3_ex(a3_ex),
							.a3_mem(a3_mem),
							.Busy(Busy),
							.Start(start1),
							.lw(lw),
				  /*out*/.stall(stall));
/*=========================================================================================================*/
	assign start1=MulDiv_ex?1:(multu_ex?1:0);

/***********************************************************************/
	forward i_Forward(.Branch(Branch_id),
							.jr(jr_id),
							.jalr(jalr_id),
							.RegWrite_mem(RegWrite_mem),
							.RegWrite_wb(RegWrite_wb),
							.rs_id(instr_id[25:21]),
							.rt_id(instr_id[20:16]),
							.rs_ex(rs_ex),
							.rt_ex(rt_ex),
							.a3_ex(a3_ex),
							.a3_mem(a3_mem),
							.a3_wb(a3_wb),
					/*out*/.forward_a_id(forward_a_id),
							.forward_b_id(forward_b_id),
							.forward_a_ex(forward_a_ex),
							.forward_b_ex(forward_b_ex));
/*=========================================================================================================*/
/*=========================================================================================================*/
/*=========================================================================================================*/
endmodule
