#pragma once
#include <iostream>
#include "DynamicArray.h"

class MyException {
private:
   const int errorCode;
   const char* errorMessage;
   DynamicArray* errorAddress; // has-a
public:
   MyException(int ec, const char* em, DynamicArray* ea);
   int getErrorCode() const;
   const char* getErrorMessage() const;
   DynamicArray* getErrorAddress() const;

};
