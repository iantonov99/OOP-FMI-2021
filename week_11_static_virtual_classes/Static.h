#pragma once
#include <iostream>

class Test {
private:
	int id;
	static int id_counter;
public:
	static int tes;
	Test();
	static void f(int n);
	void test();
};

int Test::id_counter = 0;
int Test::tes = 24562;

inline Test::Test()
{
	id = id_counter;
	id_counter++;
}

void Test::f(int n)
{
	//std::cout << id;
	std::cout << n << std::endl;
}

inline void Test::test()
{
	std::cout << "Id: " << id << std::endl;
	std::cout << "Id counter: " << id_counter << std::endl;
	//f(5);
}
