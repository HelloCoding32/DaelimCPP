#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
class Animal { // abstract class
public:
    // virtual void makeSound() { cout << "동물이 소리를 냅니다...\n"; }
    virtual void makeSound() = 0; // pure virtual function

};
class Dog : public Animal {
public:
    void makeSound() { cout << "멍멍!\n"; }
};
class Cat : public Animal {
public:
    void makeSound() { cout << "냐옹~\n"; }
};
int main() {
    // Animal animal;
    // animal.makeSound();

    // Animal animal; //error

    return 0;
}