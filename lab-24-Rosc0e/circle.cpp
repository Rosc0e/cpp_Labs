#include "circle.h"

const double PI = 3.14159;

Circle::Circle() {
    radius = 0;
}

Circle::Circle(double r) {
    if(r < 0) {
        radius = 0;
    } else {
        radius = r;
    }
}

void Circle::setRadius(double r) {
    if(r < 0) {
        radius = 0;
    } else {
        radius = r;
    }
}

double Circle::getRadius() {
    return radius;
}

double Circle::calcArea() {
    return PI * radius * radius;
}
