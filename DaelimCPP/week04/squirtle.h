#pragma once
#pragma once
#include "pokemon.h"

class Squirtle : public Pokemon // ��� inheritance is-a
{
public:
	Squirtle();
	~Squirtle();
	void attack() const;
};

