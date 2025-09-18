#pragma once
#include "pokemon.h"

class Pikachu : public Pokemon // »ó¼Ó inheritance is-a
	{
	public:
		Pikachu();
		~Pikachu();
		void attack() const;
	};
