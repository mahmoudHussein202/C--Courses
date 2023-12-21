#include "iostream"
using namespace std;

/***************************************************
 * ---------------- Abstract Class ------------------
***************************************************/
class polygon
{
    protected:
        int length;
        int width;  
    public:
        polygon(){cout<<" a polygon has created "<<endl;}
        //--------------Pure Virtual Function ---------
        virtual int area() = 0;
        /* now this class can only define pointers, it can't define objects
        //---------------------------------------------*/
        void set_dimensions(int length, int width)
        {
            this->length = length;
            this->width = width;
        }
};
/**********************************************************************
 * ---------- sub Classes [the certain behavior you need]  -----------
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
    /* this is wrong because polygon now has a pure virtual function 
    polygon j;
    */
    polygon * poly_trig,*poly_rect;
    poly_trig = & trig_1;   // early binding
    poly_rect = & rect_1;   // early binding
    polygon * arr[2] = {&trig_1,&rect_1};
    // now pointers of the main class will behave as the assigned sub class behave
    poly_rect->set_dimensions(10,10);
    poly_trig->set_dimensions(10,10);
    cout<<"area of poly_rect =  "<<poly_rect->area()<<endl;
    cout<<"area of poly_trig =  "<<poly_trig->area()<<endl;
    return 0;
}