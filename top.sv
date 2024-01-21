module top(clkin_data, in_data, out_data);
  reg celloutsig_0z;
  input [63:0] clkin_data;
  wire [63:0] clkin_data;
  input [31:0] in_data;
  wire [31:0] in_data;
  output [31:0] out_data;
  wire [31:0] out_data;
  always_ff @(negedge clkin_data[0])
    if (!clkin_data[32]) celloutsig_0z <= in_data[0];
  assign out_data[0] = celloutsig_0z;
endmodule