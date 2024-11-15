#ifndef MYSQUARE_H
#define MYSQUARE_H

#include "MyRectangle.h"

class MySquare : public MyRectangle {
public:
    MySquare(double x, double y, const std::string& color, bool filled, double side)
        : MyRectangle(x, y, color, filled, side, side) {}

    std::string toString() const override {
        return "Square with side: " + std::to_string(getWidth());
    }
};

#endif // MYSQUARE_H
#pragma once
