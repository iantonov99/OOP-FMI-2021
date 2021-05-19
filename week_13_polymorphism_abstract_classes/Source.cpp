#pragma once
#include <iostream>
#include "Cars.h"
#include "Garage.h"
//
//class Car {
//private:
//	char* brand;
//	double price;
//	int horsePower;
//	void copy(const Car& other);
//public:
//	Car();
//	Car(const Car& other);
//	Car& operator =(const Car& other);
//	~Car();
//	virtual void print() const;
//};
//
//
//void Car::copy(const Car& other)
//{
//	brand = new char[strlen(other.brand) + 1];
//	strcpy_s(brand, strlen(other.brand) + 1, other.brand);
//	horsePower = other.horsePower;
//	price = other.price;
//}
//
//Car::Car()
//{
//	brand = nullptr;
//	price = 0;
//	horsePower = 50;
//}
//
//Car::Car(const Car& other)
//{
//	copy(other);
//}
//
//Car& Car::operator=(const Car& other)
//{
//	if (this != &other)
//	{
//		delete[] brand;
//		copy(other);
//	}
//	return *this;
//}
//
//Car::~Car()
//{
//	delete[] brand;
//}
//
//void Car::print() const
//{
//	std::cout << "Normal car!" << std::endl;
//}
//
//class Sport : public Car {
//private:
//	double power;
//public:
//	void print() const override;
//};
//
//void Sport::print() const
//{
//	std::cout << "Sport car!" << std::endl;
//}

int main() {
	Car* car = new Sport;
	Car* car2 = new Lux;
	
	Garage garage;

	garage.add(car);
	garage.add(car2);
	garage.print();
}

