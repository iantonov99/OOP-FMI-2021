#include <iostream>
#include <fstream>
#include "Student.h"
#include "Book.h"
#include "Classroom.h"
#include "Templ.h"
#include "InputHandler.h"

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
	//person.print();

	//newSt = st;
	//newSt.print();

	st.invite();
	newSt.invite();







	//std::ofstream out;
	//out.open("test.txt");
	//if (out)
	//{
	//	out << st;
	//}
	//out.close();
	//Student a;

	char command[32];
	char fileName[32];
	std::cin >> command;

	if (strcmp(command, "open") == 0)
	{
		std::cin >> fileName;

		if (InputHandler::open(fileName))
		{
			std::cout << "Successfully opened " << fileName << std::endl;
		}
		else
		{
			std::cout << "Failed to load file info, please try again" << std::endl;
		}
	}
	else if (strcmp(command, "save") == 0)
	{
		if (InputHandler::save(fileName))
		{

		}
	}
	else if (strcmp(command, "save as ") == 0)
	{
		std::cin >> fileName;
		InputHandler::saveAs(fileName);
	}
	else if (strcmp(command, "close") == 0)
	{
		if (InputHandler::close())
		{
			std::cout << "File closed successfully!";
		}
	}

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


	return 0;
}