#include <iostream>
using namespace std;

// 템플릿 함수 정의
template <typename T>
void display(T value) {
    cout << "Generic display : " << value << endl;
}

template <> // Template specialization
void display<char>(char value) {
    cout << "Specialized display for char : " << value << endl;
}

template <>
void display<const char*>(const char* value) {
    cout << "Specialized display for c style string : " << value << endl;
}


int main()
{
    // Generic
    display(50);
    display(2.41);
    // Specialized
    display('2');
    display("2");
    display('Hello');

    return 0;
}