#include <iostream>

using namespace std;

class Box{
public:
	double getVolume(void);
	void setLength(double);
	void setHeight(double);
	void setDepth(double);

private:
	double length;
	double height;
	double depth;
};

double Box::getVolume(void){
	return length * height * depth;
}

void Box::setLength(double len){
	length = len;
}

void Box::setHeight(double hei){
	height = hei;
}

void Box::setDepth(double dep){
	depth = dep;
}
