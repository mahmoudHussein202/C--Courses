#include "iostream"
#include "cstring"
using namespace std;
/****************************
 * **** INHERITENCE [2]*********
***************************/
/*  we know that the constructor is inherited by defult,
and from the previous example, we saw that empty constructor is inherited , but how can we inherit
    the parametrized constructor ?
*/

class mother_class {
private:

protected:
    char mother_name[50];
    int age;
    char hair_color[50];
    int height;
    char skin_color[50];
public:
    mother_class(){cout<<" mother class empty constructor"<<endl;}
    mother_class(char mother_name[50]){
        cout<<" mother class parametrized constructor"<<endl;
        strcpy(this->mother_name,mother_name);
        }
    mother_class(char *name, int height , char* skin_color , char* hair_color);
    void print_data();
    void set_shape_properties(int height , char* skin_color , char* hair_color);
};
class son_class : public mother_class {
private:
    char name[50];
public:

    // here we can pass arguments to son and mother class properties, note that all properties is owned by the son now
    // when we pass an argument for the mother class properties, it will inherit the parametrized constructor
    son_class(char son_name[50],char mother_name[50]):mother_class(mother_name)
    {
        strcpy(this->name,son_name);
    }
    void print_data();
};


int main()
{
    mother_class mother_1("Samira",163,"white","brown");
    mother_1.print_data();
    son_class son_1("Mahmoud","Farida");
    son_1.set_shape_properties(176,"white","black");
    son_1.print_data();
    return 0;
}

/*****************************************************************
 * ******************** IMPLEMENTAION****************************
*****************************************************************/
mother_class::mother_class(char *name, int height , char* skin_color , char* hair_color)
{
    strcpy(this->mother_name,name);
    strcpy(this->skin_color,skin_color);
    strcpy(this->hair_color,hair_color);
    this->height = height;    
}
void mother_class::print_data()
{
    cout<<"name :  "<<this->mother_name<<", skin_color : "<<this->skin_color <<", hair color :  "<<this->hair_color <<", height :  "<<this->height<<endl;
}
void son_class::print_data()
{
    cout<<"name :  "<<this->name<<", mother name: "<<this->mother_name<<", skin_color : "<<this->skin_color <<", hair color :  "<<this->hair_color << ", height :  "<<this->height<<endl;
}
void mother_class::set_shape_properties(int height , char* skin_color , char* hair_color)
{
    strcpy(this->skin_color,skin_color);
    strcpy(this->hair_color,hair_color);
    this->height = height;    
}


