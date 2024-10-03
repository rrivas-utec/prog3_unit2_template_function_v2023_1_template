//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P7.h"
using namespace std;

static void test() {
    std::vector vec = {1, 4, 5, 2, 3};
    auto it = utec::remover(std::begin(vec), std::end(vec), 5);
    vec.erase(it, vec.end());
    for(const auto& item: vec)
        std::cout << item << " ";
}

TEST_CASE("Question #7") {
    execute_test("test_7.in", test);
}