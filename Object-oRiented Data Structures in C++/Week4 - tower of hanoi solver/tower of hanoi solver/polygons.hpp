#ifndef _POLYGONS_H_
#define _POLYGONS_H_
#include "iostream"
#include "cstring"
class cube
{
private:
    int length;
    char color[50];
public:
    cube(int length,const char* color_name);
    void set_length(int length);
    double get_length();
    double get_volume();
    double get_surface_area();
    char * get_color();
    friend std::ostream& operator<<(std::ostream &os , cube &obj);
};
#endif