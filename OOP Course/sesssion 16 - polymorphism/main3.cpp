#include "iostream"
using namespace std;

/**************************************************
 * ------------- this-> in main class ------------
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
        virtual int area() = 0 ; 
        /*********************************************
         * here we can define one print fucntion, it contain this->area()
         * to make it more clear :
               - area() is a virtual function in the super class, so it will be replaced by the ptr behavior
               - this->area()   will be replaced by ptr->area(), so area() will behave in the defined
        */
        void print_area()
        {
        cout<<"Area = "<<this->area()<<endl;
        }
        /* now you can use ptr->area and it will choose the area function of that ptr
        //---------------------------------------------*/
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
    polygon * arr[2] = {&trig_1 , &rect_1};
    arr[0]->set_dimensions(5,5);
    arr[0]->print_area();
    return 0;
}