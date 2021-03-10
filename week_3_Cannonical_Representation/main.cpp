#include <iostream>
#include "Student.h"

int main()
{
	//char name[8];
	//std::cin >> name;
	//std::cout << "test";
	Student st("If Antonov", 71875, "IS", 6, 245624);
	Student a;
	st.print();
	a.print();

	return 0;
}