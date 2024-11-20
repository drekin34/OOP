#include "WorkingStudent.h"
WorkingStudent::WorkingStudent(string Name, string Surname, string Patr, string Email, tm Date, string Phone,
    string Group, int Year, string Position, double Salary, int DateOfHiring, string Department)
    : Stud(Name, Surname, Patr, Email, Date, Phone, Group, Year),
    Employee(Position, Salary, DateOfHiring, Department) {}

void WorkingStudent::displayWorkingStudentInfo() {
   
    displayInfo();

   
    displayEmployeeInfo();
}

// Destructor
WorkingStudent::~WorkingStudent() {}