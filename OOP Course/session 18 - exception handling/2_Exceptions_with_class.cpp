#include "iostream"
using namespace std;
class polygon
{
    protected:
        int length;
        int width;
    public:
        polygon(int length, int width):length(length),width(width)
        {
            cout<<"polygon created"<<endl;
        }
        class square
        {
            public:
                square(){};
                void print_type()
                {
                    cout<<"this is a square"<<endl;
                }

        };
        class rectangle
        {
            public:
                rectangle(){};
                void print_type()
                {
                    cout<<"this is a rectangle"<<endl;
                }
        };
};

int main()
{
    int length,width;
    cin>>length>>width;
    polygon x(length,width);
    polygon::square sq;
    polygon::rectangle rect;
    try
    {
        if (length == width)
            throw sq;
        if (length != width)
            throw rect;
    }
    catch (polygon::square sq)
    {
        sq.print_type();
    }
    catch (polygon::rectangle rect)
    {
        rect.print_type();
    }
    return 0;
}