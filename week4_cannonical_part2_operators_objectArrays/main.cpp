#include <iostream>
#include "Student.h"
#include "Book.h"

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

	//st2 = st;
	//st2.print();

	Student students[10];
	students[0] = st;
	for (size_t i = 0; i < 10; i++)
	{
		students[i].print();
	}

	if (st2 != st)
	{
		std::cout << "True";
	}

	std::cout << st(2);



	return 0;
}