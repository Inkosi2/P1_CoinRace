#pragma once
class Map
{
public:
	enum class dificultad { FACIL = 1, NORMAL = 2, DIFICIL = 3 };
	
	void matriz(int numFilas, int numColumnas, char **map);
	Map(dificultad A);
	~Map();

	int Filas, Columnas;
	char **map;
};

