/*
 * Component.h
 *
 *  Created on: May 6, 2017
 *      Author: blupi
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

#include <vector>
#include "vec3f.h"
#include "vec3i.h"

class Component {
public:
	Component(std::vector<Vec3f> newPos, std::vector<Vec3i> newTri);
	void setPos(std::vector<Vec3f> newPos);
	void setTri(std::vector<Vec3i> newTri);
	std::vector<Vec3f> getPos();
	std::vector<Vec3i> getTri();
	virtual ~Component();

private:
	std::vector<Vec3f> pos;
	std::vector<Vec3i> tri;
};

#endif /* COMPONENT_H_ */
