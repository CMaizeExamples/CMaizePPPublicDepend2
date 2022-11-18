#include <catch2/catch_test_macros.hpp>

#include <cmaize_public_depend_2/cmaize_public_depend_2.hpp>

TEST_CASE("cmaize_public_depend_2") {
    SECTION("does_cmaize_public_depend_2_work") {
        REQUIRE(call_cmaize_public_depend_2() == 7);
    }
}
