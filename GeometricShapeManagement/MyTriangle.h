#ifndef MYTRIANGLE_H
#define MYTRIANGLE_H

#include "TwoDimensionalShape.h"
#include "IllegalTriangleException.h"

class MyTriangle : public TwoDimensionalShape {
private:
    double sideA, sideB, sideC;

public:
    MyTriangle(double x, double y, const std::string& color, bool filled, double sideA, double sideB, double sideC)
        : TwoDimensionalShape(x, y, color, filled), sideA(sideA), sideB(sideB), sideC(sideC) {
        if (sideA <= 0 || sideB <= 0 || sideC <= 0 || sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA) {
            throw IllegalTriangleException("Invalid triangle sides");
        }
    }

    double getArea() const override {
        double s = (sideA + sideB + sideC) / 2;
        return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
    }

    double getPerimeter() const override {
        return sideA + sideB + sideC;
    }

    std::string toString() const override {
        return "Triangle with sides: " + std::to_string(sideA) + ", " + std::to_string(sideB) + ", " + std::to_string(sideC);
    }
};

#endif // MYTRIANGLE_H
#pragma once
