#include "Student.h"

void Student::print() const
{
	std::cout << "Name: " << name << "  fac Number: " << facultyNumber << std::endl;
}

int Student::getFacultyNumber() const
{
	return facultyNumber;
}

Student::Student()
{
	facultyNumber = 70000;
	grade = 6;
	specialNumber = -1;
	name = new char[2];
	strcpy_s(name, 2, "a");
	specialty = nullptr;
}

Student::Student(const char* _name, int _faculty, const char* _specialty, int _grade, long _specialNumber)
{
	facultyNumber = _faculty;
	grade = _grade;
	specialNumber = _specialNumber;

	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
	specialty = new char[strlen(_specialty) + 1];
	strcpy_s(specialty, strlen(_specialty) + 1, _specialty);
}

Student::~Student()
{
	std::cout << "Deleting info";
	delete[] name;
	delete[] specialty;
}

