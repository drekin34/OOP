#include "Enrollment.h"

Enrollment::Enrollment()
    : student(), courseName(), grade(0) {}


Enrollment::Enrollment(Stud student, Course courseName, int grade)
    : student(student), courseName(courseName), grade(grade) {}

Enrollment::~Enrollment()
{
}

Stud Enrollment::getStudent() {
    return student;
}

Course Enrollment::getCourseName() {
    return courseName;
}

int Enrollment::getGrade()  {
    return grade;
}


void Enrollment::setStudent(Stud student) {
    this->student = student;
}

void Enrollment::setCourseName(Course courseName) {
    this->courseName = courseName;
}

void Enrollment::setGrade(int grade) {
    this->grade = grade;
}