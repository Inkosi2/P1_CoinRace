#pragma once
class CoinManager
{

public:
	void rellenarMapa(Map A);
	void eliminarMoneda(Map A, int x, int y);
	
	CoinManager(Map A);
	~CoinManager();
};

