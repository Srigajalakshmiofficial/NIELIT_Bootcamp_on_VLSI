
module mux_4x1_tb();
reg i0,i1,i2,i3,s0,s1;
wire y;
mux_4x1 uut(.i0(i0),.i1(i1),.i2(i2),.i3(i3),.s0(s0),.s1(s1),.y(y));
initial begin 
$dumpfile("mux_4x1.vcd");
$dumpvars(0,mux_4x1_tb);
end 
initial begin
$monitor("s0=%b,s1=%b,y=%b",s0,s1,y);
i0=1;i1=0;i2=1;i3=0;
s0=0;s1=0;#10
s0=0;s1=1;#10
s0=1;s1=0;#10
s0=1;s1=1;#10
$finish;
end
endmodule 
