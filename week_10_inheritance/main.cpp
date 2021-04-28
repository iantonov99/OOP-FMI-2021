#include <iostream>
#include <fstream>
#include "Student.h"
#include "Book.h"
#include "Classroom.h"
#include "Templ.h"

int test(int number, int (*fncPtr)(int))
{
	return fncPtr(number);
}

int test2(int number)
{
	return 3 + number;
}

bool even(const Student& student)
{
	return student.getFacultyNumber() % 2 == 0;
}

bool hasGrade(const Student& student)
{
	return student.getGrade() > 4;
}



int main()
{
	Book book;
	Student st("If Antonov", 825478431, 71875, "IS", 6, 245624, book);
	
	Student newSt;

	Person person("Petar", 1345143);
	person.print();

	newSt = st;
	newSt.print();







	//std::ofstream out;
	//out.open("test.txt");
	//if (out)
	//{
	//	out << st;
	//}
	//out.close();
	//Student a;

	//std::ifstream in;
	//char* buffer = nullptr;
	//int size;
	//in.open("test.txt");
	//if (in)
	//{
	//	in >> a;
	//	//in.seekg(0, std::ios::end);
	//	//size = in.tellg();
	//	//in.seekg(0, std::ios::beg);
	//	//buffer = new char[size + 1];
	//	//in.read(buffer, size);
	//	//buffer[size] = '\0';
	//	//std::cout << buffer;
	//}
	//in.close();


	//delete[] buffer;
	//a.print();


	//int (*fcnPtr)(int);

	//fcnPtr = &test2;


	//int number = test(1, fcnPtr);
	//std::cout << number;
	
	//Classroom room;
	//room.addStudent(st);
	//room.addStudent(a);
	//room.sort(false);

	//room.invite([](const Student& st)->bool { return st.getFacultyNumber() > 70000; });

	return 0;
}