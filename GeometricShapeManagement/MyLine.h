#ifndef MYLINE_H
#define MYLINE_H

#include "OneDimensionalShape.h"

class MyLine : public OneDimensionalShape {
private:
    double length;

public:
    MyLine(double x, double y, const std::string& color, bool filled, double length)
        : OneDimensionalShape(x, y, color, filled), length(length) {}

    double getLength() const override {
        return length;
    }

    std::string toString() const override {
        return "Line with length: " + std::to_string(length);
    }
};

#endif // MYLINE_H
#pragma once
