#pragma once

#include "User.h"
#include <fstream>
class Tech : public User
{
private:
	string kafed;
	string facul;

public:
	string getKafed();
	void setKafed(string Kafed);

	string getFacul();
	void setFacul(string Facul);


	void displayInfo() override;
	bool isBirthTD();

	bool compareAge(Tech exp);
	bool compareAge(int year, int moth, int day);


	void saveToFile(const std::string& filename);
	void loadFromFile(const std::string& filename);

	void updateInfo(Tech exp);

	void exampleHide();
	void exampleOverload(int x);


	Tech();
	Tech(string Name, string Surname, string Patr, string Email, tm Date, string Phone, string Kafed, string Fac);
	Tech(Tech& copy);
	~Tech() override;
};
