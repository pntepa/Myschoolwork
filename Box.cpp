#pragma once
#include "box.h"
Box ::Box(){
    length = 0.0;
    breadth =0.0;
    height =0.0;
}
Box :: Box(const double newlength,const double newbreadth,const double newheight ){
    length = newlength;
    breadth = newbreadth;
    height = newheight;
}
Box::~Box(){

}
double Box::Getvolume(){
    return length*breadth*height;}
void Box ::setlength(double len){
    length = len;
}
void Box ::setBreath(double bre){
    breadth = bre;

}void Box ::setHeight(double hei){
    height = hei;
}
Box Box::operator+(const Box& b){
Box box;

    box.length = this-> length + b.length;
    box.breadth = this-> breadth + b.breadth;
    box.height = this-> height + b.height; 
      return box; 
}
