#pragma once

#include <string>
#include "Tech.h"
using namespace std;
class Course
{
private:
	string name;
	Tech techer;
	int mark;

public:
	string getName();
	void setName(string Name);

	Tech getTeach();
	void setTeach(Tech Techer);

	int getMark();
	void setMark(int Mark);

	
};

