#include "pikachu.h"
#include "squirtle.h"
int main()
{
	Pokemon* pokemons[4];

	
	pokemons[0] = new Squirtle();
	pokemons[1] = new Pikachu();
	pokemons[2] = new Pokemon();
	pokemons[3] = new Pikachu();

	for (int i = 0; i < 4; i++) {
		pokemons[i]->attack();
	}

	for (int i = 0; i < 4; i++) {
		delete pokemons[i];
	}



	//// 베이스 클래스에 대한 포인터(소켓) 생성
	//Pokemon pokemon;
	//// ptr 포인터로 베이스 클래스의 객체 가리키기
	//pokemon.attack();
	//
	//Pikachu pikachu;
	//pokemon.attack();


	//// 베이스 클래스에 대한 포인터(소켓) 생성
	//Pokemon* pokemon;
	//// ptr 포인터로 베이스 클래스의 객체 가리키기
	//pokemon = new Pokemon();
	//pokemon->attack();
	//delete pokemon;
	//// ptr 포인터로 파생 클래스의 객체 가리키기
	//pokemon = new Pikachu();
	//pokemon->attack();
	//delete pokemon;
	return 0;
}