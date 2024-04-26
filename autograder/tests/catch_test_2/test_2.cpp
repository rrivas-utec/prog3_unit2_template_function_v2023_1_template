//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
using namespace std;

static void test_2() {
  auto count = utec::split(
      "Universidad de Ingenieria y Tecnologia",
      ' ');
  std::cout << count << std::endl;
}

TEST_CASE("Question #2") {
    execute_test("test_2.in", test_2);
}