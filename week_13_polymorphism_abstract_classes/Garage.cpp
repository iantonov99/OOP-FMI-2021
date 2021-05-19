#include "Garage.h"

void Garage::destroy()
{
	for (int i = 0; i < size; i++)
	{
		delete garage[i];
	}
	delete[] garage;
}

Garage::Garage()
{
	size = 0;
	capacity = 5;
	garage = new Car * [capacity];
}

Garage::~Garage()
{
	destroy();
}

void Garage::add(Car* car)
{
	//if (size == capacity)
	//{
	//	resize();
	//}
	garage[size++] = car;
}

void Garage::print() const
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << garage[i]->getRating() << std::endl;
	}
}
