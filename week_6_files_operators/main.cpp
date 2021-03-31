#include <iostream>
#include <fstream>
#include "Student.h"
#include "Book.h"
#include "Classroom.h"
#include "Templ.h"

template<typename T, typename U>
T sum(T a, U b)
{
	return a + b;
}



int main()
{
	//char name[8];
	//std::cin >> name;
	//std::cout << "test";
	Book book;
	Student st("If Antonov", 71875, "IS", 6, 245624, book);
	Student a;
	//st.print();
	//a.print();
	//std::cout << std::endl;
	Student st2;
	Student st3 = st;

	Classroom classroom;
	classroom.addStudent(st);
	classroom.addStudent(st2);
	classroom.addStudent(st3);
	classroom.addStudent(st3);

	//classroom.print();

	//st2 = st;
	//st2.print();

	//Student students[10];
	//students[0] = st;
	//for (size_t i = 0; i < 10; i++)
	//{
	//	students[i].print();
	//}

	//if (st2 != st)
	//{
	//	std::cout << "True";
	//}

	//std::cout << st(2);

	//std::cout << sum<double, double>(3.3, 4.4);

	//Student<int> student;
	//Student<double> student;
	Classroom room;

	//std::ifstream in;
	//in.open("test.txt");
	//char buffer[256];
	//if (in.is_open())
	//{
	//	while (in.getline(buffer, 255))
	//	{
	//		std::cout << buffer << '\n';
	//		//Student st;
	//		//st.setName(buffer);
	//		
	//		//room.addStudent(st);
	//	}
	//}
	//else
	//{
	//	std::cout << "file didn't open!";
	//}
	//in.close();

	//std::ifstream in;
	//char* buffer = nullptr;
	//int size;
	//in.open("test.txt");
	//if (in)
	//{
	//	in.seekg(0, std::ios::end);
	//	size = in.tellg();
	//	in.seekg(0, std::ios::beg);
	//	buffer = new char[size + 1];
	//	//in >> buffer;
	//	in.read(buffer, size);
	//	buffer[size] = '\0';
	//	std::cout << buffer;
	//}
	//in.close();


	//delete[] buffer;

	//std::ofstream out;
	//out.open("test.txt");
	//if (out.is_open())
	//{
	//	out << st;
	//}
	//out.close();

	//std::cout << st;
	//
	//st++;
	//++st;

	//int number = 5;
	//if (++st == st2)
	//{
		
	//}

	st2 += st;
	//st5.print();

	Templ<int> entity(5);
	entity.test();

	return 0;
}