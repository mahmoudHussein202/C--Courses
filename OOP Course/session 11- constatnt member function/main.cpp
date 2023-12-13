#include"iostream"
#include"string.h"
using namespace std;
/**********************************************
 * ********** Constant function member ********
**********************************************/
/*
we use constatnt with member functions so that we can force a const members to
use these function only
*/

class students{
private:
    char name[50];
    int ID;
    int fees;
public:
    students(char name[],int ID,int fees)
    {
        strcpy(this->name,name);
        this->ID = ID;
        this->fees = fees;
    }
    void public_print() const
    {
        cout<<"name is : "<<name<<"  ID is :  "<<ID<<endl;
    }
    void private_print()
    {
        cout<<"name is : "<<this->name<<"  ID is :  "<<this->ID<<" Fees is :  "<<this->fees<<endl;
    }
};
int main()
{
    const students student_1 = {"mahmoud",255,45};
    students student_2 = {"ahmed",254,111};
    /* this will give an error : 
    student_1.private_print();
    because student_1 have no access of anything except the const functions
    */
    student_1.public_print();
    // the student_2 is not constant so it has the access over all the functions
    student_2.private_print();
    return 0;
}