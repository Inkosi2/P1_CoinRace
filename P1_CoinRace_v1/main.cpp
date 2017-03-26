#include <iostream>
#include "CoinManager.h"
#include "Input.h"
#include "Map.h"
#include "Matrix.h"
#include "Player.h"

void main() {
	//Declarar la dificultad
	int aux;
	dificultad dif;
	std::cout << "Introduce la dificultad:";
	std::cin >> aux;
	dif = static_cast <dificultad> (aux);

	//Instanciar el Mapa
	Map map(dif);
	
	//Instanciar el Player
	Player jugador;
	
	//Instanciar el CoinManager
	CoinManager monedas(map);

	//Se declara una variable que determina el m�ximo de monedas que el jugador debe conseguir para finalizar el juego
	int minAux = 30 * static_cast <int> (dif);
	int maxAux = 60 * static_cast <int> (dif);
	int maxMonedas = (rand() % (maxAux - minAux)) + minAux;

	//Variable que recoge la tecla pusada
	Input::Key tecla;

}