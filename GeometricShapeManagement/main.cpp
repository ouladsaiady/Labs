#include <iostream>
#include "ShapeManager.h"
#include "MyCircle.h"
#include "MyLine.h"
#include "MyRectangle.h"
#include "MySquare.h"
#include "MyTriangle.h"
#include "InvalidRadiusException.h"
#include "IllegalTriangleException.h"

int main() {
    // Create a shape manager to handle the system
    ShapeManager shapeManager;

    try {
        // Create a few shapes to add
        MyCircle circle(0, 0, "Red", true, 5.0);
        MyLine line(0, 0, "Blue", true, 10.0);
        MyRectangle rectangle(0, 0, "Green", true, 4.0, 6.0);
        MySquare square(0, 0, "Yellow", true, 4.0);

        MyTriangle triangle(0, 0, "Purple", true, 3.0, 4.0, 5.0);

        // Add shapes to shape collection
        shapeManager.addShape(&circle);
        shapeManager.addShape(&line);
        shapeManager.addShape(&rectangle);
        shapeManager.addShape(&square);
        shapeManager.addShape(&triangle);

        // Run the shape manager to interact with the system
        shapeManager.run();

    }
    catch (const InvalidRadiusException& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    catch (const IllegalTriangleException& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
