/*
 * componentcategory.h
 *
 *	Equivalent to the L in the diagram, has the information
 *	on styles and number of occurences
 *
 *  Created on: May 7, 2017
 *      Author: blupi
 */

#ifndef COMPONENTCATEGORY_H_
#define COMPONENTCATEGORY_H_

#include "randvar.h"
#include "style.h"

class ComponentCategory {
public:
	ComponentCategory();
	ComponentCategory(RandVar newNumComp, Style newSty);

	RandVar getNumComp();
	Style getSty();

	void setNumComp(RandVar newNumComp);
	void setStyle(Style newSty);

	virtual ~ComponentCategory();

private:
	RandVar numComp;
	Style sty;
};

#endif /* COMPONENTCATEGORY_H_ */
