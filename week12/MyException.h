#pragma once
#include <iostream>
#include "DynamicArray.h"

class MyException {
private:
   const int errorCode;
   const char* errorMessage;
   DynamicArray* errorAddress;
public:
   MyException(int ec, const char* em, DynamicArray* ea);
};
