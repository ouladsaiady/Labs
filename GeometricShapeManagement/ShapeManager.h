#ifndef SHAPEMANAGER_H
#define SHAPEMANAGER_H

#include "ShapeCollection.h"

class ShapeManager {
private:
    ShapeCollection shapeCollection;

public:
    void run();
    void displayMainMenu();
    void addShape();
    void viewShapes();
};

#endif // SHAPEMANAGER_H
#pragma once
