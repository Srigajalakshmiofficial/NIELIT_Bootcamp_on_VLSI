module jk_tb();
reg j,k,clk,rst;
wire q,qn;
jk uut(.j(j),.k(k),.rst(rst),.clk(clk),.q(q),.qn(qn));
always #5 clk<=~clk;
initial begin
 $dumpfile("jk.vcd");
 $dumpvars(0,jk_tb);
 end
initial begin 
clk=0;
rst=1;
#15
$monitor("clk= %0t , j= %b , k=%b,q=%b,qn=%",$time,j,k,q,qn);
rst=0;
j=0;k=1;#10
j=1;k=0;#30
j=0;k=0;#20
j=1;k=1;#10
$finish;
end
endmodule


