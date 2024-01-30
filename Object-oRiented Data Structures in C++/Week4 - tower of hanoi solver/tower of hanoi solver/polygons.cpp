#include"polygons.hpp"
#include<cstring>
cube::cube(int length,const char* color_name)
{
    this->length = length;
    strcpy(this->color,color_name);
}
void cube::set_length(int length)
{
    this->length = length;
}
double cube::get_length() 
{
        return (this->length);
}
double cube::get_volume() 
{
    return (this->length * this->length * this->length);
}
double cube::get_surface_area() 
{
    return (this->length * this->length);
}
char* cube::get_color()
{
    return this->color;
}

std::ostream& operator<<(std::ostream &os , cube &obj)
{
    os<<"cube length : "<<obj.get_length()<<", and it's color is : "<<obj.color;
    return os;
}

