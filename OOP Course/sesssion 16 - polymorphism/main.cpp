#include "iostream"
using namespace std;

/***************************************************
 * ------------------ Main Class ------------------
***************************************************/
class polygon
{
    protected:
        int length;
        int width;  
    public:
        polygon(){cout<<" a polygon has created "<<endl;}
        void set_dimensions(int length, int width)
        {
            this->length = length;
            this->width = width;
        }
        virtual int area()
        {
            return 0;
        }
};
/************************************************************************
 * -------- sub Classes [the certain behavior you need]  ------------------
***********************************************************************/
class rectangle : public polygon 
{
    public:
        int area()
        {
            return (length*width);
        }
};

class triangle : public polygon
{
    public:
        int area()
        {
            return (0.5 * length * width);
        }
};

/*******************************************************
 * ----------------------- Main  -----------------------
********************************************************/
int main()
{
    triangle trig_1;
    rectangle rect_1;
    polygon * poly_trig,*poly_rect;
    poly_trig = & trig_1; // Early binding 
    poly_rect = & rect_1; // Early binding

    // now pointers of the main class will behave as the assigned sub class behave
    poly_rect->set_dimensions(10,10);
    poly_trig->set_dimensions(10,10);
    cout<<"area of poly_rect = "<<poly_rect->area()<<endl;
    cout<<"area of poly_trig = "<<poly_trig->area()<<endl;
    return 0;
}