#include "Stud.h"


int Stud::count = 0;

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

	int age = (now.tm_year + 1900) - (getBirth().tm_year);
	if ((now.tm_mon < getBirth().tm_mon) ||
		(now.tm_mon == getBirth().tm_mon && now.tm_mday < getBirth().tm_mday)) {
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

int Stud::getCount()
{
	return count;
}

bool Stud::compareYear(Stud exp) {

	return yearOfstud == exp.getYearOfStud();
}


Stud::Stud():User()
{
	group = "default";
	yearOfstud = 1;
}

Stud::Stud(string Name, string Surname, string Patr, string Email, tm Date, string Phone, string Group, int Year) :User(Name, Surname, Patr, Email, Date, Phone)
{
	group = Group;
	yearOfstud = Year;
}

Stud::Stud(Stud& exp)
{
	setName(exp.getName());
	setSurname(exp.getSurname());
	setPatr(exp.getPatr());
	setBirth(exp.getBirth());
	setEmail(exp.getEmail());
	setPhoneNumber(exp.getPhoneNumber());
	this->group = exp.group;
	this->yearOfstud = exp.yearOfstud;
}

Stud::~Stud() {
}