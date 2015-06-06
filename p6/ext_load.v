`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:55 12/10/2014 
// Design Name: 
// Module Name:    ext_load 
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
module ext_load(
	input [1:0]A,
	input [31:0]Din,
	input [2:0]Op,
	output reg[31:0]DOut
    );
/*=========================================================================================================*/
	always @(*)
	begin
		case(Op)
			3'b000:DOut<=Din;
			3'b001://lbu
				case(A)
					2'b00:DOut<={24'b0,Din[7:0]};
					2'b01:DOut<={24'b0,Din[15:8]};
					2'b10:DOut<={24'b0,Din[23:16]};
					2'b11:DOut<={24'b0,Din[31:24]};
				endcase
			3'b010://lb
				case(A)
					2'b00:DOut<={{24{Din[7]}},Din[7:0]};
					2'b01:DOut<={{24{Din[15]}},Din[15:8]};
					2'b10:DOut<={{24{Din[23]}},Din[23:16]};
					2'b11:DOut<={{24{Din[31]}},Din[31:24]};
				endcase
			3'b011://lhu
				case(A[1])
					0:DOut<={16'b0,Din[15:0]};
					1:DOut<={16'b0,Din[31:16]};
				endcase
			3'b100://lh
				case(A[1])
					0:DOut<={{16{Din[15]}},Din[15:0]};
					1:DOut<={{16{Din[31]}},Din[31:16]};
				endcase
		endcase
	end 
/*=========================================================================================================*/
endmodule
