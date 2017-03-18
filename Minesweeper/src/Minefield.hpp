#pragma once

#include <vector>
#include <cstdlib>

class Minefield : Board
{
    private:
        std::vector<std::vector<std::pair<std::size_t,std::size_t>>> board;
};
