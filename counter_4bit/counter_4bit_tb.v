module counter_4bit_tb();
reg clk,rst;
wire [3:0]q;
counter_4bit dut(.clk(clk),.rst(rst),.q(q));
always #5 clk<=~clk;
initial begin
$dumpfile("counter_4bit.vcd");
$dumpvars(0,counter_4bit_tb);
end
initial begin
rst=1;
clk=0;
$monitor("time: %t, count= %d",$time,q);
#15 rst=0;
#100 rst=1;
$finish;
end
endmodule
