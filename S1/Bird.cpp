#include "Bird.h"
/*
int Bird::getLegs() {
	return Bird::m_nlegs;
}
*/
/*
in bayad kar kone ama kare kasifie
Animal.h:
int& getM_position() {
    return m_position;
}
void Bird::move() {
<<<<<<< HEAD
    this->getM_position() = getM_position() + 7;
 
}
*/
void Bird::move() {
	
	this->setPosition(getM_position() + 7);
}
/*
//these should work
const int& getLegs() const
{
    return m_nlegs;
=======
	this->setPosition(getM_position() + 7);
>>>>>>> FETCH_HEAD
}

int& getLegs()
{
    return m_nlegs;
}
int* getLegs()
{
    return &m_nlegs;
}
//error
int& getLegs() const
{
    return m_nlegs;
}
int* getLegs() const
{
    return &m_nlegs;
}
*/