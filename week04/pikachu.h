#pragma once
#include "pokemon.h"

class Pikachu : public Pokemon // ��� inheritance is-a
	{
	public:
		Pikachu();
		~Pikachu();
		void attack() const;
	};
