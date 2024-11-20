#include "Course.h"

string Course::getName() {
	return name;
}

void Course::setName(string Name){
	name = Name;
}

Tech Course::getTeach() {
	return techer;
}

void Course::setTeach(Tech Techer) {
	techer = Techer;
}

int Course::getMark() {
	return mark;
}

void Course::setMark(int Mark) {
	mark = Mark;
}

