`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:51:17 12/07/2014 
// Design Name: 
// Module Name:    if_id 
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
module if_id(
	 input clk,
	 input IF_ID_we,
	 input [31:0] instr_if,
	 input [31:0] pc_if,
	 output reg [31:0] instr_id,
	 output reg [31:0] pc_id
    );
/*=========================================================================================================*/	 
	 initial 
	 begin
		instr_id<=0;
		pc_id<=0;
	 end
/*=========================================================================================================*/	 
	 always@(posedge clk)
	 begin
	   if(~IF_ID_we)
	   begin
			instr_id<=instr_if;
			pc_id<=pc_if;
	   end
	 end
/*=========================================================================================================*/
endmodule