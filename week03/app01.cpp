#include <iostream>
#include <string>
using namespace std;

/********************************************************************
 * 상속과 가상 함수를 활용한 다형성(Polymorphism) 데모 프로그램
 ********************************************************************/

class Pokemon {
public:
	Pokemon() { cout << "Default(Pokemon) constructor\n"; }
	virtual ~Pokemon() { cout << "Base class (Pokemon) destructor\n"; } // 메모리 누수 방지용 가상 소멸자
	virtual void attack() const { cout << "Attack!" << endl; }
};

class Pikachu : public Pokemon { // is-a 관계(상속)
public:
	Pikachu() { cout << "Default(Pikachu) constructor\n"; }
	~Pikachu() override { cout << "Derived class (Pikachu) destructor\n"; }
	void attack() const override { cout << "Electric Attack" << endl; }
};

int main() {
	// 기본(베이스) 클래스 객체 생성
	Pokemon* pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;  // 가상 소멸자 덕분에 안전

	// 파생(디라이브드) 클래스 객체를 베이스 포인터로 가리키기 (업캐스팅)
	pokemon = new Pikachu();
	pokemon->attack();  // 가상 함수 덕분에 Pikachu::attack() 호출
	delete pokemon;     // 가상 소멸자 덕분에 Pikachu 소멸자 → Pokemon 소멸자 순서로 호출

	return 0;
}