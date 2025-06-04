#include "DLXJITException.h"

using namespace std;

DLXJITException::DLXJITException()
    : std::runtime_error("Unknown exception")
{
}

DLXJITException::DLXJITException(const char* message)
    : std::runtime_error(message)
{
}

DLXJITException::DLXJITException(const std::runtime_error& cause)
    : std::runtime_error(cause.what())
{
}

DLXJITException::~DLXJITException()
{
}
