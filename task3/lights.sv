module lights #(
    parameter WIDTH = 8
)(
    input logic                 clk,
    input logic                 rst,
    output logic [WIDTH-1:0]    data_out
);

logic                           tick;

clktick ticker(
    .clk(clk),
    .rst(rst),
    .en(1),
    .N(27),
    .tick(tick)
);

f1_fsm fsm (
    .rst(rst),
    .clk(clk), 
    .en(tick),
    .data_out(data_out)
);

endmodule
