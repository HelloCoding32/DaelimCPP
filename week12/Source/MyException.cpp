#include "./Header/MyException.h"

MyException::MyException(int ec, const char* em, DynamicArray* ea)
    : errorCode(ec), errorMessage(em), errorAddress(ea)
{
    //cout << "¿¹¿Ü °´Ã¼ »ý¼º\n";
}

MyException::~MyException()
{
}

int MyException::getErrorCode() const
{
    return errorCode;
}

const char* MyException::getErrorMessage() const
{
    return errorMessage;
}

DynamicArray* MyException::getErrorAddress() const
{
    return errorAddress;
}