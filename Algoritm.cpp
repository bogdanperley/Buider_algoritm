#include "Algoritm.h"
#include <string>

void Default_bilder::step_1() {}

void Default_bilder::step_2() {}

void Default_bilder::step_3() {}

std::string Default_bilder::get_Result() { return std::string(); }

void Concrete_builder_1::step_1() {
  // std::string str{ "step_1 " };
  str_ += "step_1 ";
}

void Concrete_builder_1::step_3() { str_ += "step_3 "; }

std::string Concrete_builder_1::get_Result() { return str_; }

void Concrete_builder_2::step_2() { str_ += "step_2 "; }

void Concrete_builder_2::step_3() { str_ += "step_3 "; }

std::string Concrete_builder_2::get_Result() { return str_; }

void build(Builder &b) {
  b.step_1();
  b.step_2();
  b.step_3();
}
