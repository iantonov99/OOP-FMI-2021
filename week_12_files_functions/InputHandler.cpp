#include "InputHandler.h"

bool InputHandler::open(char* fileName)
{
	std::ifstream in;
	char* buffer = nullptr;
	int size;
	in.open(fileName);
	if (in)
	{
		in.getline(buffer, size);
		in.seekg(0, std::ios::end);
		size = in.tellg();
		in.seekg(0, std::ios::beg);
		buffer = new char[size + 1];
		in.read(buffer, size);
		buffer[size] = '\0';
		for (size_t i = 0; buffer != '\0'; i++)
		{
			arr[i] = (int)buffer[i];
		}
	}
	else
	{
		return false;
	}
	in.close();
	isOpen = true;
	return true;
}

bool InputHandler::save(char* fileName)
{
	if (!isOpen)
	{
		return false;
	}
	std::ofstream out;
	out.open(fileName);
	if (out)
	{
		for (size_t i = 0; i < size; i++)
		{
			out << arr[i];
		}
	}
	else
	{
		return false;
	}
	out.close();
	return true;
}

bool InputHandler::saveAs(char* fileName)
{
	return save(fileName);
}

void InputHandler::help()
{
	std::cout << "add - това ви добавя динозавър в клетката";
}

bool InputHandler::close()
{
	if (isOpen)
	{
		delete fileName;
		isOpen = false;
	}
	else
	{
		return false;
	}
	return true;
}
