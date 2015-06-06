`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:17:42 12/11/2014
// Design Name:   mul_div
// Module Name:   C:/Users/dell/Desktop/BUAA2/PROJECT/P6-VerilogHDL-pipeline_CPU-V2/p6/test_muldiv.v
// Project Name:  p6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mul_div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_muldiv;

	// Inputs
	reg Clk;
	reg Rst;
	reg [31:0] D1;
	reg [31:0] D2;
	reg HiLo;
	reg [1:0] Op;
	reg Start;
	reg We;

	// Outputs
	wire Busy;
	wire [31:0] HI;
	wire [31:0] LO;

	// Instantiate the Unit Under Test (UUT)
	mul_div uut (
		.Clk(Clk), 
		.Rst(Rst), 
		.D1(D1), 
		.D2(D2), 
		.HiLo(HiLo), 
		.Op(Op), 
		.Start(Start), 
		.We(We), 
		.Busy(Busy), 
		.HI(HI), 
		.LO(LO)
	);

	initial begin
		// Initialize Inputs
		#0 Clk = 0;
		#0 Rst = 0;
		#0 D1 = 6;
		#0 D2 = -4;
		#0 HiLo = 0;
		#0 Op = 1;
		#0 We = 0;
		#0 Start = 1;
		#60 Start =0;
		// Wait 100 ns for global reset to finish
		//#100;
        
		// Add stimulus here

	end
      always #20 Clk=~Clk;
endmodule

