#include <iostream>
#include "Student.h"
#include "Book.h"
#include "Classroom.h"

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

	classroom.print();

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

	return 0;
}