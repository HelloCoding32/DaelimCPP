#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;
public:
    Complex() : real(0), imaginary() {

    };
    Complex(int real, int imaginary) : real(real), imaginary(imaginary) {

    };
    void setReal(int real) { //생성자가 아니여서 초기화 리스트를 쓸 수 없다.
        this->real = real;
    }
    int getReal() const {
        return real;
    }
    void setimaginary(int imaginary) { //생성자가 아니여서 초기화 리스트를 쓸 수 없다.
        this->imaginary = imaginary;
    }
    int getimaginary() const {
        return imaginary;
    }
    Complex operator+(const Complex& right)  { //operator => 연산자 오버로딩
        int r = this->real + right.real;
        int imag = this->imaginary + right.imaginary;
        return Complex(r, imag);
        // return Complex(r, thie-> iamginary) //가능하나 수학적으로 문제가 됨.
    }
    Complex operator++(int) { // int => Tag, 후위연산
        Complex previous (this->real, this->imaginary);
        this->real = this->real + 1;
        return previous;
    }
    Complex operator++() { // 전위연산
        this->real++;
        return Complex(this->real, this->imaginary);
    }
};

int main() {
    Complex c1;
    Complex c2(10,7);
    c1.setReal(5);
    c1.setimaginary(3);
    c2.setReal(10);
    c2.setimaginary(7);
    cout << c1.getReal() << "+" << c1.getimaginary() << "i" << endl;
    cout << c2.getReal() << "+" << c2.getimaginary() << "i" << endl;

    Complex c3 = c1 + c2; //  Complex c3 = c1.operator+(c2);
    cout << c3.getReal() << "+" << c3.getimaginary() << "i" << endl;

    // Complex c4 = c3++; // real 값만 1증가
    Complex c4 = ++c3; // real 값만 1증가
    cout << c3.getReal() << "+" << c3.getimaginary() << "i" << endl;
    cout << c4.getReal() << "+" << c4.getimaginary() << "i" << endl;

    // Complex c4 = c3++; // real 값만 1증가
    // cout << c3.getReal() << "+" << c3.getimaginary() << "i" << endl;
    // cout << c4.getReal() << "+" << c4.getimaginary() << "i" << endl;
    return 0;
}