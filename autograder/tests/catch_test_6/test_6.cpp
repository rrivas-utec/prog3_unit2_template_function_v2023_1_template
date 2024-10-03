//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P6.h"
#include <vector>
using namespace std;

static void test() {
    std::vector vec = {1, 4, 5, 2, 3};
    std::vector<int> vec2;
    utec::copiar(std::begin(vec), std::end(vec), std::back_inserter(vec2));
    for(const auto& item: vec2)
        std::cout << item << " ";
}

TEST_CASE("Question #6") {
    execute_test("test_6.in", test);
}