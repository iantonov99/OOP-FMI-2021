#include "Student.h"

void Student::destroy()
{
	delete[] specialty;
}

void Student::copy(const Student& other)
{
	facultyNumber = other.facultyNumber;
	grade = other.grade;
	specialNumber = other.specialNumber;
	specialty = new char[strlen(other.specialty) + 1];
	strcpy_s(specialty, strlen(other.specialty) + 1, other.specialty);
}

void Student::print() const
{
	std::cout << "Name: " << getName() << "  fac Number: " << facultyNumber << " Grade: " << grade << std::endl;
}

int Student::getFacultyNumber() const
{
	return facultyNumber;
}

int Student::getGrade() const
{
	return grade;
}

void Student::setFacultyNumber(int _f)
{
	facultyNumber = _f;
}

void Student::setGrade(int _g)
{
	grade = _g;
}

Student::Student() : facultyNumber(70000), grade(5)
{
	specialNumber = -1;
	
	specialty = new char[2];
	strcpy_s(specialty, 2, " ");
	state = SLEEP;
}

Student::Student(const char* _name, long _egn, int facultyNumber, const char* _specialty, int _grade, long _specialNumber, const Book& book) : Person(_name, _egn)
{
	this->facultyNumber = facultyNumber;
	grade = _grade;
	specialNumber = _specialNumber;
	specialty = new char[strlen(_specialty) + 1];
	strcpy_s(specialty, strlen(_specialty) + 1, _specialty);
	books[0] = book;
}

Student::Student(const Student& other) : Person(other)
{
	copy(other);
}

Student& Student::operator=(const Student& other)
{
	if (this != &other)
	{
		Person::operator=(other);
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
	return this->grade == other.grade;
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

Student& Student::operator++()
{
	grade++;
	return *this;
}

const Student Student::operator++(int incrementor)
{
	Student temp(*this);
	this->grade++;

	return temp;
}

Student Student::operator+(const Student& right)
{
	Student st;
	st.facultyNumber = right.facultyNumber;
	return st;
}

Student& Student::operator+=(const Student& right)
{
	*this = *this + right;
	return *this;
}

void Student::invite()
{
	std::cout << "Welcome to room 404\n";
}

std::ostream& operator<<(std::ostream& out, const Student& st)
{
	out << st.getName() << " " << st.facultyNumber << " " << st.grade;

	return out;
}

std::istream& operator>>(std::istream& in, Student& st)
{
	char name[64];
	int facultyNumber;
	int grade;

	in >> name >> st.facultyNumber >> st.grade;

	st.setName(name);

	return in;
}
