// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Tech.h"
#include "Stud.h"
#include "Course.h"
#include <Windows.h>
using namespace std;
int main()
{
    
    SetConsoleOutputCP(1251);
    
    //zavd6
    Stud a1, a2, a3;
    Tech a4, a5;

    Stud* b1 = new Stud;
    Stud* b2 = new Stud;
    Stud* b3 = new Stud;
    Tech* b4 = new Tech;
    Tech* b5 = new Tech;

    //zavd7
    Tech mas1[5];
    Stud mas2[5];

    //zvd8
    for (int i = 0; i < 5; i++)
    {
        mas1[i].setName("test" + to_string(i+1));
    }

    for (int i = 0; i < 5; i++)
    {
        cout << mas1[i].getName() << endl;;
    }

    for (int i = 0; i < 5; i++)
    {
        mas2[i].setName("test" + to_string(i + 1));
    }

    for (int i = 0; i < 5; i++)
    {
        cout << mas2[i].getName() << endl;;
    }

    //zavd9
    cout << "--------------------------" << endl;
    Tech t1,t2;
    Stud s1,s2;

    tm birth;
    birth.tm_year = 1987;
    birth.tm_mon = 9;
    birth.tm_mday = 30;

    t1.setName("Bill");
    t1.setSurname("Karpenko");
    t1.setPatr("Tarasovich");
    t1.setEmail("Teach@gmail.com");
    t1.setPhoneNumber("0669873423");
    t1.setBirth(birth);
    t1.setFacul("KI");
    t1.setKafed("FIT");

    s1.setName("Bill");
    s1.setSurname("Karpenko");
    s1.setPatr("Tarasovich");
    s1.setEmail("Teach@gmail.com");
    s1.setPhoneNumber("0669873423");
    s1.setBirth(birth);
    s1.setGroup("KI2c-23-2");
    s1.setYearOfStud(3);


    //for Tech
    t1.displayInfo();
    if (t1.isBirthTD())
    {
        cout << "Birthday!" << endl;
    }
    else cout << "No birthday :(" << endl;

    t2 = t1.getTech();
    birth.tm_year = 2004;
    t2.setBirth(birth);
    if (t1.compareAge(t2)) {
        cout << "t2 starshe" << endl;
    }
    else cout << "t1 starshe" << endl;

    if (t1.compareAge(2003,0,1)) {
        cout << "t1 starshe" << endl;
    }
    else cout << "t1 mladshe" << endl;

    t1.updateInfo(t2);

    //for student
    cout << "Age of student: " << s1.calcAge() << endl;
    s1.displayInfo();
    s2 = s1.copy();
    s1.displayInfo(s2);
    cout << s1.fullName() << endl;
    if (s1.compareYear(s2)) cout << "студенти на одному курсі" << endl;
    else cout << "На різних курсах" << endl;

    //zavd10
    cout <<"--------------------------" << endl;
    Course curse;
    curse.setTeach(t1);
    curse.setName("Math");
    cout << curse.getName() << " " << curse.getTeach().getName() << endl;
    //zavd11
    cout << "--------------------------" << endl;
    b4->setName("Taras");
    cout << b4->getName() << endl;
    
    //zavd12
    vector<Course> Courses;
    Course test;
    test.setName("Math");
    test.setMark(5);
    test.setTeach(t1);

    Courses.push_back(test);
    test.setName("Ukrainian");
    test.setMark(3);
    test.setTeach(t2);
    Courses.push_back(test);

    s1.setCourses(Courses);
    
    for (int i = 0; i < s1.courses.size(); i++)
    {
        cout << s1.courses[i].getName() + " " + s1.courses[i].getTeach().getName() + " " + to_string(s1.courses[i].getMark()) << endl;
    }
    
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
