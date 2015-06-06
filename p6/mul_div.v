`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:26:54 12/07/2014 
// Design Name: 
// Module Name:    mul_div 
// ProjeciName: 
// TargeiDevices: 
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
module mul_div(
	input Clk,
	input Rst,
	input [31:0]D1,
	input [31:0]D2,
	input HiLo,
	input[1:0]Op,
	input Start,
	input We,
	output Busy,
	output[31:0]HI,
	output[31:0]LO
    );
/*=========================================================================================================*/

	 reg [31:0] Hi,Lo,HI,LO;
	 reg [4:0] i;
	 reg Busy;
/*=========================================================================================================*/	 
 
/*=========================================================================================================*/	 
	initial
	begin
		Hi<=0;
		Lo<=0;
		Busy<=0;
	end
/*=========================================================================================================*/	 
	always@(Rst)
	begin
		Hi<=0;
		Lo<=0;
		Busy<=0;	
	end
/*=========================================================================================================*/	 
	always@(posedge Clk )
	begin
		if(Start)
		begin
			Busy<=1;
			case(Op) 
				2'b00:begin
							{Hi,Lo}<=D1*D2;//multu
							i=5;
						end
				2'b01:begin
							{Hi,Lo}<= $signed(D1)*$signed(D2);//mult
							i=5;
						end
				2'b10:begin
							Lo<= D1/D2;
							Hi<= D1%D2;
							i=10;
						end
				2'b11:begin
							Lo<= $signed(D1)/$signed(D2);
							Hi<= $signed(D1)%$signed(D2);
							i=10;
				      end
			endcase
			end

	end
/*=========================================================================================================*/	
	always@(posedge Clk)
	begin
	if(Busy&&(~i))
		begin
			HI<=Hi;
			LO<=Lo;
			Busy<=0;
		end
	if(i!=0)
		i=i-1;
	if(We)
		begin
			if(HiLo)
				Hi<=D1;
			else
				Lo<=D1;
		end
	end
/*=========================================================================================================*/
endmodule
