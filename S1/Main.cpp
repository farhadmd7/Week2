#include "Animal.h"
#include <iostream>
#include "Bird.h"
#include "Mammal.h"
int Animal::n_animal;
//to see the destruction i put everything in another function
void function() {
	Bird bird1;

	if (bird1.m_bird)
		std::cout << "it's a bird" << std::endl;

	else
		std::cout << "it's not a bird" << std::endl;
	std::cout << "Legsnumber: " << bird1.getLegs() << std::endl;
	std::cout << "m_alive: " << bird1.m_alive << std::endl;

	//delete& bird1; we cant delete from stack
	//std::cout << "m_alive: " << bird1.m_alive;
	//Animal animal1(5);
	//animal1.move();
	Bird bird2;
	bird2.move();
	//std::cout <<"position of animal1: "<< animal1.getM_position() << std::endl;
	std::cout << "position of bird2: " << bird2.getM_position() << std::endl;
	std::cout <<"n_animal: " <<Animal::n_animal<<std::endl;
}
int main() {
	function();
	
}		