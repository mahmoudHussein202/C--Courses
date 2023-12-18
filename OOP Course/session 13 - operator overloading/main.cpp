#include"iostream"
using namespace std;
class cube_data_type
{
  private:
    int width;
    int length;
    int height;
  public:
    // parametrized constructor  
    cube_data_type(int length = 0, int width = 0, int height = 0){
        this->length = length;
        this->width = width;
        this->height = height;
    };
    void print_dimensions();
    // ---------------- Operations ------------------
    cube_data_type operator +(cube_data_type b);
    cube_data_type operator -(cube_data_type b);
    cube_data_type operator *(cube_data_type b);
    cube_data_type operator /(cube_data_type b);
    cube_data_type operator ++();
    cube_data_type operator ++(int);
    bool operator ==(cube_data_type b);
    bool operator >(cube_data_type b);
    bool operator <(cube_data_type b);
    bool operator >=(cube_data_type b);
    bool operator <=(cube_data_type b);
    bool operator !=(cube_data_type b);

};
int main()
{
    
    cube_data_type a(5,8,7),b(5,6,7),c;
    cout<<"a dims = 5,8,7  , b dims  = 5,6,7"<<endl;
    c = a+b;
    cout<<"a + b =  ";
    c.print_dimensions();
    c = a-b;
    cout<<"a - b =  ";
    c.print_dimensions();
    c = a*b;
    cout<<"a * b =  ";
    c.print_dimensions();
    c = a/b;
    cout<<"a / b =  ";
    c.print_dimensions();
    ++a;
    cout<<"++a =  ";
    a.print_dimensions();
    c= a++;
    cout<<"a++=  ";
    c.print_dimensions();
    a.print_dimensions();
    
    if (a==b)
        cout<<" a = b";
    else if (a>b)
        cout<< "a>b";
    else if(a<b)
        cout<<"a<b";
    else if (a!=b)
        cout<<" a not = b ";
    
    return 0;
}


/**********************************************
 * ************* Implementations **************
***********************************************/
void  cube_data_type::print_dimensions()
{
    cout<<"length = "<<this->length<<"     width = "<<this->width<<"     height = "<<this->height<<endl;
}
cube_data_type cube_data_type::operator+(cube_data_type b)
{
    cube_data_type temp;
    temp.length = this->length + b.length;
    temp.width = this->width + b.width;
    temp.height = this->height + b.height;
    return temp;
}
cube_data_type cube_data_type::operator-(cube_data_type b)
{
    cube_data_type temp;
    temp.length = this->length - b.length;
    temp.width = this->width - b.width;
    temp.height = this->height - b.height;
    return temp;
}
cube_data_type cube_data_type::operator*(cube_data_type b)
{
    cube_data_type temp;
    temp.length = this->length * b.length;
    temp.width = this->width * b.width;
    temp.height = this->height * b.height;
    return temp;
}
cube_data_type cube_data_type::operator/(cube_data_type b)
{
    cube_data_type temp;
    temp.length = this->length / b.length;
    temp.width = this->width / b.width;
    temp.height = this->height / b.height;
    return temp;
}
cube_data_type cube_data_type::operator++()
{
    this->length = (this->length)+1;
    this->width = (this->width)+1;
    this->height = (this->height)+1;
    return *this;
}
cube_data_type cube_data_type::operator++(int)
{
    cube_data_type temp = *this;
    this->length = (this->length)+1;
    this->width = (this->width)+1;
    this->height = (this->height)+1;
    return temp;
}
bool cube_data_type::operator ==(cube_data_type b)
{
    return((this->length == b.length)&&(this->width == b.width)&& (this->height == b.height));
}
bool cube_data_type::operator >(cube_data_type b)
{
    return((this->length * this->width * this->height)>(b.height*b.length*b.width));  
}
bool cube_data_type::operator <(cube_data_type b)
{
    return((this->length * this->width * this->height)<(b.height*b.length*b.width));  
}
bool cube_data_type::operator >=(cube_data_type b)
{
    return((this->length >= b.length)&&(this->width >= b.width)&& (this->height >= b.height));
}
bool cube_data_type::operator <=(cube_data_type b)
{
    return((this->length <= b.length)&&(this->width <= b.width)&& (this->height <= b.height));
}
bool cube_data_type::operator !=(cube_data_type b)
{
    return(!((this->length == b.length)&&(this->width == b.width)&& (this->height == b.height)));
}