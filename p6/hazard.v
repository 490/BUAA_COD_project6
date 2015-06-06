`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:56:04 12/07/2014 
// Design Name: 
// Module Name:    hazard 
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
module hazard(
	 input jr,
	 input jalr,
	 input [2:0]Branch,
	 input RegWrite_ex,RegWrite_mem,
	 input [1:0] MemtoReg_ex,MemtoReg_mem,
	 input [4:0] rs_id, rt_id,
	 input [4:0] a3_ex, a3_mem,
	 input Busy,
	 output stall,
	 input Start,
	 input lw
    );
	 
	 wire stall_1, stall_2, stall_cal_r;
	 
/*Ò»½×*/assign stall_1=(Branch||jr||jalr)&&RegWrite_ex&&((rs_id==a3_ex)||(rt_id==a3_ex));
	
/*¶þ½×*/assign stall_2=(Branch||jr||jalr)&&RegWrite_mem&&(MemtoReg_mem!=2'b00)&&((rs_id==a3_mem)||(rt_id==a3_mem));
	 
	 assign stall_cal_r=(MemtoReg_ex!=2'b00)&&((rs_id==a3_ex)||(rt_id==a3_ex));
	 
	 assign stall=stall_1|stall_cal_r|stall_2|Busy|Start;

endmodule
