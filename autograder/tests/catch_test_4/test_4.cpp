//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include <deque>
#include "redirect_io.h"
#include "P4.h"
using namespace std;

static void test() {
  std::deque deq = {10.0, 4.5, 5.3, 2.4, 3.3};
  auto deq_sorted = utec::quick_sort(deq);
  for(const auto& item: deq_sorted)
    std::cout << item << " ";
}

TEST_CASE("Question #4") {
    execute_test("test_4.in", test);
}