#include "Animal.h"
#include <iostream>
#include "Bird.h"

int main() {
	Bird bird1;

	if (bird1.m_bird)
		std::cout << "it's a bird" << std::endl;

	else
		std::cout << "it's not a bird" << std::endl;
	std::cout << "Legsnumber: " << bird1.getLegs() << std::endl;
	std::cout << "m_alive: " << bird1.m_alive;
	//delete& bird1; we cant delete from stack
	//std::cout << "m_alive: " << bird1.m_alive;
}