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



	//// ���̽� Ŭ������ ���� ������(����) ����
	//Pokemon pokemon;
	//// ptr �����ͷ� ���̽� Ŭ������ ��ü ����Ű��
	//pokemon.attack();
	//
	//Pikachu pikachu;
	//pokemon.attack();


	//// ���̽� Ŭ������ ���� ������(����) ����
	//Pokemon* pokemon;
	//// ptr �����ͷ� ���̽� Ŭ������ ��ü ����Ű��
	//pokemon = new Pokemon();
	//pokemon->attack();
	//delete pokemon;
	//// ptr �����ͷ� �Ļ� Ŭ������ ��ü ����Ű��
	//pokemon = new Pikachu();
	//pokemon->attack();
	//delete pokemon;
	return 0;
}