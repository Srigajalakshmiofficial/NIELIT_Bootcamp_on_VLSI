module timer #(
	parameter N = 10
)( 
	input wire clk ,
	input wire rst ,
	input wire start ,
	input  wire [N-1:0] load_Val ,
	input  wire [N-1:0]end_val,
	output reg done 
);
	
	reg [N-1:0] count ;
	reg running ;

	always @( posedge clk or posedge rst) begin 
		if(rst) begin 
			count <= 0 ;
			running <= 0 ;
			done <= 0 ;
		end
		else begin
			if (start) begin
				count <= load_Val ;
				running <= 1 ;
				done <= 0 ;
			end
			else if (running) begin
				if(count > end_val) begin
					count <= count -1 ;
				end else begin
					running <= 0 ;
					done <= 1 ;
				end
			end
		end
	end
endmodule


