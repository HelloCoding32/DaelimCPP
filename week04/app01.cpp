#include "pikachu.h"

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