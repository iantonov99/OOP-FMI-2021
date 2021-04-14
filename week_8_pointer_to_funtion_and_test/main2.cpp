#include <iostream>
#include "MyString.h"

int main() {
	MyString s1("viki");
	MyString s2("if");
	MyString res(s1 + s2);
	res.print();
	return 0;
}