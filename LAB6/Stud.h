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
	Stud(const Stud& copy);
	static int getCount();
	~Stud();



	Stud& operator++();    
	Stud operator++(int);  
	Stud& operator--();    
	Stud operator--(int);

	Stud operator+( Stud& other);
	Stud operator-( Stud& other);

	Stud& operator=(const Stud& other) ; 
	Stud operator*(int multiplier); 
	Stud& operator+=(int years); 
	Stud& operator-=(int years); 
	Stud& operator*=(int multiplier); 
	string operator[](int index); 

	bool operator<(const Stud& other) const;
};

