#pragma once
#include <iostream>
using namespace std;
class Box{
    public:
    Box();
    Box (const double newlength,const double newbreadth,const double newheight );
    ~Box();
    double Getvolume();
    void setlength(double len);
    void setBreath(double bre);
    void setHeight(double hei);
Box operator+(const Box& b);
private:
double length;
double breadth;
double height;
};