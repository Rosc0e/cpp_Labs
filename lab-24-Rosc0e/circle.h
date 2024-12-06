#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius;
    
public:
    Circle();
    Circle(double r);
    void setRadius(double r);
    double getRadius();
    double calcArea();
};

#endif
