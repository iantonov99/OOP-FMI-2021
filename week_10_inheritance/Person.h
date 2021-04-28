#pragma once
#include <iostream>

class Person {
private:
	char* name;
	long egn;
	void destroy();
	void copy(const Person& other);
public:
	Person();
	Person(const char* _name, long egn);
	Person(const Person& other);
	Person& operator =(const Person& other);
	~Person();	
	void setName(char* _n);
	char* getName() const;
	void print() const;
};