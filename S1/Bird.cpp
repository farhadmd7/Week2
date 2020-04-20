#include "Bird.h"
/*
int Bird::getLegs() {
	return Bird::m_nlegs;
}
*/

void Bird::move() {
	this->setPosition(getM_position() + 7);
}


