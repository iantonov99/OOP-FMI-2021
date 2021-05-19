#include "Cars.h"

void Car::copy(const Car& other)
{
	brand = new char[strlen(other.brand) + 1];
	strcpy_s(brand, strlen(other.brand) + 1, other.brand);
	horsePower = other.horsePower;
	price = other.price;
}

Car::Car()
{
	brand = nullptr;
	price = 300;
	horsePower = 50;
}

Car::Car(const Car& other)
{
	copy(other);
}

Car& Car::operator=(const Car& other)
{
	if (this != &other)
	{
		delete[] brand;
		copy(other);
	}
	return *this;
}

Car::~Car()
{
	delete[] brand;
}

int Car::getHP() const
{
	return horsePower;
}

double Car::getprice() const
{
	return price;
}

void Car::print() const
{
	std::cout << "Normal car!" << std::endl;
}

Sport::Sport()
{
	power = 500;
}

void Sport::print() const
{
	std::cout << "Sport car!" << std::endl;
}

double Sport::getRating() const
{
	return power * getHP();
}

Lux::Lux()
{
	extras = 10;
}

void Lux::print() const
{
	std::cout << "Lux car!" << std::endl;
}

double Lux::getRating() const
{
	return extras * getprice();
}
