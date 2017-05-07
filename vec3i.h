/*
 * Vec3i.h
 *
 *  Created on: May 6, 2017
 *      Author: blupi
 */

#ifndef VEC3I_H_
#define VEC3I_H_

class Vec3i {
public:
	Vec3i();
	Vec3i(unsigned int x, unsigned int y, unsigned int z);
	unsigned int getTri1();
	unsigned int getTri2();
	unsigned int getTri3();
	virtual ~Vec3i();

private:
	unsigned int tri1, tri2, tri3;
};

#endif /* VEC3I_H_ */
