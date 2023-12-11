/*
1- static member is shared between all the objects
2- we can use static to make a counter and instant index of a group of objects
3-[static member function] allow you to just use a function of a class at any place
4-*************** Class::Function();**********************
*/
#include"iostream"
#include"string.h"
using namespace std;
class students{
private:
    static int count ;
    char name[50];
    int ID;
    int course1_grade;
    int course2_grade;
public:
    students():name("no name"),ID(0),course1_grade(0),course2_grade(0)
    {
        count++;
    };
    students(char name_u[50],int ID_u,int course1_grade_u, int course2_grade_u )
    {
        count ++;
        strcpy(name,name_u);
        ID = ID_u;
        course1_grade = course1_grade_u;
        course2_grade = course2_grade_u;
    }
    /****************static function member***************/
    // we can implement a function here and use it later at any place
    static int grade_sum(int a,int b)
    {
        return (a+b);
    }
    //the next code will give error if you use name because name is not static then not shareable
    /*
    static int print()
    {
        cout<<"count = "<<count<<" name = "<< name <<endl;
    }
    */
    // so static function can be used to trace the static members
    static void tracing_count()
    {
        cout<<"count now = "<<count<<endl;
    }
    void grade_calculation()
    {
        int grade = students::grade_sum(course1_grade,course2_grade);
        cout<<"final grade =  "<<((grade*100)/150)<<" %"<<endl;
    }
    void print()
    {
        cout<<count<<"- name is : "<<name<<endl;
    }
};

// static members are initialized outside the class
int students::count = 0 ;
// the next initialization gives you error :
/*                students::count = 0;
/*because the class declares only that there's a name called count but never allocate it
so you need a definition to the storage place so you must add int 
*/

int main()
{
    students school_students[50];
    // using the tracing function :
    students::tracing_count();
    // using a static function in the class
    cout<<"using a function in a class :  "<< students::grade_sum(10,3)<<endl;
    // we can't use the grade calculation function
       /*  students::grade_calculation(); */
    
    /*******************************************
     * ************* Example **********************
    ***********************************************/
    school_students[0]=students("Mahmoud",11672,60,61);
    school_students[1]=students("ahmed",11673,70,61);
    school_students[2]=students("abdelrahman",11672,60,71);
    students::tracing_count();
    for (int i = 0 ; i <3 ; i++)
        school_students[i].grade_calculation();


   
    return 0;
}