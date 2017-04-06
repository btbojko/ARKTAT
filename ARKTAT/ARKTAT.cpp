//============================================================================
// Name        : ARKTAT.cpp
// Author      : btbojko
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <include/ARKTAT.h>
//#include <src/material/test_function.cpp>
//#include <include/material/test_function.h>

using namespace std;
using namespace ARKTAT;

int main(void) {
	Box* box1= new Box();
//	Box* box1 = new Box();
//	box1 -> setLength(2.);
	box1 -> setLength(2.);
    box1 -> setHeight(3.);
    box1 -> setDepth(4.);

    double volume = 0.;

	cout << "Hello World!" << endl;

	volume = box1 -> getVolume();
	cout << "I created a box with a volume of : " << volume << endl;

	delete box1;

	return 0;
}
