#include "pikachu.h"

int main()
{
	// 베이스 클래스에 대한 포인터(소켓) 생성
	Pokemon* pokemon;
	// ptr 포인터로 베이스 클래스의 객체 가리키기
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;
	// ptr 포인터로 파생 클래스의 객체 가리키기
	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}