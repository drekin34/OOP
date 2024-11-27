#pragma once
#include <iostream>
#include <string>
#include <vector>


using namespace std;

template <typename T1, typename T2, typename T3, typename T4, typename T5>
class MyTemplateClass {
private:
    T1 data1;
    T2 data2;
    T3 data3;
    T4 data4;
    T5 data5;

public:
    // Конструктор для ініціалізації даних
    MyTemplateClass(T1 d1, T2 d2, T3 d3, T4 d4, T5 d5)
        : data1(d1), data2(d2), data3(d3), data4(d4), data5(d5) {}

    // Метод для виведення всіх даних
    void printData() {
        std::cout << "Data1: " << data1 << std::endl;
        std::cout << "Data2: " << data2 << std::endl;
        std::cout << "Data3: " << data3 << std::endl;
        std::cout << "Data4: " << data4 << std::endl;
        std::cout << "Data5: " << data5 << std::endl;
    }
    void getData(int index) {
        switch (index) {
        case 0:
            std::cout << "Data1: " << data1 << std::endl;
            break;
        case 1:
            std::cout << "Data2: " << data2 << std::endl;
            break;
        case 2:
            std::cout << "Data3: " << data3 << std::endl;
            break;
        case 3:
            std::cout << "Data4: " << data4 << std::endl;
            break;
        case 4:
            std::cout << "Data5: " << data5 << std::endl;
            break;
        default:
            std::cout << "Invalid index!" << std::endl;
            break;
        }
    }
    template <typename T>
    void setData(int index, const T& value) {
        switch (index) {
        case 0:
            data1 = value;
            break;
        case 1:
            data2 = value;
            break;
        case 2:
            data3 = value;
            break;
        case 3:
            data4 = value;
            break;
        case 4:
            data5 = value;
            break;
        default:
            std::cout << "Invalid index!" << std::endl;
            break;
        }
    }
    void clearData() {
        data1 = T1();
        data2 = T2();
        data3 = T3();
        data4 = T4();
        data5 = T5();
        std::cout << "All data cleared!" << std::endl;
    }
   
};