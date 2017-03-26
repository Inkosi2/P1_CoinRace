#pragma once
#include "Input.h"

class Player
{
public:
	int x, y, puntos;

	void mover(int x, int y, Input::Key tecla, Map A);
		
	Player();
	~Player();
};

