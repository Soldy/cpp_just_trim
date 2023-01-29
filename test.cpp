#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "doctest.h"
#include "just_trim.hpp"

std::string left_test = " test";
std::string right_test = "test  ";
std::string full_test = " test  ";
TEST_CASE("simple test") {
    SUBCASE("left") {
        just_trim::leftTrim(left_test);
        CHECK(left_test == "test");
    };
    SUBCASE("right") {
        just_trim::rightTrim(right_test);
        CHECK(right_test == "test");
    };
    SUBCASE("full") {
        just_trim::trim(full_test);
        CHECK(full_test == "test");
    };
};
