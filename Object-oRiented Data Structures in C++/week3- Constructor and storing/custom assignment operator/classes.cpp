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
cube& cube::operator=(const cube& cube_obj)
{
    cout<<"custom operator invoked"<<endl;
    this->length = cube_obj.length;
    return *this; //returning the object to be assigned to the reference return
}
rectangle::rectangle(rectangle &rect_obj)
{
    cout<<"copy constructor is invoked"<<endl;
}
int rectangle::rect_area()
{
    return(this->length*this->width);
}
