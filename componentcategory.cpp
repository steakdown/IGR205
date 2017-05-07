/*
 * componentcategory.cpp
 *
 *  Created on: May 7, 2017
 *      Author: blupi
 */

#include "componentcategory.h"

ComponentCategory::ComponentCategory() {
}

ComponentCategory::ComponentCategory(RandVar newNumComp, Style newSty)
{
	numComp = newNumComp;
	sty = newSty;
}

RandVar ComponentCategory::getNumComp()
{
	return numComp;
}

Style ComponentCategory::getSty()
{
	return sty;
}

void ComponentCategory::setNumComp(RandVar newNumComp)
{
	numComp = newNumComp;
}

void ComponentCategory::setStyle(Style newSty)
{
	sty = newSty;
}

ComponentCategory::~ComponentCategory() {
}

