#pragma once
#include "Course.h"
#include "Stud.h"
#include <string>

using namespace std;
class Enrollment
{
private:
	Stud student;
	Course courseName;
	int grade;
public:
    Enrollment(); // Конструктор без параметрів
    Enrollment(Stud student, Course courseName, int grade); // Конструктор з параметрами
    ~Enrollment();

    // Гетери
    Stud getStudent();
    Course getCourseName();
    int getGrade();

    // Сетери
    void setStudent(Stud student);
    void setCourseName(Course courseName);
    void setGrade(int grade);
};

