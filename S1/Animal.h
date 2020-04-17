#pragma once
class Animal
{
public:
	bool m_bird;
	bool m_alive;
	Animal() {
		this->m_alive = 1;
	}
	~Animal() {
		this->m_alive = 0;
	}
};

