// ReentrantApp.cpp : Defines the entry point for the console application.
//

#include "ScannerParserCL.h"

#include <iostream>

int main()
{
	ScannerParserCL pt;

	pt.RunParser();

	std::cout << "Type any key"; char c = std::cin.get();

	system("pause");
	return 0;
}