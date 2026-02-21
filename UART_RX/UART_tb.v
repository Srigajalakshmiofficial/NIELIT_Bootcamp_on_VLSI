`timescale 1ns/1ps

module uart_tb;

    parameter CLKS_PER_BIT = 217;
    parameter CLOCK_PERIOD_NS = 40;
    parameter BIT_PERIOD = 8600 ;

    reg clk = 0 ;
    reg rx = 1 ;
    wire [7:0] rx_data ;

    task UART_WRITE_BYTE ;
        input [7:0] data_in ;
        integer bit_idx;
        begin
          rx <= 1'b0 ;
          #(BIT_PERIOD);
          #1000;
          for (bit_idx = 0; bit_idx < 8 ; bit_idx = bit_idx + 1) begin
            rx <= data_in[bit_idx] ;
            #(BIT_PERIOD);
          end
          rx <= 1'b1 ;
          #(BIT_PERIOD);
        end
    endtask

    UART_RX #(.CLKS_PER_BIT(CLKS_PER_BIT)) uart_rx_inst (
        .clk(clk),
        .rx(rx),
        .rx_valid(),
        .rx_data(rx_data)
    );

    always #(CLOCK_PERIOD_NS/2) clk = ~clk ;

    initial begin
        @(posedge clk) ;
        UART_WRITE_BYTE(8'hA5) ;
        @(posedge clk) ;
        if (rx_data == 8'hA5) begin
            $display("Test Passed: Received data matches sent data.");
        end else begin
            $display("Test Failed: Received data does not match sent data.");
        end
        $finish ;
    end

    initial begin
        $dumpfile("uart_tb.vcd");
        $dumpvars(0, uart_tb);
    end

endmodule