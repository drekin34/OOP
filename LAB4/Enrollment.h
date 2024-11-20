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
    Enrollment(); // ����������� ��� ���������
    Enrollment(Stud student, Course courseName, int grade); // ����������� � �����������
    ~Enrollment();

    // ������
    Stud getStudent();
    Course getCourseName();
    int getGrade();

    // ������
    void setStudent(Stud student);
    void setCourseName(Course courseName);
    void setGrade(int grade);
};

