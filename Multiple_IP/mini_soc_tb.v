module mini_soc_tb;

    reg clk = 0;
    reg rst = 1;
    reg alu_sel = 0;
    reg mux_sel = 0;

    wire [1:0] soc_out;

    // Clock generation: 10 time unit period
    always #5 clk = ~clk;

    // DUT instantiation
    mini_soc dut (
        .clk     (clk),
        .rst     (rst),
        .alu_sel (alu_sel),
        .mux_sel (mux_sel),
        .soc_out (soc_out)
    );

    initial begin
        // Dump waveform
        $dumpfile("dump.vcd");
        $dumpvars(0, mini_soc_tb);

        // Reset release
        #10 rst = 0;

        // Stimulate ALU and MUX selections
        #20 alu_sel = 1;
        #30 mux_sel = 1;
        #40 alu_sel = 0;
        #20 mux_sel = 0;

        #50 $finish;
    end

endmodule

