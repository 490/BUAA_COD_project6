`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:03:57 12/10/2014 
// Design Name: 
// Module Name:    loadbyte 
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
module loadbyte(
	input [31:0]data,
	input [1:0]addr,
	output [31:0]bytedata
    );
	 
	 assign bytedata={24'b0,data[(7+8*addr):(8*addr)]};


endmodule
