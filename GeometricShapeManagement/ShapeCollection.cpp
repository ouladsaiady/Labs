#include "ShapeCollection.h"
#include <iostream>

void ShapeCollection::addShape(MyShape* shape) {
    shapes.push_back(shape);
}

void ShapeCollection::displayShapes() const {
    for (const auto& shape : shapes) {
        std::cout << shape->toString() << std::endl;
    }
}
