#pragma once

#include "Shape.hpp"

class Rectangle : public Shape
{
public:
    using Shape::Shape;
    Rectangle(double x, double y);
    Rectangle(const Rectangle & other);

    double getArea() const override;
    double getPerimeter() const override;
    virtual double getX() const;
    double getY() const;
    void print() const override;

private:
    Rectangle();

    double x_{};
    double y_{};
};
