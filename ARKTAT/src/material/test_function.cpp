#include <iostream>
#include <include/material/test_function.h>

using namespace std;

namespace ARKTAT
{

Box::Box(void):length{1},height{1}, depth{1} {
	cout << "Box is created" << endl;
}

Box::~Box(){
	cout << "Box is destroyed!" << endl;
}

double Box::getVolume(void) {
	return length * height * depth;
}

void Box::setLength(double len) {
	length = len;
}

void Box::setHeight(double hei) {
	height = hei;
}

void Box::setDepth(double dep) {
	depth = dep;
}
}
