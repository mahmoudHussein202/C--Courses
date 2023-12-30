#pragma once
#include "iostream"
using namespace std;
namespace polygons
{
    class cube{
        private:
            
        public:
            int length;
            cube(int length):length(length){cout<<"defult constructor is invoked"<<endl;};
            cube(cube &cube_obj);
            int cube_area();
            /*************custom assignemnt operator*************/
            cube& operator=(const cube& cube_obj);
    };
    class rectangle{
        private:
            int length;
            int width;
        public:
            rectangle(int length, int width):length(length),width(width){cout<<"defult constructor is invoked"<<endl;};
            rectangle(rectangle &rect_obj);
            int rect_area();
    };
};