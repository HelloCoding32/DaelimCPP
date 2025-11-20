#pragma once
#include "./Header/MyException.h"

class MyMemoryException : public MyException {
public:
    MyMemoryException(int ec, DynamicArray* ea);
};