/*
 * Model.cpp
 *
 *  Created on: May 6, 2017
 *      Author: blupi
 */

#include "Model.h"

Model::Model()
{

}

Model::Model(std::string pathToFile)
{
	loadModelFromXML(pathToFile);
}

void Model::addComponent(Component comp)
{
	comps.push_back(comp);
}
std::vector<Component> Model::getComponents()
{
	return comps;
}

// TODO: more robust reading using types given by file
void Model::loadModelFromXML(std::string pathToFile)
{
	// read for more info on the COLLADA structure:
	// https://www.codeproject.com/Articles/625701/COLLADA-TinyXML-and-OpenGL

	XMLDocument meshXML;
	meshXML.LoadFile( pathToFile.c_str() );

	unsigned int count;

	// Navigating through collada structure to get to relevant info
	XMLNode * pRoot = meshXML.FirstChildElement( "COLLADA" );
	if(pRoot == NULL)
	{
		std::cerr << "Failed to load " + pathToFile << std::endl;
		return;
	}

	XMLNode * pGeom = pRoot->FirstChildElement("library_geometries")->FirstChildElement("geometry");
	if(pGeom == NULL)
	{
		std::cerr << "Failed to parse " + pathToFile << std::endl;
		return;
	}

	// Iterates on all "geometries" of the mesh, one geometry is a component
	while(pGeom != NULL)
	{
		// Navigating to where position of the mesh are
		XMLNode * pArr = pGeom->FirstChildElement("mesh")->FirstChildElement("source");
		if(pArr == NULL)
		{
			std::cerr << "Failed to extract positions from " + pathToFile << std::endl;
			return;
		}

		// Gets all position points in float format as a string that uses spaces as separator
		// ex: "0.000 1.111 5.000 9.666 7.444"
		XMLElement * pPos = pArr->FirstChildElement("float_array");

		// Gets number of elements in array
		count = atoi(pPos->Attribute("count"));

		// Gets Vec3f vector from that string
		std::vector<Vec3f> vecPos = strToVecFloat(pPos->GetText(), count);


		// Navigating to where indexes are
		XMLNode * pTri = pGeom->FirstChildElement("mesh")->FirstChildElement("triangles");
		if(pTri == NULL)
		{
			std::cerr << "Non triangle geometry not supported (found in: " + pathToFile + " )" << std::endl;
			pGeom = pGeom->NextSibling();
			continue;
		}

		// Gets all indexes as a string that uses spaces as a separator
		// ex: "0 1 1 0 2 2 3 4 2"
		XMLElement * pIdx = pTri->FirstChildElement("p");

		XMLElement * pTriElem = (XMLElement*) pTri;

		// Gets number of elements in array
		count = atoi(pTriElem->Attribute("count"));

		// Get Vec3i vector from string
		std::vector<Vec3i> vecIdx = strToVecInt(pIdx->GetText(), count);

		// Adds component to this model
		Component comp = Component(vecPos, vecIdx);
		this->addComponent(comp);

		// goes to next geometry
		pGeom = pGeom->NextSibling();
	}

	meshXML.Clear();
}

std::vector<Vec3f> Model::strToVecFloat(const char* charArr, unsigned int count)
{
	std::vector<Vec3f> result;

	// One Vec3f = 3 floats
	count /= 3;

	result.resize(count);
	unsigned int i = 0;
	std::string s1, s2, s3;

	std::istringstream ssin(charArr);
	for( ; i < count; i++)
	{
		ssin >> s1;
		ssin >> s2;
		ssin >> s3;
		result[i] = Vec3f(atof(s1.c_str()), atof(s2.c_str()), atof(s3.c_str()));
	}

	return result;
}

std::vector<Vec3i> Model::strToVecInt(const char* charArr, unsigned int count)
{
	std::vector<Vec3i> result;

	// One Vec3i = 3 unsigned ints
	count /= 3;

	result.resize(count);
	unsigned int i = 0;
	std::string s1, s2, s3;

	std::istringstream ssin(charArr);
	for( ; i < count; i++)
	{
		ssin >> s1;
		ssin >> s2;
		ssin >> s3;
		result[i] = Vec3i(atoi(s1.c_str()), atoi(s2.c_str()), atoi(s3.c_str()));
	}

	return result;
}

Model::~Model()
{

}

