#pragma once

#include <string>
#include <ctime>
#include <vector>
#include <iostream>

using namespace std;
class User
{
private:
	string name;
	string surname;
	string patr;
	tm dateBirth;
	string email;
	string phoneNumber;

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

	int calcAge();
private:
	void displayInfo();
protected:
	string fullName();

	User();
	User(string Name, string Surname, string Patr, string Email, tm Date, string Phone);
	~User();
};

