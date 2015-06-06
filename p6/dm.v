`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:55:18 12/07/2014 
// Design Name: 
// Module Name:    dm 
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
module dm( 
	input [11:2] A , 
	input [3:0]BE,	
	input [31:0] WD ,
	output [31:0] RD,
	input We, 
	input Clk 
	 ) ;
/*==================================================*/
	reg [31:0] dm[0:2047] ;
/*==================================================*/
	assign RD=dm[A];	

/*==================================================*/
	integer i;
	initial
	begin
		for(i=0;i<2048;i=i+1)
			dm[i]<=32'b0;
	end
/*==================================================*/
	//sw 1111
	//sh 0011,1100
	//sb 0001,0010,0100,1000
	always@(posedge Clk)
	begin
		if(We)
			begin
				case(BE)
				4'b1111:dm[A][31:0]<=WD;
				4'b0011:dm[A][15:0]<=WD[15:0];
				4'b1100:dm[A][31:16]<=WD[15:0];
				4'b0001:dm[A][7:0]<=WD[7:0];
				4'b0010:dm[A][15:8]<=WD[7:0];
				4'b0100:dm[A][23:16]<=WD[7:0];
				4'b1000:dm[A][31:24]<=WD[7:0];
				endcase
			end
	end
/*==================================================*/
endmodule


