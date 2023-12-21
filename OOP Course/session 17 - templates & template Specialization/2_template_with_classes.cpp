#include "iostream"
using namespace std;
template<typename t>
class polygon
{
    protected:
        t length;
        t width;
    public:
        polygon(t length , t width):length(length),width(width)
        {
            cout<<"polygon created"<<endl;
        }
        t area_calculation();
        t volume_calculations(t height);
};
int main()
{
    polygon<float> rect(20.5,30.6);
    cout<<"area = "<<rect.area_calculation()<<endl;
    return 0;
}
/*********************************************
 * ----------- Implementation----------------
*********************************************/
//[1] define the template again because it's a new scope
//[2] pass list of arguments for t : <>
//[3] here the t template will give it's type to the g template from the prototype
//[4] <g> means to change every type to the g type "it's must "
template<typename g>
g polygon<g>::area_calculation()
{
    return (length * width);
}
template<typename t>
t polygon<t>::volume_calculations(t height)
{
    return (length*width*height);
}
