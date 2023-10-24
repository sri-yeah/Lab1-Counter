module top #(
  parameter WIDTH = 8
)(
  // interface signals
  input  logic             clk,      // clock 
  input  logic             rst,      // reset 
  input  logic             ld,       // flag check
  output logic [11:0]      bcd       // count output
);

  logic  [WIDTH-1:0]       count;    // interconnect wire

counter myCounter (
  .clk (clk),
  .rst (rst),
  .ld (ld),
  .count (count)
);

bin2bcd myDecoder (
  .x (count),
  .BCD (bcd)
);

endmodule
