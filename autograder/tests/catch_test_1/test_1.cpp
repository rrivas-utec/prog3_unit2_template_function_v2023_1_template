//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P1.h"
using namespace std;

static void test_1() {
  auto count = utec::count_char(
      "Esta es una prueba",
      'e');
  std::cout << count << std::endl;
}

TEST_CASE("Question #1") {
    execute_test("test_1.in", test_1);
}