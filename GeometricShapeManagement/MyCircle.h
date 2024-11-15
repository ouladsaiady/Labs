#ifndef MYCIRCLE_H
#define MYCIRCLE_H

#include "TwoDimensionalShape.h"
#include <stdexcept>

class MyCircle : public TwoDimensionalShape {
private:
    double radius;

public:
    MyCircle(double x, double y, const std::string& color, bool filled, double radius)
        : TwoDimensionalShape(x, y, color, filled), radius(radius) {
        if (radius <= 0) {
            throw InvalidRadiusException(radius);
        }
    }

    double getArea() const override {
        return 3.14159 * radius * radius;
    }

    double getPerimeter() const override {
        return 2 * 3.14159 * radius;
    }

    std::string toString() const override {
        return "Circle with radius: " + std::to_string(radius);
    }

    double getRadius() const {
        return radius;
    }
};

#endif // MYCIRCLE_H
#pragma once
