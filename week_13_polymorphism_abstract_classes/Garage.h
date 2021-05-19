#pragma once
#include "Cars.h"

class Garage {
private:
	Car** garage;
	int size;
	int capacity;
	void destroy();
public:
	Garage();
	~Garage();
	void add(Car* car);
	void print() const;
};