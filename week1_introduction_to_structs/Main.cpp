#include <iostream>

struct Person
{
	char* name;
	char* lastName;
	int age;
	double salary;
	int height;
	//Laptop laptop;
	//Dog dog;
};

struct Laptop
{
	char* model;
	double price;
};

struct Dog {
	char* name;
	int age;
	void bark()
	{
		std::cout << "woof woof" << std::endl;
	};
	void calculate(int himanYear)
	{
		std::cout << this->age + himanYear / 20 << std::endl;
	}
	int weight;
};


int main()
{
	//std::cout << "test";
	//Person person;
	//person.age = 20;
	//person.salary = 1500;
	//std::cout << person.salary;

	Dog dog;
	dog.age = 10;
	dog.calculate(20);

	Dog dog2;
	dog2.age = 15;
	dog.bark();
	dog.calculate(30);

	/*char name[2362];
	std::cin >> name;

	char* test = new char(strlen(name));
	strcpy_s(test, strlen(name), name);


	std::cout << test;*/
	return 0;
}