#pragma once

#include <string>
#include <ctime>

using namespace std;

class Tech
{
	//zad1-2
public:
	string name;
	string surname;
	string patr;
private:
	tm dateBirth;
	string email;
	string phoneNumber;
	string kafed;
	string facul;

public:
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

	string getKafed();
	void setKafed(string Kafed);

	string getFacul();
	void setFacul(string Facul);
	

	//methods zad4
	void displayInfo();
	bool isBirthTD();

	bool compareAge(Tech exp);
	bool compareAge(int year, int moth, int day);

	void updateInfo(Tech exp);
	Tech getTech();


	//zad5
	void writeToFile(string filename);
	void readFromFile(string filename);

};



