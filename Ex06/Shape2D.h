#ifdef SHAPE2D_H
#define SHAPE2D_H

#include <iostream>
#include "Point2D.h"
class Shape2D {
  public:
    Shape2D(){
    }
    string get_name(){
      return name;
    }
    float compute_area() const{
    }
    void translate(float,float){
    }
};

class Shape2D::Circle{
  public:
    Circle(Point2D center, float radius){
    }
    float compute_area(){
      return PI*radius*radius;
    }
    void translate(float tx,float ty) {
      center.x = cemter.x+tx;
      center.y = center.y+ty;
    }
  private:
    Point2D center;
    float radius;
    string name = "Circle";
};

class Shape2D::Rectangle{
  public:
    Rectangle(Point2D left_corner,float width,float height){
    }
    float compute_area(){
      return width*height;
    }
    void translate(float tx,float ty) {
      left_corner.x = left_corner.x + tx;
      left_corner.y = left_corner.y + ty;
    }
  private:
  string name = "Rectangle";
  Shape2D left_corner;
  float width,height;
};
#endif
