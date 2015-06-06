`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:51:46 12/07/2014 
// Design Name: 
// Module Name:    control 
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
module control(
	input [4:0]rt,
	 input [31:26] op,
	 input [5:0] func,
	 output RegWrite_id,
	 output MemWrite_id,
	 output ALUSrc_id,
	 output [2:0]Branch_id,
	 output j_id,
	 output jal_id,
	 output jr_id,
	 output [1:0] EXTop_id,
	 output [1:0] MemtoReg_id,
	 output [3:0] ALUop_id,
	 output [1:0] RegDst_id,
	 output Shift_id,
	 output [2:0]Load_id,
	 output [1:0]Store_id,
	 output [1:0]MulDiv,
	 output [1:0]MFhilo,
	 output MThilo,
	 output jalr_id,
	 output multu,
	 output lw
    );
/*=========================================================================================================*/	 
	 parameter 	i_R=6'b000000, 
					//加载
					i_lw=6'b100011, i_lb=6'b100000,i_lbu=6'b100100,i_lh=6'b100001,i_lhu=6'b100101,
					//保存
					i_sw=6'b101011,i_sb=6'b101000,i_sh=6'b101001,
					//R-R运算
					i_addu=6'b100001,i_subu=6'b100011,i_OR=6'b100101,i_add=6'b100000,i_sub=6'b100010,
					i_mult=6'b011000,i_multu=6'b011001,i_div=6'b011010,i_divu=6'b011011,
					i_sll=6'b000000,i_sllv=6'b000100,i_sra=6'b000011,i_srl=6'b000010,i_srlv=6'b000110,i_srav=6'b000111,
					i_and=6'b100100,i_xor=6'b100110,i_nor=6'b100111,i_slt=6'b101010,i_sltu=6'b101011,
					//R-I运算
					i_ori=6'b001101,i_addiu=6'b001001,i_andi=6'b001100,i_lui=6'b001111, 
					i_addi=6'b001000,i_xori=6'b001110,i_slti=6'b001010,i_sltiu=6'b001011,
					//跳转
					i_jr=6'b001000,i_j=6'b000010,i_jal=6'b000011,i_jalr=6'b001001,
					//分支
					i_beq=6'b000100,i_bgez=6'b000001,i_bgtz=6'b000111,i_blez=6'b000110,
					i_bltz=6'b000001,i_bne=6'b000101,
					//传输
					i_mflo=6'b010010,i_mfhi=6'b010000,i_mthi=6'b010001,i_mtlo=6'b010011;
/*=========================================================================================================*/
reg 	addu,subu,OR,add,sub,mult,multu,div,divu,sll,sllv,sra,srl,srlv,srav,AND,XOR,NOR,slt,sltu,
		ori,lui,addiu,andi,addi,xori,slti,sltiu,
		lw,sw,lb,lbu,lh,lhu,sb,sh,
		beq,jal,jr,j,jalr,bgez,bgtz,blez,bltz,bne,
		mflo,mfhi,mthi,mtlo;
/*initial
begin
	addu<=0;subu<=0;ori<=0;lw<=0;sw<=0;beq<=0;lui<=0;jal<=0;jr<=0;j<=0;addiu<=0;andi<=0;OR<=0;
end*/
/*=========================================================================================================*/
	always@(*)
	 begin
/*=R-R型=====================================================================================================*/
		 if((op==i_R)&&(func==i_addu))
			addu<=1;else addu<=0;			
		 if((op==i_R)&&(func==i_subu))
			subu<=1;else subu<=0;
		 if((op==i_R)&&(func==i_OR))
			OR=1;else OR<=0;
		 if((op==i_R)&&(func==i_jr))		 
			jr<=1;else jr<=0;
		if((op==i_R)&&(func==i_add))		 
			add<=1;else add<=0;
		if((op==i_R)&&(func==i_sub))		 
			sub<=1;else sub<=0;
		if((op==i_R)&&(func==i_mult))		 
			mult<=1;else mult<=0;
		if((op==i_R)&&(func==i_multu))		 
			multu<=1;else multu<=0;
		if((op==i_R)&&(func==i_div))		 
			div<=1;else div<=0;
		if((op==i_R)&&(func==i_divu))		 
			divu<=1;else divu<=0;
		if((op==i_R)&&(func==i_sll))		 
			sll<=1;else sll<=0;
		if((op==i_R)&&(func==i_sllv))		 
			sllv<=1;else sllv<=0;
		if((op==i_R)&&(func==i_sra))		 
			sra<=1;else sra<=0;
		if((op==i_R)&&(func==i_srl))		 
			srl<=1;else srl<=0;
		if((op==i_R)&&(func==i_srlv))		 
			srlv<=1;else srlv<=0;
		if((op==i_R)&&(func==i_srav))		 
			srav<=1;else srav<=0;
		if((op==i_R)&&(func==i_and))		 
			AND<=1;else AND<=0;
		if((op==i_R)&&(func==i_xor))		 
			XOR<=1;else XOR<=0;
		if((op==i_R)&&(func==i_nor))		 
			NOR<=1;else NOR<=0;
		if((op==i_R)&&(func==i_slt))		
			slt<=1;else slt<=0;
		if((op==i_R)&&(func==i_sltu))		 
			sltu<=1;else sltu<=0;
		
/*=R-I=======================================================================================================*/
		 if(op==i_ori)
			ori<=1;else ori<=0;
		 if(op==i_addiu)
			addiu<=1;else addiu<=0;
		 if(op==i_andi)
			andi<=1;else andi<=0;
		 if(op==i_lui)
			lui<=1;else lui<=0;
		if(op==i_addi)
			addi<=1;else addi<=0;
		if(op==i_xori)
			xori<=1;else xori<=0;
		if(op==i_slti)
			slti<=1;else slti<=0;
		if(op==i_sltiu)
			sltiu<=1;else sltiu<=0;
/*=========================================================================================================*/
		 if(op==i_lw)
			lw<=1;else lw<=0;
		 if(op==i_sw)
			sw<=1;else sw<=0;
		if(op==i_lb)
			lb<=1;else lb<=0;
		if(op==i_lbu)
			lbu<=1;else lbu<=0;
		if(op==i_lh)
			lh<=1;else lh<=0;
		if(op==i_lhu)
			lhu<=1;else lhu<=0;
		if(op==i_sb)
			sb<=1;else sb<=0;
		if(op==i_sh)
			sh<=1;else sh<=0;
/*=========================================================================================================*/		 
		 if(op==i_beq)
			beq<=1;else beq<=0;
		 if(op==i_j)
			j<=1;else j<=0;
		 if(op==i_jal)
			jal<=1;else jal<=0;
		if((op==i_R)&&(func==i_jalr))
			jalr<=1;else jalr<=0;
		if((op==i_bgez)&&(rt==1))
			bgez<=1;else bgez<=0;
		if(op==i_bgtz)
			bgtz<=1;else bgtz<=0;
		if(op==i_blez)
			blez<=1;else  blez<=0;
		if((op==i_bltz)&&(rt==0))
			bltz<=1;else bltz<=0;
		if(op==i_bne)
			bne<=1;else bne<=0;
/*=========================================================================================================*/
		if((op==i_R)&&(func==i_mfhi))
			mfhi<=1;else mfhi<=0;
		if((op==i_R)&&(func==i_mflo))
			mflo<=1;else  mflo<=0;
		if((op==i_R)&&(func==i_mtlo))
			mtlo<=1;else mtlo<=0;
		if((op==i_R)&&(func==i_mthi))
			mthi<=1;else mthi<=0;
/*=========================================================================================================*/
	 end
/*=========================================================================================================*/
	assign ALUop_id[3]	=NOR|slt|slti|sltu|sltiu;
	assign ALUop_id[2]	=XOR|xori|sll|sllv|srl|srlv|sra|srav;
	assign ALUop_id[1]	=ori|lui|OR|andi|AND|srl|srlv|sra|srav|sltu|sltiu;
	assign ALUop_id[0]	=subu|andi|sub|AND|sll|sllv|sra|srav|slt|slti;
/*=========================================================================================================*/
	//rd<-rs () rt类型、寄存器的a3
	assign RegDst_id[0]	=addu|add|subu|sub|OR|sll|AND|XOR|NOR|slt|sltu|srav|srlv|sra|srl|sllv|jalr|mfhi|mflo;
	assign RegDst_id[1]	=jal;//
/*=========================================================================================================*/
	//把立即数作为alub的输入
	assign ALUSrc_id		=ori|lw|sw|lui|addiu|andi|addi|xori|slti|sltiu|sb|sh|lb|lh|lbu|lhu;
/*=========================================================================================================*/
	assign MemtoReg_id[0]=lw|lb|lbu|lh|lhu;
	assign MemtoReg_id[1]=jal|jalr;
/*=========================================================================================================*/
	//需要写寄存器
	assign RegWrite_id	=addu|subu|ori|lw|lui|jal|jalr|addiu|andi|OR|add|sub|slt
								|sltu|AND|XOR|NOR|xori|slti|sltiu|sll|srl|sra|sllv|srlv
								|srav|mfhi|mflo|lb|lbu|lh|lhu|addi;
/*=========================================================================================================*/
	assign EXTop_id[1]	=lui;
	assign EXTop_id[0]	=lw|sw;
/*=========================================================================================================*/
	assign MemWrite_id	=sw|sb|sh;
/*=========================================================================================================*/
	assign Branch_id[2]	=beq|bltz|bgez;
	assign Branch_id[1]	=beq|blez|bgtz;
	assign Branch_id[0]	=beq|bne|bgez|bgtz;
/*=========================================================================================================*/
	assign jr_id		=jr;
	assign jalr_id		=jalr;
	assign jal_id		=jal;
	assign j_id			=j;
/*=========================================================================================================*/
	assign Shift_id=sll|sra|srl;
/*=========================================================================================================*/
	assign Load_id[2]=lh;
	assign Load_id[1]=lb|lhu;
	assign Load_id[0]=lhu|lbu;
/*=========================================================================================================*/
	assign Store_id[1]=sb;
	assign Store_id[0]=sh;
/*=========================================================================================================*/
	assign MulDiv[1]=divu|div;
	assign MulDiv[0]=div|mult;
	assign MFhilo[1]=mfhi|mflo;
	assign MFhilo[0]=mflo;
	assign MThilo=mthi;
/*=========================================================================================================*/
endmodule

