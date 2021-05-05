#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <map>
#include <set>
#include <iostream>

namespace pandemic{

    class Board {
        std::map<City, int> diseas_cubes;


        public:
            Board(){}

            int& operator[](City c);
            bool is_clean();
            bool is_connected(City& c1, City& c2);
            void build_research_station(City c);
            bool is_research_station(City c);
            void discover_cure(City c);
            bool is_cure_discoverd(City c);
            Color color_of(City c);
            friend std::ostream& operator<<(std::ostream& out, Board& b);
    };

//----------------------------------------------------------------------------------------------
    int& Board::operator[](City c){
        return diseas_cubes[c];
    }

    bool Board::is_clean(){return true;}

    bool Board::is_connected(City& c1, City& c2){return true;}

    void Board::build_research_station(City c){}

    bool Board::is_research_station(City c){return true;}

    void Board::discover_cure(City c){}

    Color Board::color_of(City c){return Red;}

    std::ostream& operator<<(std::ostream& out, Board& b){return out;}
}
