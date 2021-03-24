#pragma once
#include "Student.h" 

class Classroom
{
private:
	Student* students;
	int capacity;
	int size;
	void copy(const Classroom& other);
	void resize();
public:
	Classroom();
	Classroom(int capacity);
	Classroom(const Classroom& other);
	Classroom& operator =(const Classroom& other);
	~Classroom();
	void addStudent(const Student& newStudent);
	void print() const;
};