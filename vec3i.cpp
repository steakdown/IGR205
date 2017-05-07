/*
 * Vec3i.cpp
 *
 *  Created on: May 6, 2017
 *      Author: blupi
 */

#include "vec3i.h"

Vec3i::Vec3i() {}

Vec3i::Vec3i(unsigned int new1, unsigned int new2, unsigned int new3)
{
	tri1 = new1;
	tri2 = new2;
	tri3 = new3;
}

unsigned int Vec3i::getTri1()
{
	return tri1;
}

unsigned int Vec3i::getTri2()
{
	return tri2;
}

unsigned int Vec3i::getTri3()
{
	return tri3;
}

Vec3i::~Vec3i() {
	// TODO Auto-generated destructor stub
}
