#pragma once
#include "Animal.h"
class Bird : public Animal
{
public:
	bool m_bird = 1;
	/*
	either outside class definition
	int getLegs();
	*/
	// inside class definition
	int getLegs(){
		return m_nlegs;
	}
private:
	int m_nlegs = 2;

};


