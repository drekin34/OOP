#pragma once
#include "User.h"
class Stud : public User
{
private:
	string group;
	int yearOfstud;
	static int count;
public:
	string getGroup();
	void setGroup(string Group);

	int getYearOfStud();
	void setYearOfStud(int Year);

	int calcAge() override;
	void displayInfo() override;
	bool compareYear(Stud exp);
	
	Stud();
	Stud(string Name, string Surname, string Patr, string Email, tm Date, string Phone, string Group, int Year);
	Stud(Stud& copy);
	static int getCount();
	~Stud();
};

