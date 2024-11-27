#include "Example.h"
#include <iostream>


Example::~Example()
{
	std::cout << "Example destructor\n";
}

void Example::displayinfo()
{
	cout << "info" << endl;
}