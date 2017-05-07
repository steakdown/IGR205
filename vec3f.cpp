/*
 * Vec3f.cpp
 *
 *  Created on: May 6, 2017
 *      Author: blupi
 */

#include "vec3f.h"

Vec3f::Vec3f() {}

Vec3f::Vec3f(float newX, float newY, float newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

float Vec3f::getX()
{
	return x;
}

float Vec3f::getY()
{
	return y;
}

float Vec3f::getZ()
{
	return z;
}

Vec3f::~Vec3f()
{

}
