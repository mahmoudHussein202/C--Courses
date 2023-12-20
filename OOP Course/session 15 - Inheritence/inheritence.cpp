#include "iostream"
#include "cstring"
using namespace std;
/****************************
 * **** INHERITENCE [1] *********
***************************/
/* Class gain all the properties of another class but not vise versa
[super class ------> sub class] or [base class -------> derived class]

_________________________
inheritence divided into : 
__________________________
[1] public inheritence : inherit all properties as it is
[2] private inheritence : all the inherited properties are private in the new class
___________________________________________________________________________________
-- a new section will be appear in this topic which is [protected section]
this section is used in inheritence, so the sub class can access the properties of the base class except
    the private properties
*/

class mother_class {
private:
    char name[50];
protected:
    char hair_color[50];
    int height;
    char skin_color[50];
public:
    mother_class(){cout<<" mother class empty constructor"<<endl;}
    mother_class(char *name, int height , char* skin_color , char* hair_color);
    void print_data();
    void set_shape_properties(int height , char* skin_color , char* hair_color);
};
/*************************************
 * note that the sub class inherit by default : 
 * [1] constructors and destructors
 * [2] operator = () members
 * [3] friends
*/
class son_class : public mother_class {
private:
    char name[50];
public:
    // note : here i can't access mother name because it's private in the main class.
    // but i can access all the protected properties
    son_class(char son_name[50]){strcpy(this->name,son_name);}
    void print_data();
};


int main()
{
    mother_class mother_1("Samira",163,"white","brown");
    mother_1.print_data();
    son_class son_1("Mahmoud");
    son_1.set_shape_properties(176,"white","black");
    son_1.print_data();
    return 0;
}

/*****************************************************************
 * ******************** IMPLEMENTAION****************************
*****************************************************************/
mother_class::mother_class(char *name, int height , char* skin_color , char* hair_color)
{
    strcpy(this->name,name);
    strcpy(this->skin_color,skin_color);
    strcpy(this->hair_color,hair_color);
    this->height = height;    
}
void mother_class::print_data()
{
    cout<<" name :  "<<this->name<<"  skin_color : "<<this->skin_color <<" hair color :  "<<this->hair_color << "   height :  "<<this->height<<endl;
}
void son_class::print_data()
{
    cout<<" name :  "<<this->name<<"  skin_color : "<<this->skin_color <<" hair color :  "<<this->hair_color << "   height :  "<<this->height<<endl;
}
void mother_class::set_shape_properties(int height , char* skin_color , char* hair_color)
{
    strcpy(this->skin_color,skin_color);
    strcpy(this->hair_color,hair_color);
    this->height = height;    
}


