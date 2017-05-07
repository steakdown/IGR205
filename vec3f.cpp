/*
 * Vec3f.cpp
 *
 *  Created on: May 6, 2017
 *      Author: blupi
 */

#include <math.h>
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

float Vec3f::dist2(Vec3f * v)
{
	float dx = v->x - x;
	float dy = v->y - y;
	float dz = v->z - z;
	return dx * dx + dy * dy + dz * dz;
}

float Vec3f::dist(Vec3f * v)
{
	return sqrt(dist2(v));
}

Vec3f::~Vec3f()
{

}
