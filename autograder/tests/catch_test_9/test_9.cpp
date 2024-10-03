//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P9.h"
using namespace std;

static void test() {
    std::vector vec = {1, 4, 5, 2, 3, 5, 1, 5};
    auto count = utec::contar(std::begin(vec), std::end(vec), 5);
    std::cout << count << std::endl;
}

TEST_CASE("Question #9") {
    execute_test("test_9.in", test);
}