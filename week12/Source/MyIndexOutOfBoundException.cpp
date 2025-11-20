#include "./Header/MyIndexOutOfBoundException.h"

MyIndexOutOfBoundException::MyIndexOutOfBoundException(int ec, DynamicArray* ea)
    :MyException(ec, "인덱스 범위를 벗어났습니다", ea)  // Invocation
{
}