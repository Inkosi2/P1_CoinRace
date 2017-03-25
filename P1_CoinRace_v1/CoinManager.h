#pragma once
class CoinManager
{

public:
	void contMonedas(Map A);
	void rellenarMapa(Map A);
	void eliminarMoneda(Map A, int x, int y);
	
	CoinManager(Map A);
	~CoinManager();
};

