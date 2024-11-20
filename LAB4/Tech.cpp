
#include "Tech.h"

string Tech::getKafed() {
	return kafed;
}

void Tech::setKafed(string Kafed)
{
	kafed = Kafed;
}

string Tech::getFacul() {
	return facul;
}

void Tech::setFacul(string Facul)
{
	facul = Facul;
}

void Tech::displayInfo()
{
	
	cout << "Info" << endl;
	cout << User::getName() << endl;
	cout << getSurname() << endl;
	cout << getPatr() << endl;
	cout << getBirth().tm_year << " " << getBirth().tm_mon << " " << getBirth().tm_mday << endl;
	cout << getEmail() << endl;
	cout << getPhoneNumber() << endl;
	cout << getKafed() << endl;
	cout << getFacul() << endl;
}

bool Tech::isBirthTD()
{
	time_t t = time(0);
	tm now{};
	localtime_s(&now, &t);
	if (getBirth().tm_mday == now.tm_mday && getBirth().tm_mon == now.tm_mon)
	{
		return true;
	}
	else return false;
}

bool Tech::compareAge(Tech exp)
{

	if (exp.getBirth().tm_year < getBirth().tm_year)
	{
		return true;
	}
	else if (exp.getBirth().tm_mon < getBirth().tm_mon)
	{
		return true;
	}
	else if (exp.getBirth().tm_mday < getBirth().tm_mday)
	{
		return true;
	}
	else return false;

}

bool Tech::compareAge(int year, int moth, int day)
{

	if (year < getBirth().tm_year)
	{
		return true;
	}
	else if (moth < getBirth().tm_mon)
	{
		return true;
	}
	else if (day < getBirth().tm_mday)
	{
		return true;
	}
	else return false;

}

void Tech::updateInfo(Tech exp) {

	setName(exp.getName());
	setSurname(exp.getSurname());
	setPatr(exp.getPatr());
	setBirth(exp.getBirth());
	setEmail(exp.getEmail());
	setPhoneNumber(exp.getPhoneNumber());
	this->kafed = exp.kafed;
	this->facul = exp.facul;
}




Tech::Tech():User()
{
	facul = "default";
	kafed = "default";
	cout << "Створено екзмепляр викладача" << endl;
}

Tech::Tech(string Name, string Surname, string Patr, string Email, tm Date, string Phone, string Kafed, string Fac) :User(Name, Surname, Patr, Email, Date, Phone)
{
	kafed = Kafed;
	facul = Fac;
	cout << "Створено екзмепляр викладача" << endl;
}

Tech::Tech(Tech& exp)
{
	setName(exp.getName());
	setSurname(exp.getSurname());
	setPatr(exp.getPatr());
	setBirth(exp.getBirth());
	setEmail(exp.getEmail());
	setPhoneNumber(exp.getPhoneNumber());
	this->kafed = exp.kafed;
	this->facul = exp.facul;
	cout << "Створено екзмепляр викладача" << endl;
}

Tech::~Tech() {
	cout << "Знищено екзмепляр викладача" << endl;
}