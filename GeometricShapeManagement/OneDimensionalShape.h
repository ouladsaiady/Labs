#ifndef ONEDIMENSIONALSHAPE_H
#define ONEDIMENSIONALSHAPE_H

#include "MyShape.h"

class OneDimensionalShape : public MyShape {
public:
    OneDimensionalShape(double x, double y, const std::string& color, bool filled)
        : MyShape(x, y, color, filled) {}

    virtual double getLength() const = 0;

    virtual ~OneDimensionalShape() = default;
};

#endif // ONEDIMENSIONALSHAPE_H
#pragma once
