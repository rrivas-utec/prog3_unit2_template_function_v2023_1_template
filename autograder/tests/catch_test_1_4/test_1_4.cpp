//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <iostream>
#include <deque>
#include "P1.h"
using namespace std;

static void test() {
  std::deque text = {'E','s','t','a',' ','e','s',' ',
                     'u','n','a',' ',
                     'p','r','u','e','b','a'};
  auto count = utec::count_char(text, 'e');
  std::cout << count << std::endl;
}

TEST_CASE("Question #1.4") {
    execute_test("test_1_4.in", test);
}