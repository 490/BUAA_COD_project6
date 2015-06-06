`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:10:13 12/10/2014 
// Design Name: 
// Module Name:    loadhalfbyte 
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
module loadhalfbyte(
 	input [31:0]data,
	input addr,
	output [31:0]halfbytedata
    );
	
	 parameter a=(15+addr<<4);
	 parameter b=(addr<<4);
	 assign halfbytedata={28'b0,data[a:b]};


endmodule
