#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square(Color c);
    Square(double x);
    Square(const Square& other) = default;

    double getArea();
    double getPerimeter();
    void print();

private:
    //double getY(); // should not have Y dimension
    Square();
};
