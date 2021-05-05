
#include <iostream>
#include <string>
#include <stdexcept>
#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Scientist.hpp"
#include "Researcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
#include "GeneSplicer.hpp"
#include "FieldDoctor.hpp"

using namespace std;
using namespace pandemic;

TEST_CASE("OperationsExpert")
{
    Board b;
    OperationsExpert player1(b, City::Milan);
    CHECK_NOTHROW(player1.build());
    CHECK_NOTHROW(player1.take_card(City::Madrid).fly_direct(City::Madrid).build());
    CHECK_THROWS(player1.build());
    CHECK_NOTHROW(player1.take_card(City::Miami).fly_direct(City::Miami).build());
}

TEST_CASE("Dispatcher")
{
    Board b;
    Dispatcher player2(b, City::Milan);
    player2.take_card(City::NewYork).build();
    CHECK_NOTHROW(player2.fly_direct(City::SaoPaulo));
    CHECK_THROWS(player2.fly_direct(City::Lima));
    CHECK_NOTHROW(player2.take_card(City::Lima).fly_direct(City::Lima).build());
    CHECK_NOTHROW(player2.fly_direct(City::SaoPaulo));
}

TEST_CASE("Scientist")
{
    Board b;
    Scientist player3(b, City::Milan, 4);
    CHECK_THROWS(player3.discover_cure(Color::Blue));
    player3.take_card(City::Atlanta).take_card(City::NewYork).take_card(City::SanFrancisco).take_card(City::Chicago);
    CHECK_THROWS(player3.discover_cure(Color::Blue));
    CHECK_NOTHROW(player3.fly_direct(City::NewYork).build().discover_cure(Color::Blue));
}

TEST_CASE("Researcher")
{
    Board b;
    Researcher player4(b, City::Milan);
    CHECK_THROWS(player4.discover_cure(Color::Blue));
    player4.take_card(City::Atlanta).take_card(City::NewYork).take_card(City::SanFrancisco).take_card(City::Chicago);
    CHECK_NOTHROW(player4.discover_cure(Color::Blue));
    CHECK_NOTHROW(player4.take_card(City::Bogota).fly_direct(City::Bogota).discover_cure(Color::Yellow));
}

TEST_CASE("Virologist")
{
    Board b;
    Virologist player6(b, City::Milan);
    b[City::Washington] = 3;
    b[City::Sydney] = 2;
    CHECK_NOTHROW(player6.take_card(City::Washington).treat(City::Washington));
    CHECK_THROWS(player6.treat(City::Washington));
            CHECK_EQ(b[City::Washington], 2);
    CHECK_NOTHROW(player6.take_card(City::Sydney).treat(City::Sydney));
    CHECK_NOTHROW(player6.take_card(City::Sydney).treat(City::Sydney));
            CHECK_EQ(b[City::Sydney], 0);
    CHECK_THROWS(player6.treat(City::Tehran));
}

TEST_CASE("GeneSplicer")
{
    Board b;
    GeneSplicer player7(b, City::Milan);
    CHECK_THROWS(player7.discover_cure(Color::Blue));
    player7.take_card(City::Milan).build();
    CHECK_THROWS(player7.discover_cure(Color::Blue));
    CHECK_NOTHROW(player7.take_card(City::Chicago).take_card(City::SanFrancisco).take_card(City::Montreal).take_card(City::NewYork));
    CHECK_NOTHROW(player7.discover_cure(Color::Black));
}

TEST_CASE("FieldDoctor")
{
    Board b;
    FieldDoctor player8(b, City::Milan);
    b[City::Essen] = 1;
    b[City::Paris] = 1;
    b[City::Istanbul] = 1;
    CHECK_NOTHROW(player8.treat(City::Milan));
    CHECK_THROWS(player8.treat(City::Essen));
    CHECK_NOTHROW(player8.treat(City::Paris));
    CHECK_NOTHROW(player8.treat(City::Istanbul));
}