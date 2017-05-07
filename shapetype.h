/*
 * shapetype.h
 *
 *	Equivalent of latent variable R on paper.
 *	Contains the categories.
 *
 *  Created on: May 7, 2017
 *      Author: blupi
 */

#ifndef SHAPETYPE_H_
#define SHAPETYPE_H_

#include "componentcategory.h"

class ShapeType {
public:
	ShapeType();
	ShapeType(std::vector<ComponentCategory> newCats);

	void setCats(std::vector<ComponentCategory> newCats);
	std::vector<ComponentCategory> getCats();
	void addCat(ComponentCategory cat);

	virtual ~ShapeType();

private:
	std::vector<ComponentCategory> cats;
};

#endif /* SHAPETYPE_H_ */
