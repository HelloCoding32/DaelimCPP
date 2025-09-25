#include <iostream>
#include <string>
using namespace std;

/********************************************************************
 * ��Ӱ� ���� �Լ��� Ȱ���� ������(Polymorphism) ���� ���α׷�
 ********************************************************************/

class Pokemon {
public:
	Pokemon() { cout << "Default(Pokemon) constructor\n"; }
	virtual ~Pokemon() { cout << "Base class (Pokemon) destructor\n"; } // �޸� ���� ������ ���� �Ҹ���
	virtual void attack() const { cout << "Attack!" << endl; }
};

class Pikachu : public Pokemon { // is-a ����(���)
public:
	Pikachu() { cout << "Default(Pikachu) constructor\n"; }
	~Pikachu() override { cout << "Derived class (Pikachu) destructor\n"; }
	void attack() const override { cout << "Electric Attack" << endl; }
};

int main() {
	// �⺻(���̽�) Ŭ���� ��ü ����
	Pokemon* pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;  // ���� �Ҹ��� ���п� ����

	// �Ļ�(����̺��) Ŭ���� ��ü�� ���̽� �����ͷ� ����Ű�� (��ĳ����)
	pokemon = new Pikachu();
	pokemon->attack();  // ���� �Լ� ���п� Pikachu::attack() ȣ��
	delete pokemon;     // ���� �Ҹ��� ���п� Pikachu �Ҹ��� �� Pokemon �Ҹ��� ������ ȣ��

	return 0;
}