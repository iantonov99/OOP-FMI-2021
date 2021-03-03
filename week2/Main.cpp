#include <iostream>

struct Laptop
{
	char model[12];
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

struct Person
{
	char name[12];
	char lastName[12];
	int age;
	double salary;
	int height;
	//Laptop laptop;
	//Dog dog;
	//Person* child;
	void initialize(const char* _name, const char* _lastName, int _age, double _salary, int _height)
	{
		strcpy_s(name, strlen(_name) + 1, _name);
		strcpy_s(lastName, strlen(_lastName) + 1, _lastName);
		age = _age;
		salary = _salary;
		height = _height;
	}
	void initialize()
	{
		int _age;
		std::cout << "Enter age: ";
		std::cin >> _age;
		age = _age;
	}
};



class Student
{
private:
	char name[20];
	int facultyNumber;
	char specialty[30];
	int grade;
	long specialNumber;
public:
	void initialize()
	{
		int facNum;
		do
		{
			std::cout << "Enter faculty number: ";
			std::cin >> facNum;
		}
		while (facNum > 99999 || facNum < 10000);

		facultyNumber = facNum;
		specialNumber = facNum + 3462456 / 465354;
	}
	void test() const
	{
		std::cout << facultyNumber;
	}

	int getFacultyNumber() const
	{
		return facultyNumber;
	}

	long getSpecialNumber() const
	{
		return specialNumber;
	}

	void setFacultyNumber(int _faculctyNumber)
	{
		if (_faculctyNumber > 99999)
		{
			std::cout << "Pich ne mi vuvejdai takava stojnost";
			return;
			//throw new std::exception;
		}
		facultyNumber = _faculctyNumber;
	}
};






int main()
{
	//Person person;
	//int age;
	//std::cin >> age;

	//person.initialize("If", "Antonov", age, 1500.50, 178);
	////person.initialize();
	//std::cout << person.age << "  " << person.height << "  " << person.name;

	//Person p2;
	//p2.initialize("Ivan", "Ivanov", 20, 2000.30, 195);

	//Dog dog;
	//dog.age = 10;
	//dog.calculate(20);

	//Dog dog2;
	//dog2.age = 15;
	//dog.bark();
	//dog.calculate(30);

	//char name[256];
	//std::cin >> name;

	//char* test = new char(strlen(name) + 1);
	//strcpy_s(test, strlen(name) + 1, name);


	//std::cout << test;
	//delete test;


	Student st;
	st.initialize();
	//st.test();

	int a = st.getFacultyNumber();

	std::cout << st.getFacultyNumber();

	st.setFacultyNumber(5462573567);


	return 0;
}