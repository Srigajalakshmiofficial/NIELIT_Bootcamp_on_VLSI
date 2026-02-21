module ha_tb();
reg a,b;
wire sum,carry;
ha uut(.a(a),.b(b),.sum(sum),.carry(carry));
initial begin 
$dumpfile("ha.vcd");
$dumpvars(0,ha_tb);
end
initial begin
$monitor("time=$time, a=%0b,b=%b,sum=%b,carry=%b",a,b,sum,carry);
a=0;b=0;#10
a=0;b=1;#10
a=1;b=0;#10
a=1;b=1;#10
$finish;
end
endmodule

