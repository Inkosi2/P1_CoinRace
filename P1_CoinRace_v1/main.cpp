#include <iostream>

enum class dificulty {EASY, MEDIUM, HARD};

void main() {

	dificulty dif;

	std::cout << "Choose between EASY, MEDIUM AND HARD" << std::endl;
	std::cin >> dif;

}