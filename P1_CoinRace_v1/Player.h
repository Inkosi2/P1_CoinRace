#pragma once
#include "Map.h"
#include "Input.h"

class Player
{
public:
	int x, y, puntos;
	bool gameESC;
	
	void mover(int x, int y, Input::Key tecla, Map A);
		
	Player();
	~Player();
};

