#pragma once
#include <iostream>
#include "Cars.h"
#include "Garage.h"
#include <exception>
#include <fstream>
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
struct custom_exception : public std::exception {
	const char* what() {
		return "You have entered 2";
	}

};

void test(int a, int b)
{
	if (b == 0)
	{
		throw "error";
	}
	if (b == 2)
	{
		throw custom_exception();
	}
	std::cout << a / b;
}



int main() {

	int a;
	try {
		std::cin >> a;
		if (std::cin.fail() == 1)
		{
			throw "letters entered";
		}
		std::cout << a;
		//test(3, a);
		//test(5, 0);
	}
	catch (custom_exception& e)
	{
		std::cout << e.what();
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	catch (int e)
	{
		std::cout << "You have entered 2. please try again";
	}
	catch (const char* e)
	{
		std::cout << e;
	}
	catch (std::bad_alloc e)
	{
		std::cout << e.what();
	}
	catch (...)
	{
		std::cout << "last hope";
	}


	Car* car = new Sport;
	Car* car2 = new Lux;
	
	Garage garage;

	try {
		garage.add(car);
		garage.add(car2);
		garage.add(car);
		
	}
	catch (const char* e)
	{
		std::cout << e;
	}
	garage.print();
}

