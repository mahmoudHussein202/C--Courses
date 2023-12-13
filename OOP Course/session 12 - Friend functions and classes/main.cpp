#include "iostream"
#include "string.h"
using namespace std;
class studends_instructor;
class students;

/****************************************************
 *-------------------- Friend ---------------------
****************************************************/
/*
    - friend qualifier is used to make a function or a class have an access
    on the private stuff of another class
*/

// studends_instructor class is a friend of students class 
// which means it can access it's private data but not vise versa
class students
{
private:
    char name[50];
    int id;
    int fees;
public:
    students(char name[],int id, int fees);
    friend void print_details(students student_temp);
    friend class studends_instructor;
    /* the following code gives an error because students class is not a freind
        which means that it can not access the private data 


    void instructor_print_name(studends_instructor instructor)
    {
        cout<<instructor.instructor_name;
    }
    */
};
class studends_instructor
{
private:
    char instructor_name[50];
    int id ;
public:
    studends_instructor(char name[],int id)
    {
        strcpy(this->instructor_name, name);
        this->id = id;
    };
    void check_student(students temp_student)
    {
        cout<<"name of student : "<< temp_student.name<< "  Fees : "<<temp_student.fees<<endl;
    }
};






int main()
{
    /*-----------both initialization accepted if you have a parametrized constructor*/
    studends_instructor instructor_1 = {"mahmoud",82};
    students student1("ahmed",22,4444);
    // a friend class of students class which can access private data
    instructor_1.check_student(student1);
    // a friend function of stuednts class which can access private data 
    print_details(student1);
    return 0;
}


/****************************************************
 *----------- Functions implementations -------------
****************************************************/
students::students(char name[],int id, int fees)
{
    strcpy(this->name,name);
    this->id= id;
    this->fees = fees;
}
void print_details(students student_temp)
{
    cout<<"name = "<<student_temp.name<<"ID = : "<<student_temp.id<<endl;
    // function can access the name because it's a friend.
}
