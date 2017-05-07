/*
 * Model.h
 *
 *  Created on: May 6, 2017
 *      Author: blupi
 */

#ifndef MODEL_H_
#define MODEL_H_

#include "component.h"
#include "vec3f.h"
#include "vec3i.h"
#include "tinyxml2.h"
using namespace tinyxml2;

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class Model {
public:
	Model();
	Model(std::string pathToFile);
	void addComponent(Component comp);
	std::vector<Component> getComponents();
	void loadModelFromXML(std::string pathToFile);
	virtual ~Model();

private:
	std::vector<Component> comps;
	std::vector<Vec3f> strToVecFloat(const char* charArr, unsigned int count);
	std::vector<Vec3i> strToVecInt(const char* charArr, unsigned int count);
};

#endif /* MODEL_H_ */
