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

    // member function (method)
    // Complex operator+(const Complex& right)  { //operator => 연산자 오버로딩
    //     int r = this->real + right.real;
    //     int imag = this->imaginary + right.imaginary;
    //     return Complex(r, imag);
    //     // return Complex(r, this-> iamginary) //가능하나 수학적으로 문제가 됨.
    // }
    Complex operator++(int) { // int => Tag, 후위연산
        Complex previous (this->real, this->imaginary);
        this->real = this->real + 1;
        return previous;
    }
    Complex operator++() { // 전위연산
        this->real++;
        return Complex(this->real, this->imaginary);
    }
    friend ostream& operator<<(ostream& o, const Complex& right) { //complex& 뒤에 &의 의미는 얕은 복사임, complex만 쓰면 깊은 복사로 쓰임.
        o << right.real << "+" << right.imaginary << "i" << endl;
        return o;
    }
};


// nonmember function

istream& operator>>(istream& i, Complex& right) {
    cout << "input real value : ";
    int real, img;
    i >> real;
    right.setReal(real);
    cout << "input imaginary value : ";
    i >> img;
    right.setimaginary(img);
    return i;

}
Complex operator+(const Complex& left, const Complex& right)  { //operator => 연산자 오버로딩
    int r = left.getReal() + right.getReal();
    int imag = left.getimaginary() + right.getimaginary();
    return Complex(r, imag);
}


int main() {
    Complex c1;
    // Complex c2(10,7);
    Complex c2;
    cin >> c2;

    c1.setReal(5);
    c1.setimaginary(3);

    Complex c3 = operator+(c1, c2);
    // Complex c3 = c1 + c2; //  Complex c3 = c1.operator+(c2);

    Complex c4 = c3++; // real 값만 1증가


    cout << c4 << endl;
    return 0;
}