`timescale 1ns/1ps

module timer_tb ;
	
	reg clk = 0 ;
	reg rst = 1 ;
	reg start = 0 ;
	reg [7:0] load_Val = 0 ; 
	wire done ;

	timer #(.WIDTH(8)) dut (
		.clk(clk),
		.rst(rst),
		.start(start),
		.load_Val(load_Val),
		.done(done)
	);

	always #5 clk = ~clk ;

	initial begin
		$dumpfile("Timer.vcd");
		$dumpvars(0,timer_tb);

		#10 rst = 0 ;

		#5 load_Val = 8'd5 ; start = 1 ;
		
		#10 start = 0 ;

		#100 ; 

		#5 load_Val = 8'd3 ; start = 1 ;

		#10 start = 0 ;

		#50 $finish ;
	end
endmodule

