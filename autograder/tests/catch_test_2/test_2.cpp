//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P2.h"
#include <string>
#include <iostream>
using namespace std;

static void test() {
  auto result = utec::split(
      "Universidad de Ingenieria y Tecnologia",
      ' ');
  std::cout << result.size() << std::endl;
}

TEST_CASE("Question #2") {
    execute_test("test_2.in", test);
}