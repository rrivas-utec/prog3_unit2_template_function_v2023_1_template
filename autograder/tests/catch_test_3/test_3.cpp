//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P3.h"
using namespace std;

static void test() {
  int arr[] = {11, 12, 13, 14, 20, 23};
  auto total = calcular_total(arr);
  std::cout << total << std::endl;
}

TEST_CASE("Question #3") {
    execute_test("test_3.in", test);
}