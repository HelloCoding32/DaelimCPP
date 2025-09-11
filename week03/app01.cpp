/********************************************************************
 * �������� 2���� ��Ḧ Ȱ���� �ҿ����� �������� ���캸�� ���α׷� *
 ********************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	Pokemon() { cout << "Default(Pokemon) constructor\n";}
	virtual ~Pokemon() { cout << "Base class (Pokemon) destructor\n"; } //prevent memory leak
	virtual void attack() const { cout << "Attack!" << endl; }
};

class Pikachu : public Pokemon // ��� inheritance is-a
{
public:
	Pikachu() { cout << "Default(Pikachu) constructor\n"; }
	~Pikachu(){ cout << "Derived class (Pikachu) destructor\n"; }
	void attack() const { cout << "Electric Attack" << endl; }
};
int main()
{
	// ���̽� Ŭ������ ���� ������(����) ����
	Pokemon* pokemon;
	// ptr �����ͷ� ���̽� Ŭ������ ��ü ����Ű��
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;
	// ptr �����ͷ� �Ļ� Ŭ������ ��ü ����Ű��
	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}