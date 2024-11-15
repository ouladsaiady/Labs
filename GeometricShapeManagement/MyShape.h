#ifndef MYSHAPE_H
#define MYSHAPE_H

#include <string>

class MyShape {
protected:
    double x, y;
    std::string color;
    bool filled;

public:
    MyShape(double x, double y, const std::string& color, bool filled)
        : x(x), y(y), color(color), filled(filled) {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual std::string toString() const = 0;

    virtual ~MyShape() = default;
};

#endif // MYSHAPE_H
#pragma once
