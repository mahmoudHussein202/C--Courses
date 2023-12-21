#include"iostream"
using namespace std;

//********************* THis is How to define a specialized class ***********************//
//[1] create a normal template to accept all the data types
template<class t>
class char_only
{
    public:
        char_only(t u_input)
        {
            cout<<u_input<<" is not a character"<<endl; 
        }
};
//[2] create an expectional template and pass the datatype after the class name
template<>  //expetional template
class char_only<char>   //pass the datatype you want
{
    public:
      char_only(char u_input) // use the datatype in your variables 
        {
            cout<<u_input<<" is a char "<<endl;
        }
};
int main()
{
    char_only<int> y(2);
    char_only<char> z('x');    
    return 0;
}