//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P7.h"
using namespace std;

static void test_7() {
    std::vector vec = {1, 4, 5, 2, 3};
    auto it = utec::remover(std::begin(vec), std::end(vec), 5);
    vec.erase(it, vec.end());
    for(const auto& item: vec)
        std::cout << item << std::endl;
}

TEST_CASE("Question #7") {
    execute_test("test_7.in", test_7);
}