#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include "MyShape.h"

class TwoDimensionalShape : public MyShape {
public:
    TwoDimensionalShape(double x, double y, const std::string& color, bool filled)
        : MyShape(x, y, color, filled) {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;

    virtual ~TwoDimensionalShape() = default;
};

#endif // TWODIMENSIONALSHAPE_H
#pragma once
