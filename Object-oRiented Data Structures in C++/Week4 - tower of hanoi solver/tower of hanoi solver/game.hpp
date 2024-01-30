#ifndef _GAME_H_
#define _GAME_H_
#include "iostream"
#include "vector"
#include "stack.hpp"
class Tower_of_hanoi_game
{
private:
    
public:
    std::vector<game_stack> _stacks;
    Tower_of_hanoi_game();
    void game_solve();
    game_stack get_stack(int index);
    friend std::ostream& operator<<(std::ostream& os, Tower_of_hanoi_game& game);
};
#endif