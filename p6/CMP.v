`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:39:53 12/07/2014 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
	 input [31:0] A,
    input [31:0] B,
	 input [2:0]Op,
    output reg Br
    );
	 initial
	 Br=0;
	 
	 always@(*)
		begin
			case(Op[2:0])
				3'b001:	if(A!=B) Br=1;//bne 不等于
							else Br=0;
				3'b010:	if(A[31]==1) Br=1;
							else if(A==0) Br=1;//blez 小于等于0
							else Br=0;
				
				3'b011:	if(A!=0&&(A[31]==0)) Br=1;//bgtz 大于0
							else Br=0;
				
				3'b100:	if(A[31]==1) Br=1;//bltz 小于0
							else Br=0;
				
				3'b101:	if(A[31]==0) Br=1;//bgez 大于等于0
							else Br=0;
				
				3'b111:	if(A==B) Br=1;//beq
							else Br=0;
				
				default:Br=0;
			endcase
		end	
endmodule
