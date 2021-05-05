#include <iostream>
#include "doctest.h"



TEST_CASE("nothing1")
{
    CHECK(0 == 1);
    CHECK(1 == 2);
    CHECK(2 == 3);
    CHECK(3 == 4);
    CHECK(4 == 5);
    CHECK(5 == 6);
    CHECK(6 == 7);
    CHECK(7 == 8);
    CHECK(8 == 9);
    CHECK(9 == 8);
    CHECK(8 == 7);
    CHECK(7 == 6);
    CHECK(6 == 5);
    CHECK(5 == 4);
    CHECK(4 == 3);
    CHECK(3 == 2);
    CHECK(2 == 1);
    CHECK(1 == 0);
    CHECK(0 == '0');
    CHECK(1 == '1');
    CHECK(2 == '2');
    CHECK(3 == '3');
    CHECK(4 == '4');
    CHECK(5 == '5');
    CHECK(6 == '6');
    CHECK(7 == '7');
    CHECK(8 == '8');
    CHECK(9 == '9');



}

TEST_CASE("nothing2")
{
    // CHECK_THROWS(0 == '0');
    // CHECK_THROWS(1 == '1');
    // CHECK_THROWS(2 == '2');
    // CHECK_THROWS(3 == '3');
    // CHECK_THROWS(4 == '4');
    // CHECK_THROWS(5 == '5');
    // CHECK_THROWS(6 == '6');
    // CHECK_THROWS(7 == '7');
    // CHECK_THROWS(8 == '8');
    // CHECK_THROWS(9 == '9');
    


}