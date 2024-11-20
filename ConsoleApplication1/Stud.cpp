#include "Stud.h"
#include <iostream>


string Stud::getName() {
	return name;
}

void Stud::setName(string Name)
{
	name = Name;
}

string Stud::getSurname() {
	return surname;
}

void Stud::setSurname(string Surname)
{
	surname = Surname;
}

string Stud::getPatr() {
	return patr;
}

void Stud::setPatr(string Patr)
{
	patr = Patr;
}

tm Stud::getBirth() {
	return dateBirth;
}

void Stud::setBirth(tm Birth)
{
	dateBirth = Birth;
}

string Stud::getEmail() {
	return email;
}

void Stud::setEmail(string Email)
{
	email = Email;
}

string Stud::getPhoneNumber() {
	return phoneNumber;
}

void Stud::setPhoneNumber(string Phone)
{
	phoneNumber = Phone;
}

string Stud::getGroup() {
	return group;
}

void Stud::setGroup(string Group)
{
	group = Group;
}

int Stud::getYearOfStud() {
	return yearOfstud;
}

void Stud::setYearOfStud(int Year) {
	yearOfstud = Year;
}


int Stud::calcAge()
{
	time_t t = time(0);
	tm now{};
	localtime_s(&now, &t);

	int age = (now.tm_year + 1900) - (dateBirth.tm_year);
	if ((now.tm_mon < dateBirth.tm_mon) ||
		(now.tm_mon == dateBirth.tm_mon && now.tm_mday < dateBirth.tm_mday)) {
		age--;
	}

	return age;
}

void Stud::displayInfo() {

	cout << "Info" << endl;
	cout << getName() << endl;
	cout << getSurname() << endl;
	cout << getPatr() << endl;
	cout << getBirth().tm_year << " " << getBirth().tm_mon << " " << getBirth().tm_mday << endl;
	cout << getEmail() << endl;
	cout << getPhoneNumber() << endl;
	cout << getGroup() << endl;
	cout << getYearOfStud() << endl;

}

void Stud::displayInfo(Stud exp){

	exp.displayInfo();
}

string Stud::fullName() {

	return name + " " + surname + " "+patr;
}

bool Stud::compareYear(Stud exp) {

	return yearOfstud == exp.getYearOfStud();
}

Stud Stud::copy() {
	return *this;
}

//zavd12
void Stud::setCourses(vector<Course> Courses) {

	for (int i = 0; i < Courses.size(); i++)
	{
		for (int j = 0; j < Courses.size()-1; j++)
		{
			if (Courses[j].getMark() > Courses[j + 1].getMark())
			{
				swap(Courses[j], Courses[j + 1]);
			}
		}
	}

	courses = Courses;
}



/*Stud::Stud() {
	tm t;
	t.tm_year = 1900;
	t.tm_mon = 0;
	t.tm_mday = 1;
	name = "";
	surname = "";
	patr = "";
	dateBirth = t;
	email = "";
	phoneNumber = "";
	group = "";
	yearOfstud = NULL;
	courses;
}

Stud::Stud(string Name, string Surname, string Patr, tm DateBirth, string Email, string Phone, string Group, int Year, Course Courses ) {
	name = Name;
	surname = Surname;
	patr = Patr;
	dateBirth = DateBirth;
	email = Email;
	phoneNumber = Phone;
	group = Group;
	yearOfstud = Year;
	
}

Stud::Stud(Stud& exp)
	: name(exp.name), surname(exp.surname), patr(exp.patr), dateBirth(exp.dateBirth),
	email(exp.email), phoneNumber(exp.phoneNumber), group(exp.group), yearOfstud(exp.yearOfstud) {

}
Stud::~Stud() {

}
*/