/*
 * Style.h
 *
 *  Created on: May 7, 2017
 *      Author: blupi
 */

#ifndef STYLE_H_
#define STYLE_H_

#include "contfeatures.h"
#include "adjacent.h"

class Style {
public:
	Style();
	Style(ContFeatures newFeatures, Adjacent newAdj);
	virtual ~Style();
private:
	ContFeatures features;
	Adjacent adj;
};

#endif /* STYLE_H_ */
