#pragma once
#include <stdexcept>

class DLXJITException : public std::runtime_error {
public:
    DLXJITException();
    explicit DLXJITException(const char* message);
    explicit DLXJITException(const std::runtime_error& cause);
    virtual ~DLXJITException();
};
