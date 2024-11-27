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
#include <new>      
#include <stdexcept>
#include "MyTemplateClass.h"

using namespace std;

template <typename T>
class MyClass {
private:
	T data;

public:
	// Конструктор для ініціалізації даних
	MyClass(T d) : data(d) {}

	// Метод для виведення даних
	void printData() {
		data.displayInfo();
	}
};


template <typename T>
T getMax( T& a,  T& b) {
	return (a < b) ? b : a;
}

void deleteStudStatic(Stud* arr, int size, int year)
{
	try {
		bool found = false;
		for (int i = 0; i < size; ++i) {
			if (arr[i].getYearOfStud() == year) {
				found = true;
				// Зсуваємо елементи після знайденого
				for (int j = i; j < size - 1; ++j) {
					arr[j] = arr[j + 1];
				}
				--size; // Зменшуємо розмір масиву
				arr[size].setYearOfStud(0);
				break;
			}
		}

		if (!found) {
			throw std::runtime_error("Елемент не знайдено для видалення.");
		}
	}
	catch (const std::exception& e) {
		std::cerr << "Помилка: " << e.what() << std::endl;
	}

}

void deleteStudDynamic(Stud*& arr,int size, int year)
{
	try {
		bool found = false;
		for (int i = 0; i < size; i++)
		{
			
			if (arr[i].getYearOfStud() == year)
			{
				found = true;
				// Зсуваємо елементи після знайденого
				for (int j = i; j < size - 1; ++j) {
					arr[j] = arr[j + 1];
				}
				--size; // Зменшуємо розмір масиву
				arr[size].setYearOfStud(0);
				break;
			}

		}
		if (!found) {
			throw std::runtime_error("Елемент не знайдено для видалення.");
		}
	}
	catch (const std::exception& e) {
		std::cerr << "Помилка: " << e.what() << std::endl;
	}
}

void service(Tech& tech) {
	string filename = "test.txt";

	try {
		// 1. Перевірка запису в файл
		ofstream outFile(filename, ios::out);
		if (!outFile.is_open()) {
			throw runtime_error("Error: Failed to open file for writing.");
		}
		outFile.close();

		// Запис даних об'єкта в файл
		tech.saveToFile(filename);

		// 2. Перевірка читання з файлу
		ifstream inFile(filename, ios::in);
		if (!inFile.is_open()) {
			throw runtime_error("Error: Failed to open file for reading.");
		}
		inFile.close();

		// Створення нового об'єкта та завантаження з файлу
		Tech newTech;
		newTech.loadFromFile(filename);

		// 3. Перевірка коректності даних після зчитування
		if (newTech.getName().empty()) {
			throw logic_error("Error: Name field is empty after loading.");
		}

		if (newTech.getEmail().find('@') == string::npos) {
			throw invalid_argument("Error: Invalid email format after loading.");
		}

		// 4. Перевірка на доступність файлу після операцій
		if (remove(filename.c_str()) != 0) {
			throw runtime_error("Error: Unable to delete the file.");
		}

		// Відображення інформації
		cout << "Successfully saved and loaded data." << endl;
		newTech.displayInfo();

	}
	catch (const runtime_error& e) {
		cerr << "Runtime error occurred: " << e.what() << endl;
	}
	catch (const logic_error& e) {
		cerr << "Logic error occurred: " << e.what() << endl;
	}
	catch (const invalid_argument& e) {
		cerr << "Invalid argument: " << e.what() << endl;
	}
	catch (const exception& e) {
		cerr << "An unexpected error occurred: " << e.what() << endl;
	}
	catch (...) {
		cerr << "An unknown error occurred." << endl;
	}
}

int main()
{
	SetConsoleOutputCP(1251);
	Stud student1("Alice", "Smith", "Marie", "alice@example.com", {}, "123-456", "CS", 3);
	Stud student2("Bob", "Johnson", "Edward", "bob@example.com", {}, "789-012", "CS", 5);
	Tech tec1;
	Stud student3 = student1 + student2;
	cout << student3.getYearOfStud() << endl;
	Stud maxStudent = getMax(student1, student2);

	cout << "Student with the highest year of study: "<< maxStudent.getYearOfStud() << std::endl;

	MyTemplateClass<int, double, float, string, string> obj(5, 3.14, 2.71f, "Hello", "A");
	MyClass<Tech> obj1(tec1);

	obj1.printData();
	// Виклик методів
	obj.printData();
	obj.getData(0);
	obj.setData(0, 6);
	obj.printData();
	obj.clearData();
	obj.printData();


	Stud exmapl, exmapl1;
	exmapl++;
	cout << exmapl.getYearOfStud()<<endl;
	++exmapl;
	cout << exmapl.getYearOfStud() << endl;
	exmapl--;
	cout << exmapl.getYearOfStud() << endl;
	--exmapl;
	cout << exmapl.getYearOfStud() << endl;

	Stud exmapl3 = exmapl + exmapl1;
	cout << exmapl3.getYearOfStud() << endl;
	exmapl3 = exmapl - exmapl1;
	cout << exmapl3.getYearOfStud() << endl;
	exmapl3 = exmapl1;
	cout << exmapl3.getYearOfStud() << endl;
	exmapl3 = exmapl1 * 4;
	cout << exmapl3.getYearOfStud() << endl;
	exmapl3 += 3;
	cout << exmapl3.getYearOfStud() << endl;
	exmapl3 -= 2;
	cout << exmapl3.getYearOfStud() << endl;
	exmapl3 *= 4;
	cout << exmapl3.getYearOfStud() << endl;
	cout << "Group of student1: " << student1[0] << std::endl;
	/*
	SetConsoleOutputCP(1251);

	Example* exp = new Employee();
	delete exp;

	User* exp1 = new Tech();
	delete exp1;




	Stud* stu2 = new Stud();
	Stud* stu3 = new Stud();
	Stud* stu4 = new Stud();
	Stud* stu5 = new Stud();

		// Ситуація 1: Неможливість виділення пам'яті
		try {
			// Симулюємо великий запит пам'яті для провокації std::bad_alloc
			int ch=6;

			Stud* stu1 = new Stud[5];

			if (ch < 0 || ch >= 5) {
				throw std::out_of_range("Index out of bounds");
			}
			stu1[ch].displayInfo();
			delete[] stu1;
		}
		catch (const out_of_range& e) {
			cerr << "Out of range error: " << e.what() <<endl;
		}

		// Ситуація 2: Спроба доступу до звільненої пам'яті
		try {
			delete stu2; // Звільняємо пам'ять
			stu2 = nullptr; // Намагаємось уникнути доступу
			if (stu2 != nullptr) {
				stu2->displayInfo(); // Спроба доступу до звільненої пам'яті
			}
			else {
				throw runtime_error("Accessing freed memory is not allowed.");
			}
		}
		catch (const runtime_error& e) {
			cerr << "Runtime error: " << e.what() <<endl;
		}

		// Ситуація 3: Спроба звільнення вже звільненої пам'яті
		try {
			delete stu2; // Спроба звільнити вже звільнену пам'ять
			throw runtime_error("Double deletion detected.");
		}
		catch (const  runtime_error& e) {
			cerr << "Runtime error: " << e.what() << endl;
		}
	



		
		Stud st6, st7, st8;
		st6.setYearOfStud(2);
		st7.setYearOfStud(3);
		st8.setYearOfStud(4);
		Stud staticArray[3];
		staticArray[0] = st6;
		staticArray[1] = st7;
		staticArray[2] = st8;
		Stud* dynArray = new Stud[3];
		dynArray[0] = st6;
		dynArray[1] = st7;
		dynArray[2] = st8;

	

		for (int i = 0; i < 3; i++)
		{
			cout << staticArray[i].getYearOfStud() << endl;
		}
		deleteStudStatic(staticArray, 3, 3);
		for (int i = 0; i < 3; i++)
		{
			cout << staticArray[i].getYearOfStud() << endl;
		}
		cout << "Dyn" << endl;
		deleteStudDynamic(dynArray, 3,3);
		for (int i = 0; i < 3; i++)
		{
			cout << dynArray[i].getYearOfStud()<< endl;
		}


		Tech tec1;
		tec1.saveToFile("test.txt");
		tec1.loadFromFile("test.txt");

		service(tec1);



		tec1.exampleHide();
		tec1.exampleOverload(3);


		tec1.User::displayInfo();
	    delete stu3;
	    delete stu4;
	    delete stu5;
/*

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
	*/
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
