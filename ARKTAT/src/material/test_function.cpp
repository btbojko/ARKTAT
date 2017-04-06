#include <iostream>
#include <material/test_function.h>

using namespace std;

namespace ARKTAT
{

Box::Box(void){
	height = 1; length = 1; depth =1;
	std::cout << "Box is created" << std::endl;
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
