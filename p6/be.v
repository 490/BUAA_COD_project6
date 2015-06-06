`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:52:01 12/10/2014 
// Design Name: 
// Module Name:    be 
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
module be(
	input [1:0]addr,
	input [1:0]Store_mem,
	output reg[3:0]BE
    );
	always@(*)
	begin
		case(Store_mem)
			0:BE<=4'b1111;//sw
			1://sh
				case(addr[1])
					0:BE<=4'b0011;
					1:BE<=4'b1100;
				endcase
			2://sb
				case(addr)
					2'b00:BE<=4'b0001;
					2'b01:BE<=4'b0010;
					2'b10:BE<=4'b0100;
					2'b11:BE<=4'b1000;
				endcase
		endcase
	end

endmodule
