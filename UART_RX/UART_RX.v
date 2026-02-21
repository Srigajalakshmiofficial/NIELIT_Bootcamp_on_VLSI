module UART_RX #(parameter CLKS_PER_BIT = 217)(
    input  wire       clk,
    input  wire       rx,
    output reg        rx_valid,
    output reg [7:0]  rx_data
);

    localparam IDLE     = 3'b000;
    localparam START    = 3'b001;
    localparam DATA     = 3'b010;
    localparam STOP     = 3'b011;
    localparam CLEANUP  = 3'b100;

    reg [2:0]  state = IDLE;
    reg [7:0]  clk_cnt = 0;
    reg [2:0]  bit_idx = 0;

    always @(posedge clk) begin
        case (state)

        // -------------------------------------------------
        IDLE: begin
            rx_valid <= 1'b0;
            clk_cnt  <= 0;
            bit_idx  <= 0;

            if (rx == 1'b0)
                state <= START;
        end

        // -------------------------------------------------
        START: begin
            if (clk_cnt == (CLKS_PER_BIT-1)/2) begin
                if (rx == 1'b0) begin
                    clk_cnt <= 0;
                    state   <= DATA;
                end else
                    state <= IDLE;
            end else
                clk_cnt <= clk_cnt + 1;
        end

        // -------------------------------------------------
        DATA: begin
            if (clk_cnt < CLKS_PER_BIT-1) begin
                clk_cnt <= clk_cnt + 1;
            end else begin
                clk_cnt <= 0;
                rx_data[bit_idx] <= rx;

                if (bit_idx < 7)
                    bit_idx <= bit_idx + 1;
                else begin
                    bit_idx <= 0;
                    state   <= STOP;
                end
            end
        end

        // -------------------------------------------------
        STOP: begin
            if (clk_cnt < CLKS_PER_BIT-1)
                clk_cnt <= clk_cnt + 1;
            else begin
                rx_valid <= 1'b1;
                clk_cnt  <= 0;
                state    <= CLEANUP;
            end
        end

        // -------------------------------------------------
        CLEANUP: begin
            rx_valid <= 1'b0;
            state    <= IDLE;
        end

        default: state <= IDLE;

        endcase
    end

endmodule
