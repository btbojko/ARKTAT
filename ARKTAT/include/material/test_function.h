/*
 * test_function.h
 *
 *  Created on: Apr 6, 2017
 *      Author: bbojko
 */

#ifndef MATERIAL_TEST_FUNCTION_H_
#define MATERIAL_TEST_FUNCTION_H_

namespace ARKTAT
{
class Box
{
public:
	Box();
	~Box();

	 double getVolume(void) ;//  const = 0;
	  void   setLength(double);// const = 0;
	 void   setHeight(double);// const = 0;
	 void   setDepth(double) ;// const = 0;

private:
	double length;
	double height;
	double depth;
};
}



#endif /* MATERIAL_TEST_FUNCTION_H_ */
