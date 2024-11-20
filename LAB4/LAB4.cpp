// LAB4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "User.h"
#include "Tech.h"
#include "Security.h"
#include "Course.h"
#include "WorkingStudent.h"
#include "Employee.h"
#include "Enrollment.h"
#include <Windows.h>

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);

	tm birth;
	birth.tm_year = 1987;
	birth.tm_mon = 9;
	birth.tm_mday = 30;
	Tech t1;
	Tech t2("test", "test", "test", "test", birth, "test", "test", "test");
	t1.displayInfo();
	//cout << a.fullName();

	Stud s1;
	Stud s2("test", "test", "test", "test", birth, "test", "test", 3);


	//zakrute
	Security test;
	test.displaySecurityInfo();


	tm birthDate = {};
	

	Employee test1;

	WorkingStudent ws( "John", "Doe", "Smith", "john.doe@example.com", birthDate, "123456789", "Group A", 3, "Developer", 3500.50, 0, "IT");

	ws.displayWorkingStudentInfo();


	Course c1(t1,"test",1,"test","test",1,"test","test");
	Enrollment e1(s1,c1,5);
	cout << "У студента " << e1.getStudent().getName() << " за курс " << e1.getCourseName().getName() << " оцінка " << e1.getGrade() << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
