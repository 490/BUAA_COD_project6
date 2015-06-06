`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:14:50 12/09/2014
// Design Name:   CMP
// Module Name:   C:/Users/dell/Desktop/BUAA2/PROJECT/P6-VerilogHDL-pipeline_CPU-V2/p6/test_CMP.v
// Project Name:  p6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CMP
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_CMP;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] Op;

	// Outputs
	wire Br;

	// Instantiate the Unit Under Test (UUT)
	CMP uut (
		.A(A), 
		.B(B), 
		.Op(Op), 
		.Br(Br)
	);

	initial begin
		// Initialize Inputs
		A =1;
		B =1;
		Op = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

