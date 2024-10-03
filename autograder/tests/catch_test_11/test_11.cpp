//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "P11.h"
#include <vector>
using namespace std;

static void test() {
    std::vector vec1 = {1, 2, 3};
    std::vector vec2 = {4, 5, 6};
    std::vector vec3 = {7, 8, 9};
    auto vec = utec::concat(vec1, vec2, vec3);
    for(const auto& item: vec)
        std::cout << item << " ";
    std::cout << std::endl;
    auto texto = utec::concat("Hola", " ", "Mundo");
    std::cout << texto << std::endl;

}

TEST_CASE("Question #11") {
    execute_test("test_11.in", test);
}