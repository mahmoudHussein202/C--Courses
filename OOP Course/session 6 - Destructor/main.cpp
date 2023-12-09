#include "iostream"
#include "string.h"
using namespace std;
/**********************************************************/
/*----------------------  Classes ---------------------------/
***********************************************************/
class Student {
private:
    char name[50];
    int ID;
    int age;
public:
    Student(){ cout<<name<<"  from non-paramitrized constructor object created"<<endl;}
    Student(char name[], int ID, int age);
    ~Student();
    void print()
    {
        cout<<"Students data : -Name =  "<<this->name<<"  Id =   "<<this->ID <<"  age :   "<<this->age<<endl;
    }
};
/**********************************************************/
/*----------------------  APIS ---------------------------/
***********************************************************/
void create_student(Student s);
/**********************************************************/
/*--------------------Main Function -----------------------/
***********************************************************/
int main(void) 
{
    char s11[50] = "ahmed";
    Student s1(s11,001,20);
    s1.print();
    cout<< "Function start"<<endl;
    create_student(s1);
    return 0 ;
}
/**********************************************************/
/*---------------Function implenentation -------------/
***********************************************************/
void create_student(Student s)
{
    Student copy_stud;
    
}
Student::Student(char name[], int ID, int age)
{
    strcpy(this->name,name);
    this->ID = ID;
    this->age = age;
    cout<<name<<"   from parametrized constructor object created"<<endl;
}
Student:: ~Student()
{
    cout<<name<<" object destroyed"<<endl; 
}
