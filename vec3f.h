/*
 * Vec3f.h
 *
 *  Created on: May 6, 2017
 *      Author: blupi
 */

#ifndef VEC3F_H_
#define VEC3F_H_

class Vec3f {
public:
	Vec3f();
	Vec3f(float x, float y, float z);
	float getX();
	float getY();
	float getZ();
	float dist(Vec3f * v);
	float dist2(Vec3f * v); // return squared distance
	virtual ~Vec3f();

private:
	float x, y, z;
};

#endif /* VEC3F_H_ */
