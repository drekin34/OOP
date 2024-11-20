#include "Tech.h"
#include <iostream>
#include <fstream>


string Tech::getName() {
	return name;
}

void Tech::setName(string Name)
{
	name = Name;
}

string Tech::getSurname() {
	return surname;
}

void Tech::setSurname(string Surname)
{
	surname = Surname;
}

string Tech::getPatr() {
	return patr;
}

void Tech::setPatr(string Patr)
{
	patr = Patr;
}

tm Tech::getBirth() {
	return dateBirth;
}

void Tech::setBirth(tm Birth)
{
	dateBirth = Birth;
}

string Tech::getEmail() {
	return email;
}

void Tech::setEmail(string Email)
{
	email = Email;
}

string Tech::getPhoneNumber() {
	return phoneNumber;
}

void Tech::setPhoneNumber(string Phone)
{
	phoneNumber = Phone;
}

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
	cout << "Info" <<endl;
	cout << getName() << endl;
	cout << getSurname() << endl;
	cout<< getPatr() <<endl;
	cout<< getBirth().tm_year<<" "<<getBirth().tm_mon<<" "<<getBirth().tm_mday << endl;
	cout<< getEmail() <<endl;
	cout<< getPhoneNumber() <<endl;
	cout<< getKafed() <<endl;
	cout<< getFacul() <<endl;
}

bool Tech::isBirthTD()
{
	time_t t = time(0);
	tm now {};
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
	
	this->name = exp.name;
	this->surname = exp.surname;
	this->patr = exp.patr;
	this->dateBirth = exp.dateBirth;
	this->email = exp.email;
	this->phoneNumber = exp.phoneNumber;
	this->kafed = exp.kafed;
	this->facul = exp.facul;
}

Tech Tech::getTech() {
	Tech copy;
	copy.name = this->name;
	copy.surname = this->surname;
	copy.patr = this->patr;
	copy.dateBirth = this->dateBirth;
	copy.email = this->email;
	copy.phoneNumber = this->phoneNumber;
	copy.kafed = this->kafed;
	copy.facul = this->facul;

	return copy; 

}

void Tech::writeToFile(string filename)
{
	ofstream outFile(filename, ios::app);
	if (outFile.is_open()) {
		outFile << name << endl;
		outFile << surname << endl;
		outFile << patr << endl;
		outFile << dateBirth.tm_year + 1900 << " "
			<< dateBirth.tm_mon + 1 << " "
			<< dateBirth.tm_mday << endl;
		outFile << email << endl;
		outFile << phoneNumber << endl;
		outFile << kafed << endl;
		outFile << facul << endl;
		outFile.close();
	}
	else {
		cerr << "Error: Cannot open file " << filename << endl;
	}
}

void Tech::readFromFile(string filename) {

	ifstream inFile(filename);
	if (inFile.is_open()) {
		getline(inFile, name);
		getline(inFile, surname);
		getline(inFile, patr);

		int year, month, day;
		inFile >> year >> month >> day;
		dateBirth.tm_year = year - 1900;
		dateBirth.tm_mon = month - 1;
		dateBirth.tm_mday = day;
		inFile.ignore(); // To skip the newline after the date

		getline(inFile, email);
		getline(inFile, phoneNumber);
		getline(inFile, kafed);
		getline(inFile, facul);
		inFile.close();
		
	}
	else {
		cerr << "Error: Cannot open file " << filename << endl;
		
	}


}


Tech::Tech() {
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
	kafed = "";
	facul = "";

}

Tech::Tech(string Name, string Surname, string Patr, tm DateBirth, string Email, string Phone, string Kafed, string Facul) {
	name = Name;
	surname = Surname;
	patr = Patr;
	dateBirth = DateBirth;
	email = Email;
	phoneNumber = Phone;
	kafed = Kafed;
	facul = Facul;
}
Tech::Tech(Tech& exp)
	: name(exp.name), surname(exp.surname), patr(exp.patr), dateBirth(exp.dateBirth),
	email(exp.email), phoneNumber(exp.phoneNumber), kafed(exp.kafed), facul(exp.facul) {

}

Tech::~Tech()
{
}

