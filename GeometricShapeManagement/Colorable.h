#ifndef COLORABLE_H
#define COLORABLE_H

#include <string>

class Colorable {
public:
    virtual std::string getColor() const = 0;
    virtual void setColor(const std::string& color) = 0;
};

#endif // COLORABLE_H
#pragma once
