#include "Garage.h"

void Garage::destroy()
{
	for (int i = 0; i < size; i++)
	{
		delete garage[i];
	}
	delete[] garage;
}

void Garage::copy(const Garage& other)
{
	size = other.size;
	capacity = other.capacity;
	garage = new Car*[capacity];
	for (int i = 0; i < size; i++)
	{
		garage[i] = other.garage[i]->clone();
	}
}

Garage::Garage()
{
	size = 0;
	capacity = 2;
	garage = new Car * [capacity];
}

Garage::Garage(const Garage& other)
{
	copy(other);
}

Garage& Garage::operator=(const Garage& other)
{
	if (this != &other)
	{
		destroy();
		copy(other);
	}
	return *this;
}

Garage::~Garage()
{
	destroy();
}

void Garage::add(Car* car)
{
	if (size == capacity)
	{
		throw "reached limit\n";
	}
	garage[size++] = car;
}

void Garage::print() const
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << garage[i]->getRating() << std::endl;
	}
}
