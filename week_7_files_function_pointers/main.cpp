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

bool even(int fcNumber)
{
	return fcNumber % 2 == 0;
}

bool hasGrade(int grade)
{
	return grade > 4.5;
}

int main()
{
	Book book;
	//Student st("If Antonov", 71875, "IS", 6, 245624, book);
	

	//std::ofstream out;
	//out.open("test.txt");
	//if (out)
	//{
	//	out << st;
	//}
	//out.close();
	Student a;

	std::ifstream in;
	char* buffer = nullptr;
	int size;
	in.open("test.txt");
	if (in)
	{
		in >> a;
		//in.seekg(0, std::ios::end);
		//size = in.tellg();
		//in.seekg(0, std::ios::beg);
		//buffer = new char[size + 1];
		//in.read(buffer, size);
		//buffer[size] = '\0';
		//std::cout << buffer;
	}
	in.close();


	//delete[] buffer;
	//a.print();


	int (*fcnPtr)(int);

	fcnPtr = &test2;


	int number = test(1, fcnPtr);
	std::cout << number;
	

	return 0;
}