#pragma once

#include "Tech.h"
#include <string>

using namespace std;
class Course
{
	//zad3
private:
	string name;
	int mark;
	Tech teacher;

public:
	string getName();
	void setName(string Name);

	
	Tech getTeach();
	void setTeach(Tech Techer);
	
	int getMark();
	void setMark(int Mark);

};

