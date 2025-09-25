#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Animal {
public:
    void makeSound(){ cout << "동물이 소리를 냅니다.~\n"; }
};
class Dog : public Animal {
public:
    void makeSound(){ cout << "멍멍~\n"; }
};
class Cat : public Animal {
public:
    void makeSound(){cout << "야용~\n"; }
};

int main()
{
    Animal a;
    Dog d;
    Cat c;

    cout << typeid(d).name() << endl;
    d.makeSound();
    return 0;
}