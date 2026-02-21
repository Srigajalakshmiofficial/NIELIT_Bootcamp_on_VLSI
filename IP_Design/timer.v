module timer #(
	parameter WIDTH = 8 
)( 
	input wire clk ,
	input wire rst ,
	input wire start ,
	input wire [WIDTH-1:0] load_Val ,
	output reg done 
);
	
	reg [WIDTH-1:0] count ;
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
				if(count > 0) begin
					count <= count -1 ;
				end else begin
					running <= 0 ;
					done <= 1 ;
				end
			end
		end
	end
endmodule


