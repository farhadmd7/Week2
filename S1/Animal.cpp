#include "Animal.h"

#include<iostream>
using namespace std;
//member initializer list
//better to use initializer list so that the V s dont get constructed twice
Animal::Animal(int p=0):m_position(p){
	n_animal++;
}

//Animal::Animal(){}
Animal::Animal() {
	m_alive = 1;
	n_animal++;
}
Animal::~Animal() {
	m_alive = 0;
	
	cout << "the Animal is dead so: "<<"m_alive: "<<m_alive<<endl;
}
void Animal::move()
{
	this->m_position++;
}
