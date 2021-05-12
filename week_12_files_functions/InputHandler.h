#pragma once
#include <iostream>
#include <fstream>

class InputHandler {
private:
	int* arr;
	bool isOpen;
public:
	static bool open(char* fileName);
	static bool save(char* fileName);
	static bool saveAs(char* fileName);
	static void help();
	static bool close();
};