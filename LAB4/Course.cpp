#include "Course.h"

Tech Course::getTeacher()  {
    return teacher;
}

string Course::getName() {
    return name;
}

int Course::getSemestr()  {
    return semestr;
}

string Course::getMaterials() {
    return materials;
}

string Course::getRozklad() {
    return rozklad;
}

int Course::getCredits() {
    return credits;
}

string Course::getDeskription() {
    return deskription;
}

string Course::getType()  {
    return type;
}

// Сетери
void Course::setTeacher( Tech teacher) {
    this->teacher = teacher;
}

void Course::setName(const string name) {
    this->name = name;
}

void Course::setSemestr(int semestr) {
    this->semestr = semestr;
}

void Course::setMaterials(string materials) {
    this->materials = materials;
}

void Course::setRozklad(string rozklad) {
    this->rozklad = rozklad;
}

void Course::setCredits(int credits) {
    this->credits = credits;
}

void Course::setDeskription(string deskription) {
    this->deskription = deskription;
}

void Course::setType(string type) {
    this->type = type;
}


Course::Course()
    : teacher(), name(""), semestr(0), materials(""),
    rozklad(""), credits(0), deskription(""), type("") {}

Course::Course(Tech teacher, string name, int semestr, string materials,
    string rozklad, int credits, string deskription, string type)
    : teacher(teacher), name(name), semestr(semestr), materials(materials),
    rozklad(rozklad), credits(credits), deskription(deskription), type(type) {}

Course::~Course() {}