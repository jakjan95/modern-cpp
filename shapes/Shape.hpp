#pragma once

enum class Color : unsigned char {
    Red = 1,
    Green = 2,
    Blue = 3,
};

class Shape {
public:
    explicit Shape(Color color)
        : color_{color} {}
    
    Shape() = default;
    Shape(const Shape&) = default;


    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;

private:
    Color color_;
};
