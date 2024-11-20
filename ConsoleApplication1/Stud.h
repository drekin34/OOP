#pragma once

#include <string>
#include <ctime>
#include <vector>
#include "Course.h"

using namespace std;
class Stud
{
	//zad1-2
public:
	string name;
	string surname;
	string patr;
	vector<Course> courses;
private:
	tm dateBirth;
	string email;
	string phoneNumber;
	string group;
	int yearOfstud;
	

public:
	void setCourses(vector<Course> Courses);

	string getName();
	void setName(string Name);

	string getSurname();
	void setSurname(string Surname);

	string getPatr();
	void setPatr(string Patr);

	tm getBirth();
	void setBirth(tm Birth);

	string getEmail();
	void setEmail(string Email);

	string getPhoneNumber();
	void setPhoneNumber(string Phone);

	string getGroup();
	void setGroup(string Group);

	int getYearOfStud();
	void setYearOfStud(int Year);
	//methods zad4
	int calcAge();
	void displayInfo();
	void displayInfo(Stud exp);
	string fullName();
	bool compareYear(Stud exp);
	Stud copy();

};

