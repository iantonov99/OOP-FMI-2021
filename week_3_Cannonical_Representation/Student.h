#pragma once
#include <iostream>

class Student
{
private:
	char* name;
	int facultyNumber;
	char* specialty;
	int grade;
	long specialNumber;
public:
	void print() const;
	int getFacultyNumber() const;
	Student();
	Student(const char* _name, int _faculty, const char* _specialty, int _grade, long _specialNumber);
	~Student();
};