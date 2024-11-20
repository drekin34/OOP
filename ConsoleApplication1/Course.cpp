#include "Course.h"

string Course::getName() {
	return name;
}

void Course::setName(string Name){
	name = Name;
}

Tech Course::getTeach() {
	return teacher;
}

void Course::setTeach(Tech Techer) {
	teacher = Techer;
}

int Course::getMark() {
	return mark;
}

void Course::setMark(int Mark) {
	mark = Mark;
}

