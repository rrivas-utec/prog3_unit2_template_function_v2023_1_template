//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P12.h"
using namespace std;

static void test() {
    auto max = utec::max(1, 2, 3, 4, 5);
    std::cout << max << std::endl;
}

TEST_CASE("Question #12") {
    execute_test("test_12.in", test);
}