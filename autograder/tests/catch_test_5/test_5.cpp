//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P5.h"
using namespace std;

static void test() {
  std::vector vec = {1, 4, 5, 2, 3};
  auto it = utec::buscar(std::begin(vec), std::end(vec), 5);
  std::cout << *it << std::endl;
}

TEST_CASE("Question #5") {
    execute_test("test_5.in", test);
}