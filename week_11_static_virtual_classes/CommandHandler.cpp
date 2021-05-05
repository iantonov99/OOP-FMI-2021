#include "pch.h"
#include "CommandHandler.h"

void CommandHandler::destroy()
{
	std::cout << "destroy" << std::endl;
}

int CommandHandler::calculate(int n1, int n2)
{
	return n1 + n2;
}
