#include "iostream"
#include "cstring"
using namespace std;
/****************************
 * **** INHERITENCE [3] *********
***************************/
/*
you can make one class inherit properties of many classes
*/
class id_class
{
protected:
    int id;
    int id_protection;
public:
    id_class(int id, int id_protection):id(id),id_protection(id_protection)
    {
        cout<<"id_class paratmetrized constructor"<<endl; 
    }
};
class national_id_class
{
protected:
    char name[50];
    int national_id;
public:
    national_id_class(char name[50],int national_id):national_id(national_id)
    {
        cout<<"id_class paratmetrized constructor"<<endl; 
        strcpy(this->name,name);
    }
};
class student : public id_class , public national_id_class
{
public:
    student(char name[50],int id,int id_protection,int national_id):id_class(id,id_protection),national_id_class(name,national_id)
    {
        cout<<"name :"<<this->name<<", id :"<<this->id<<", id protection:"<<this->id_protection<<"national id:"<<this->national_id<<endl;
    }
};
int main()
{
    student s1("mahmoud",50,125,29800200);
    return 0;
}

/*****************************************************************
 * ******************** IMPLEMENTAION****************************
*****************************************************************/


