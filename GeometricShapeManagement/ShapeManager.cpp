#include "ShapeManager.h"
#include <iostream>

void ShapeManager::run() {
    bool running = true;
    while (running) {
        displayMainMenu();
        int choice;
        std::cin >> choice;

        switch (choice) {
        case 1:
            addShape();
            break;
        case 2:
            viewShapes();
            break;
        case 3:
            running = false;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}

void ShapeManager::displayMainMenu() {
    std::cout << "Main Menu:" << std::endl;
    std::cout << "1. Add Shape" << std::endl;
    std::cout << "2. View Shapes" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "Please choose an option: ";
}

void ShapeManager::addShape() {
    std::cout << "Add shape functionality here." << std::endl;
}

void ShapeManager::viewShapes() {
    shapeCollection.displayShapes();
}
