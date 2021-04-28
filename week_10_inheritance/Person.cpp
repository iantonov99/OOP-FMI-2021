#include "Person.h"

void Person::destroy()
{
	delete[] name;
}

void Person::copy(const Person& other)
{
	name = new char[strlen(other.name) + 1];
	strcpy_s(name, strlen(other.name) + 1, other.name);
	egn = other.egn;
}

Person::Person()
{
	name = new char[2];
	strcpy_s(name, 2, "a");
	egn = 274628476;
}

Person::Person(const char* _name, long _egn)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	egn = _egn;
}

Person::Person(const Person& other)
{
	copy(other);
}

Person& Person::operator=(const Person& other)
{
	if (this != &other)
	{
		destroy();
		copy(other);
	}

	return *this;
}

Person::~Person()
{
	destroy();
}

void Person::setName(char* _n)
{
	delete[] name;
	name = new char[strlen(_n) + 1];
	strcpy(name, _n);
}

char* Person::getName() const
{
	return name;
}

void Person::print() const
{
	std::cout << "Name: " << name << " EGN: " << egn << std::endl;
}
