#include"iostream"
#include"cstring"
#include"stdlib.h"
using namespace std;
class students
{
        char Name[50];
        int ID;
    public:
        students(char name[],int id)
        {
            strcpy(Name,name);
            ID = id;
            cout<<Name<<" object created"<<endl;
        }
        void print()
        {
            cout<<"Name : "<<Name<<" , ID : "<<ID<<endl;
        }
};
int main()
{
    students s1("mahmoud",255),s2("ahmed",256);
    // look at this initialization
    int x = int(5);
    cout<< "this initialization is right because int (value) return this value as int :  " <<x<<endl; 
    students arr[3]={s1,s2,students("abdelrahman",257)};
    students *ptr = arr;
    //wrong to write    *(ptr).print();
    ptr->print();
    (ptr+1)->print();
    (ptr+2)->print();

}