#ifndef SHAPECOLLECTION_H
#define SHAPECOLLECTION_H

#include <vector>
#include "MyShape.h"

class ShapeCollection {
private:
    std::vector<MyShape*> shapes;

public:
    void addShape(MyShape* shape);
    void displayShapes() const;
    ~ShapeCollection() {
        for (auto shape : shapes) {
            delete shape;
        }
    }
};

#endif // SHAPECOLLECTION_H
#pragma once
