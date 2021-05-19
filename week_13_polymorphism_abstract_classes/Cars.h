#pragma once
#include <iostream>

class Car {
private:
	char* brand;
	double price;
	int horsePower;
	void copy(const Car& other);
public:
	Car();
	Car(const Car& other);
	Car& operator =(const Car& other);
	virtual ~Car();
	int getHP() const;
	double getprice() const;
	virtual void print() const;
	virtual double getRating() const = 0;
};

class Sport : public Car {
private:
	double power;

public:
	Sport();
	void print() const override;
	double getRating() const override;
};

class Lux : public Car {
private:
	int extras;
public:
	Lux();
	void print() const override;
	double getRating() const override;
};