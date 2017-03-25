#include <iostream>
#include "CoinManager.h"
#include "Map.h"

int minMonedas, maxMonedas;
int numMonedas;

void CoinManager::contMonedas(Map A) {

	minMonedas = A.Filas * A.Columnas * 0.03;
	maxMonedas = A.Filas * A.Columnas * 0.13;
	numMonedas = rand() % (maxMonedas - minMonedas) + minMonedas;
}

void CoinManager::rellenarMapa(Map A) {
	int i = 0;
	while (i < numMonedas) {
		int x = rand() % A.Filas;
		int y = rand() % A.Columnas;

		if (A.map[x][y] == '.') {
			A.map[x][y] = '$';
			i++;
		}
	}

}

void CoinManager::eliminarMoneda(Map A, int x, int y) {
	if (A.map[x][y] == '$') {
		A.map[x][y] = '.';
	}
}


CoinManager::CoinManager(Map A)
{
	minMonedas = A.Filas * A.Columnas * 0.03;
	maxMonedas = A.Filas * A.Columnas * 0.13;
	numMonedas = rand() % (maxMonedas - minMonedas) + minMonedas;
}


CoinManager::~CoinManager()
{
}
