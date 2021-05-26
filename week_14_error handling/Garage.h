#pragma once
#include "Cars.h"

class Garage {
private:
	Car** garage;
	int size;
	int capacity;
	void destroy();
	void copy(const Garage& other);
public:
	Garage();
	Garage(const Garage& other);
	Garage& operator=(const Garage& other);
	~Garage();
	void add(Car* car);
	void print() const;
};