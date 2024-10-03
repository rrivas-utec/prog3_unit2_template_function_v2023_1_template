//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P8.h"
using namespace std;

static void test() {
    std::vector vec = {1, 4, 5, 2, 3};
    utec::reemplazar(std::begin(vec), std::end(vec), 5, 10);
    for(const auto& item: vec)
        std::cout << item << " ";
}

TEST_CASE("Question #8") {
    execute_test("test_8.in", test);
}