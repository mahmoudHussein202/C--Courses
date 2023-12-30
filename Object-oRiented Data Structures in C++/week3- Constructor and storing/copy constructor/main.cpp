#include "iostream"
#include "classes.hpp"
using namespace polygons;
int foo(cube a)
{
    cout<<"i'm in the function"<<endl;
}
int main()
{
    cube a(5),b(4); // here default constructor will be invoked
    cube c = a; // here copy constructor will be invoked
    foo(a); // here due to you pass the object by value, this means you make a copy, so copy constructor invoked
    a = b ; // here you'll find that copy constructor is not invoked !!
    /*
        That's because a,b are initialized by default constructor, unlike c which is initialized by copying an object to it 
    */
    return 0;
}


