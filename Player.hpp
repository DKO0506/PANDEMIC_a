#pragma once
#include "Board.hpp"
#include "City.hpp"
#include <set>

namespace pandemic{

    class Player {

        protected:
            std::set<City> cards;
            Board board;
            City city;
            std::string type;

        public:
            Player(){}
            Player(Board& b, City c, std::string r): board(b), city(c), type(r){}

            Player& take_card(City c);
            Player& drive(City c);
            Player& fly_direct(City c);
            Player& fly_charter(City c);
            Player& fly_shuttle(City c);
            Player& build();
            Player& discover_cure(Color c);
            Player& treat(City c);

            std::string role(){return type;}
    };

    Player& Player::drive(City c){return *this;}

    Player& Player::take_card(City c){return *this;}

    Player& Player::fly_direct(City c){return *this;}

    Player& Player::fly_charter(City c){return *this;}

    Player& Player::fly_shuttle(City c){return *this;}

    Player& Player::build(){return *this;}

    Player& Player::discover_cure(Color c){return *this;}

    Player& Player::treat(City c){return *this;}
}
