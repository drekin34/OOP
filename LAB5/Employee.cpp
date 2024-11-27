#include "Employee.h"

// Constructor
Employee::Employee() {
    position = "default";
    salary = 0.0;
    department = "default";
    dateOfHiring = 0;  
}

Employee::Employee(string Position, double Salary, int DateOfHiring, string Department)
    : position(Position), salary(Salary), dateOfHiring(DateOfHiring), department(Department) {}


// Getter and Setter methods
string Employee::getPosition() {
    return position;
}

void Employee::setPosition(string Position) {
    position = Position;
}

double Employee::getSalary() {
    return salary;
}

void Employee::setSalary(double Salary) {
    salary = Salary;
}

int Employee::getDateOfHiring() {
    return dateOfHiring;
}

void Employee::setDateOfHiring(int Date) {
    dateOfHiring = Date;
}

string Employee::getDepartment() {
    return department;
}

void Employee::setDepartment(string Department) {
    department = Department;
}

// Method to display employee details
void Employee::displayinfo() {
    cout << "Позиція: " << position << endl;
    cout << "Зарплата: " << salary << endl;
    cout << "Дата найму: " << dateOfHiring << endl;
    cout << "Департамент: " << department << endl;
}

// Destructor
Employee::~Employee() {
    cout << "Destructor employy" << endl;
}
