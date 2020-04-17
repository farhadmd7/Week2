#include "Animal.h"
#include <iostream>
#include "Bird.h"

int Bird::getLegs() {
	return m_nlegs;
}
int main() {
	Bird bird1;
	
	if (bird1.m_bird)
		std::cout << "it's a bird"<<std::endl;

	else
		std::cout << "it's not a bird" << std::endl;
	std::cout << "Legsnumber: "<<bird1.getLegs() << std::endl;
	std::cout <<"m_alive: "<< bird1.m_alive;
	delete &bird1;
	//std::cout << "m_alive: " << bird1.m_alive;
}