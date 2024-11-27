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

Stud::Stud(const Stud& exp) :User(exp)
{
	this->group = exp.group;
	this->yearOfstud = exp.yearOfstud;
}

Stud::~Stud() {
	cout << "Destructor stud" << endl;
}

Stud& Stud::operator++() {
	++yearOfstud;
	return *this;
}

// Постфіксна версія "++": збільшує рік навчання на 1, але повертає попередній стан
Stud Stud::operator++(int) {
	Stud temp = *this;
	++(*this);
	return temp;
}

// Префіксна версія "--": зменшує рік навчання на 1
Stud& Stud::operator--() {
	if (yearOfstud > 1) {
		--yearOfstud;
	}
	return *this;
}

// Постфіксна версія "--": зменшує рік навчання на 1, але повертає попередній стан
Stud Stud::operator--(int) {
	Stud temp = *this;
	--(*this);
	return temp;
}

Stud Stud::operator+( Stud& other)  {
	Stud result = *this;
	result.yearOfstud += other.yearOfstud;
	return result;
}


Stud Stud::operator-( Stud& other)  {
	Stud result = *this;
	result.yearOfstud -= other.yearOfstud;
	if (result.yearOfstud < 0) {
		result.yearOfstud = 0; // Рік навчання не може бути від'ємним
	}
	return result;
}

Stud& Stud::operator=(const Stud& other) {
	if (this != &other) {
		this->group = other.group;
		this->yearOfstud = other.yearOfstud;
		// Копіювання інших даних
	}
	return *this;
}

// Оператор "*": множення року навчання на константу
Stud Stud::operator*(int multiplier)  {
	Stud result = *this;
	result.yearOfstud *= multiplier;
	return result;
}

// Оператор "+=": додавання років до року навчання
Stud& Stud::operator+=(int years) {
	yearOfstud += years;
	return *this;
}

// Оператор "-=": віднімання років від року навчання
Stud& Stud::operator-=(int years) {
	yearOfstud -= years;
	if (yearOfstud < 0) {
		yearOfstud = 0; // Забезпечити, щоб рік навчання не був від'ємним
	}
	return *this;
}

// Оператор "*=": множення року навчання на константу
Stud& Stud::operator*=(int multiplier) {
	yearOfstud *= multiplier;
	return *this;
}

// Оператор "[]": доступ до даних за індексом
string Stud::operator[](int index)  {
	switch (index) {
	case 0: return this->group; // Повертає групу
	case 1: return std::to_string(this->yearOfstud); // Повертає рік навчання як рядок
	default: throw std::out_of_range("Invalid index"); // Викидає виключення для невірного індексу
	}
}

bool Stud::operator<(const Stud& other) const {
	return this->yearOfstud < other.yearOfstud;
}
