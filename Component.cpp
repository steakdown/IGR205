/*
 * Component.cpp
 *
 *  Created on: May 6, 2017
 *      Author: blupi
 */

#include "Component.h"

// TODO transformer triangles en triplets
Component::Component(std::vector<Vec3f> newPos, std::vector<Vec3i> newTri) {
	pos = newPos;
	tri = newTri;
}

void Component::setPos(std::vector<Vec3f> newPos)
{
	pos = newPos;
}

void Component::setTri(std::vector<Vec3i> newTri)
{
	tri = newTri;
}

std::vector<Vec3f> Component::getPos()
{
	return pos;
}

std::vector<Vec3i> Component::getTri()
{
	return tri;
}

Component::~Component() {
	// TODO Auto-generated destructor stub
}

