#include "User.h"


string User::getName() {
	return name;
}

void User::setName(string Name)
{
	name = Name;
}

string User::getSurname() {
	return surname;
}

void User::setSurname(string Surname)
{
	surname = Surname;
}

string User::getPatr() {
	return patr;
}

void User::setPatr(string Patr)
{
	patr = Patr;
}

tm User::getBirth() {
	return dateBirth;
}

void User::setBirth(tm Birth)
{
	dateBirth = Birth;
}

string User::getEmail() {
	return email;
}

void User::setEmail(string Email)
{
	email = Email;
}

string User::getPhoneNumber() {
	return phoneNumber;
}

void User::setPhoneNumber(string Phone)
{
	phoneNumber = Phone;
}

int User::calcAge()
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

void User::displayInfo() {

	cout << "Info" << endl;
	cout << getName() << endl;
	cout << getSurname() << endl;
	cout << getPatr() << endl;
	cout << getBirth().tm_year << " " << getBirth().tm_mon << " " << getBirth().tm_mday << endl;
	cout << getEmail() << endl;
	cout << getPhoneNumber() << endl;

}

string User::fullName() {

	return name + " " + surname + " " + patr;
}

void User::exampleHide()
{
	cout << "Example" << endl;
}

void User::exempleOverload()
{
	cout << "Example" << endl;
}

User::User()
{
	name = "default";
	surname = "default";
	patr = "default";
	dateBirth = { 0 };
	email = "defalut";
	phoneNumber = "defalut";
}

User::User(string Name, string Surname, string Patr, string Email, tm Date, string Phone)
{
	name = Name;
	surname = Surname;
	patr = Patr;
	dateBirth = Date;
	email = Email;
	phoneNumber = Phone;
}

User::~User()
{
	cout << "destructor user" << endl;
}