#ifndef ILLEGALTRIANGLEEXCEPTION_H
#define ILLEGALTRIANGLEEXCEPTION_H

#include <stdexcept>
#include <string>

class IllegalTriangleException : public std::invalid_argument {
public:
    IllegalTriangleException(const std::string& message)
        : std::invalid_argument(message) {}
};

#endif // ILLEGALTRIANGLEEXCEPTION_H
#pragma once
