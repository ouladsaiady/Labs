#ifndef INVALIDRADIUSEXCEPTION_H
#define INVALIDRADIUSEXCEPTION_H

#include <stdexcept>
#include <string>

class InvalidRadiusException : public std::invalid_argument {
public:
    InvalidRadiusException(double radius)
        : std::invalid_argument("Invalid radius: " + std::to_string(radius)) {}
};

#endif // INVALIDRADIUSEXCEPTION_H
#pragma once
