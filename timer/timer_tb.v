module timer_tb ;
	parameter N=10;
	reg clk = 0 ;
	reg rst = 1 ;
	reg start = 0 ;
	reg [9:0] load_Val = 0 ;
	reg [9:0] end_val=0;
	wire done ;
	

	timer #(N) dut (
		.clk(clk),
		.rst(rst),
		.start(start),
		.load_Val(load_Val),.end_val(end_val),
		.done(done)
	);

	always #5 clk <= ~clk ;

	initial begin
		$dumpfile("Timer.vcd");
		$dumpvars(0,timer_tb);
		#10 rst = 0 ;
		#5 load_Val = 10'd7 ; start = 1 ;
		#15 end_val=10'd2; 
		#10 start = 0 ;
		#100 ; 
		#5 load_Val = 10'd5 ; start = 1 ;
                #15 end_val=10'd1;
		#10 start = 0 ;

		#150 $finish ;
	end
endmodule

