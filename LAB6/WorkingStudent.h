#pragma once

#include <string>
#include <ctime>
#include "Stud.h"
#include "Employee.h"
class WorkingStudent: public Stud, public Employee
{
public:
    WorkingStudent(string Name, string Surname, string Patr, string Email, tm Date, string Phone,
        string Group, int Year, string Position, double Salary, int DateOfHiring, string Department);

    void displayWorkingStudentInfo();

  
    ~WorkingStudent();
};

