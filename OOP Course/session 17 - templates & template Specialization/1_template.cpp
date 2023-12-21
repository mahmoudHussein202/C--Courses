#include "iostream"
using namespace std;
template <typename data_type1, typename data_type2>
data_type1 summiton (data_type1 val_1, data_type2 val_2 )
{
    return (val_1 + val_2);
}
int main()
{
    float x = 5.6;
    int y = 6;
    cout<<"summition = "<<summiton<float,float>(y,x)<<endl;
    return 0;
}