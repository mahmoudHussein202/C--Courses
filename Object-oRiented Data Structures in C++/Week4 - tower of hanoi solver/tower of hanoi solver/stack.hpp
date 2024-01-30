#ifndef _STACK_H_
#define _STACK_H_
#include"polygons.hpp"
#include<iostream>
#include<vector>
class game_stack
{
private:
    std::vector<cube> _stack;
public:
    void push_element(const cube& cube);
    cube remove_top();
    cube look_at_top();
    unsigned int size();
    cube get_item(int index);
    friend std::ostream& operator<<(std::ostream& os, game_stack& stack_obj);
};
#endif