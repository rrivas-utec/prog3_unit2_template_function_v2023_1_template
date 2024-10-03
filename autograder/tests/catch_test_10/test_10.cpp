//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P10.h"
using namespace std;

static void test() {
    auto total = utec::sum(1, 2, 3, 4, 5);
    std::cout << total << std::endl;
}

TEST_CASE("Question #10") {
    execute_test("test_10.in", test);
}