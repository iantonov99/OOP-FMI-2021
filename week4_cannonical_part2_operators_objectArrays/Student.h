#pragma once
#include <iostream>
#include "Book.h"

class Student
{
private:
	char* name;
	int facultyNumber;
	char* specialty;
	int grade;
	long specialNumber;
	Book books[3];
	void destroy();
	void copy(const Student& other);
public:
	void print() const;
	int getFacultyNumber() const;
	Student();
	Student(const char*, int _faculty, const char* _specialty, int _grade, long _specialNumber, const Book&);
	Student(const Student& other);
	Student& operator =(const Student& other);
	~Student();

	bool operator ==(const Student& other);
	bool operator !=(const Student& other);
	int operator()(int number);
};