module counter #(
    parameter WIDTH = 8
)(
    //interface signals 
    input logic clk,                        // clock
    input logic rst,                        // reset
    input logic en,                         // counter enable 
    input logic dir,                        // counting direction by flag
    output logic [WIDTH-1:0] count          // count output 
);

always_ff @ (posedge clk)
    if (rst) case(dir)
        1: count <= {WIDTH{1'b0}};
        default: count <= {8'b0000_1001};
    endcase
    else if (dir) count <= count + {{WIDTH-1{1'b0}}, en};
    else count <= count - {{WIDTH-1{1'b0}}, en};
endmodule
