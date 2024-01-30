#include"stack.hpp"
void game_stack::push_element(const cube& cube)
{
    this->_stack.push_back(cube);
}
cube game_stack::remove_top()
{
    cube b = this->_stack[this->size()];
    this->_stack.pop_back();
    return b;
}
cube game_stack::look_at_top()
{
    cube b = this->_stack[this->size()];
    return b;
}
unsigned int game_stack::size()
{
    return this->_stack.size();
}
cube game_stack::get_item(int index)
{
    return this->_stack[index];
}
std::ostream& operator<<(std::ostream& os, game_stack& stack_obj)
{
    for (int i = 0 ; i < stack_obj.size(); i++)
    {
        os<<"cube color "<<stack_obj.get_item(i).get_color()<<" and it's length : "<<stack_obj.get_item(i).get_length()<<"\n";
    }
    return os;
}