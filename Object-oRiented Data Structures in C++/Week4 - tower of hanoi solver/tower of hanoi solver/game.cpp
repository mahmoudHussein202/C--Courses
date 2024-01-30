#include "game.hpp"
#include "stack.hpp"
#include "polygons.hpp"
Tower_of_hanoi_game::Tower_of_hanoi_game()
{
    // initialize three stacks
    for (int i = 0 ; i <3 ; i++)
    {
        game_stack stack_1;
        this->_stacks.push_back(stack_1);
    }
    // initialize cubes and mount them at stack [0]
    cube blue_c(15,"blue");
    this->_stacks[0].push_element(blue_c);
    cube red_c(20,"red");
    this->_stacks[0].push_element(red_c);
    cube green_c(25,"green");
    this->_stacks[0].push_element(green_c);
    cube orange_c(30,"orange");
    this->_stacks[0].push_element(orange_c);
}
game_stack Tower_of_hanoi_game::get_stack(int index)
{
    return this->_stacks[index];
}
std::ostream& operator<<(std::ostream& os, Tower_of_hanoi_game& game)
{
    
        for(int i = 0 ; i<3; i++)
        {
            os<<"stack no. "<<i+1<<"\n"<<"--------------------------\n";
            int size = game.get_stack(i).size();   
            for (int k=0; k<size;k++)
            {
            os<<"cube color "<<game.get_stack(i).get_item(k).get_color()<<", length = "<<game.get_stack(i).get_item(k).get_length()<<"\n";
            }
            os<<"\n\n";
        }
        

    return os;
}

void Tower_of_hanoi_game::game_solve()
{

}
