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
  string text = "Ciencia.de.la.Computacion";
  auto result = utec::split(text, '.');
  std::cout << result.size() << std::endl;
}

TEST_CASE("Question #2.2") {
    execute_test("test_2_2.in", test);
}