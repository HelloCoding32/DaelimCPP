#include "pokemon.h"

Pokemon::Pokemon()
{
	cout << "Default(Pokemon) constructor\n";
}

Pokemon::~Pokemon()
{
	cout << "Base class (Pokemon) destructor\n";
}

void Pokemon::attack() const
{
	cout << "Attack!" << endl;
}
