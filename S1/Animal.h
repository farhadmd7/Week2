#pragma once
class Animal
{
private:
	int m_position = 0;
public:
	static int n_animal;
	bool m_bird;
	bool m_alive;
	Animal(int p);
	Animal();
	~Animal();
	/*
	we have the destructor to avoid memory leaks if we created the members and objects on the heap
	the destructor applies to both stack and heap ...
	so if we allocated an object using new when you call delete the destructor will get called
	if its a stack based object when the scope ends the O get deleted and thus the destructor wil get called 
	*/
	virtual void move();
	int getM_position() {
		return m_position;
	}
	void setPosition(const int& positon)
		//& barayae performance balatar
	{
		m_position = positon;
	}
};

/*not allow people to create instansces ..2 different strategy:
//1: hide the constructor in private:
class Animal{
private:
		Animal() {};
};
//2:or we delete the default constructor:
//class Animal{
public:
        Animal() = delete;
};
*/