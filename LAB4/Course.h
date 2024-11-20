#pragma once
#include <string>
#include "Tech.h"
using namespace std;
class Course
{
private:
	Tech teacher;
	string name;
	int semestr;
	string materials;
	string rozklad;
	int credits;
	string deskription;
	string type;

public:
    Tech getTeacher();
    string getName();
    int getSemestr();
    string getMaterials();
    string getRozklad();
    int getCredits();
    string getDeskription();
    string getType();

    void setTeacher(Tech teacher);
    void setName(string name);
    void setSemestr(int semestr);
    void setMaterials(string materials);
    void setRozklad(string rozklad);
    void setCredits(int credits);
    void setDeskription(string deskription);
    void setType(string type);


    Course(); 
    Course(Tech teacher, string name, int semestr, string materials, string rozklad, int credits, string deskription, string type);

    ~Course();
};

