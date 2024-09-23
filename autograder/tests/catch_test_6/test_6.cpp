//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P6.h"
using namespace std;

static void test_6() {
    std::vector vec = {1, 4, 5, 2, 3};
    std::vector vec2;
    utec::copiar(std::begin(vec), std::end(vec), std::back_inserter(vec2));
    for(const auto& item: vec2)
        std::cout << item << std::endl;
}

TEST_CASE("Question #6") {
    execute_test("test_6.in", test_6);
}