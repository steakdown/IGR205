/*
 * style.cpp
 *
 *  Created on: May 7, 2017
 *      Author: blupi
 */

#include "shapetype.h"

ShapeType::ShapeType() {

}

ShapeType::ShapeType(std::vector<ComponentCategory> newCats)
{
	cats = newCats;
}

void ShapeType::setCats(std::vector<ComponentCategory> newCats)
{
	cats = newCats;
}

std::vector<ComponentCategory> ShapeType::getCats()
{
	return cats;
}

void ShapeType::addCat(ComponentCategory cat)
{
	cats.push_back(cat);
}

ShapeType::~ShapeType() {
}

