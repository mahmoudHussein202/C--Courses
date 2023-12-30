#include "iostream"
#include "classes.hpp"
using namespace polygons;
using namespace std;
cube::cube(cube &cube_obj)
{
    cout<<"copy constructor is invoked"<<endl;
}
int cube::cube_area()
{
    return(this->length*this->length);
}
rectangle::rectangle(rectangle &rect_obj)
{
    cout<<"copy constructor is invoked"<<endl;
}
int rectangle::rect_area()
{
    return(this->length*this->width);
}