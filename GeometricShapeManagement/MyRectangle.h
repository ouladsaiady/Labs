#ifndef MYRECTANGLE_H
#define MYRECTANGLE_H

#include "TwoDimensionalShape.h"

class MyRectangle : public TwoDimensionalShape {
private:
    double width;
    double height;

public:
    MyRectangle(double x, double y, const std::string& color, bool filled, double width, double height)
        : TwoDimensionalShape(x, y, color, filled), width(width), height(height) {}

    double getArea() const override {
        return width * height;
    }

    double getPerimeter() const override {
        return 2 * (width + height);
    }

    std::string toString() const override {
        return "Rectangle with width: " + std::to_string(width) + " and height: " + std::to_string(height);
    }

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }
};

#endif // MYRECTANGLE_H
#pragma once
