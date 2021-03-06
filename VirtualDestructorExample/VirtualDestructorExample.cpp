// VirtualDestructorExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
// virtual destructor example   base pointer problem
#include "pch.h"
#include<iostream>

class base {
public:
	base()
	{
		std::cout << "Constructing base \n";
	}
	 virtual ~base()
	{
		std::cout << "Destructing base \n";
	}
};

class derived : public base {
public:
	derived()
	{
		std::cout << "Constructing derived \n";
	}
	~derived()
	{
		std::cout << "Destructing derived \n";
	}
};

int main(void)
{
	derived *d = new derived();
	base *b = d;
	delete b;
	getchar();
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
