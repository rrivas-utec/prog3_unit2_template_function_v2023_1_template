//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <iostream>
#include "P1.h"
using namespace std;

static void test() {
  string text = "Esta es una prueba";
  auto count = utec::count_char(text, 'e');
  std::cout << count << std::endl;
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test);
}