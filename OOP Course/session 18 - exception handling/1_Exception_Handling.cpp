#include "iostream"
using namespace std;
int main()
{
    int x;
    try
    {
        cin>>x;
        if (x > 10 || x < 0)
        {
            throw x;
        }
        cout<<x<<" is true, it's between 0 and 10"<<endl;
        
    }
    catch(int x)
    {
        if (x > 10)
            cerr<<x<<" is false, it's greater than 10";
        else if (x<10)
            cerr<<x<<" is false, it's less than 10";
    }
    return 0;
}