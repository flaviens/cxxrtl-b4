#include "cxxrtl.cpp"

int main() {

  cxxrtl_design::p_wrapper__cxxrtl top;

  // Set the asynchronous signals at the beginning to 0.
  top.p_clkin__0.set<uint32_t>(0);
  top.step();

  top.p_clkin__1.set<uint32_t>(0);
  top.step();

  // Raise the clock to provoke the negative edge later.
  top.p_clkin__0.set<uint32_t>(1);
  top.step();

  // in_data[0] = 1
  top.p_in__0.set<uint32_t>(1);
  top.step();

  // Apply the negative edge. We expect the output to become 1.
  top.p_clkin__0.set<uint32_t>(0);
  top.step();

  uint32_t out = top.p_out__0.get<uint32_t>();
  std::cout << "out = " << out << std::endl;

  return 0;
}
