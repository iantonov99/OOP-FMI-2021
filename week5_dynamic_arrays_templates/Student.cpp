#include "Student.h"

void Student::destroy()
{
	delete[] name;
	delete[] specialty;
}

void Student::copy(const Student& other)
{
	facultyNumber = other.facultyNumber;
	grade = other.grade;
	specialNumber = other.specialNumber;
	name = new char[strlen(other.name) + 1];
	strcpy_s(name, strlen(other.name) + 1, other.name);
	specialty = new char[strlen(other.specialty) + 1];
	strcpy_s(specialty, strlen(other.specialty) + 1, other.specialty);
}

void Student::print() const
{
	std::cout << "Name: " << name << "  fac Number: " << facultyNumber << std::endl;
}

int Student::getFacultyNumber() const
{
	return facultyNumber;
}

Student::Student() : facultyNumber(70000), grade(6)
{
	specialNumber = -1;
	name = new char[2];
	strcpy_s(name, 2, "a");
	specialty = new char[2];
	strcpy_s(specialty, 2, " ");
	state = SLEEP;
}

Student::Student(const char* _name, int facultyNumber, const char* _specialty, int _grade, long _specialNumber, const Book& book)
{
	this->facultyNumber = facultyNumber;
	grade = _grade;
	specialNumber = _specialNumber;

	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
	specialty = new char[strlen(_specialty) + 1];
	strcpy_s(specialty, strlen(_specialty) + 1, _specialty);
	books[0] = book;
}

Student::Student(const Student& other)
{
	copy(other);
}

Student& Student::operator=(const Student& other)
{
	if (this != &other)
	{
		destroy();
		copy(other);
	}

	return *this;
}

Student::~Student()
{
	destroy();
}

bool Student::operator==(const Student& other)
{
	return this->facultyNumber == other.facultyNumber;
}

bool Student::operator!=(const Student& other)
{
	return !(*this == other);
}

int Student::operator()(int number)
{
	if (state == EAT)
	{

	}
	else
	{
		state = EAT;
	}
	std::cout << state;
	return specialNumber;
}

