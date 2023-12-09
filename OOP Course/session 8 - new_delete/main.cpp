#include "iostream"
#include "string.h"
using namespace std;
/**********************************************************/
/*----------------------  Classes ---------------------------/
***********************************************************/
class rectangle
{
  private:
    int * width, *height;
  public:
  rectangle(int width,int height);
  ~rectangle();
  void area()
  {
    cout<<"area of the rectangle = "<<*width * *height<<endl;
  }
};
/**********************************************************/
/*----------------------  APIS ---------------------------/
***********************************************************/

/**********************************************************/
/*--------------------Main Function -----------------------/
***********************************************************/
int main(void) 
{
    rectangle rectA(5,5),rectB(4,5);
    rectA.area();
    rectB.area();
    return 0 ;
}
/**********************************************************/
/*---------------Function implenentation -------------/
***********************************************************/
rectangle::rectangle(int width,int height)
{
    this->width = new int;
    cout<<"address given by compiler for width pointer = "<<this->width<<endl;
    this->height = new int;
    cout<<"address given by compiler for height pointer = "<<this->height<<endl;
    *(this->width) = width;
    *(this->height) = height;
}
rectangle::~rectangle()
{
    delete this->width;
    delete this->height;
    cout<<"width address deleted :( = "<<this->width<<endl;
    cout<<"height address deleted :( = "<<this->height<<endl;

}
