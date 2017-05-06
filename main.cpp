/*
 * main.cpp
 *
 *	Used to test the Component class with a .dae file
 *
 *  Created on: May 5, 2017
 *      Author: blupi
 */

#include "model.h"
#include "Vec3f.h"
#include "Vec3i.h"

int main( int argc, const char* argv[] )
{
	Model model = Model("Input/fourleg_model.dae");

	std::vector<Component> comps = model.getComponents();

	std::vector<Vec3f> pos0 = comps[0].getPos();
	std::vector<Vec3f> pos1 = comps[comps.size() - 1].getPos();

	std::vector<Vec3i> tri0 = comps[0].getTri();
	std::vector<Vec3i> tri1 = comps[comps.size() - 1].getTri();

	printf("Premiere composante, premier triangle, point 1: x = %f, y = %f, z = %f \n",
			pos0[tri0[0].getTri1()].getX(),
			pos0[tri0[0].getTri1()].getY(),
			pos0[tri0[0].getTri1()].getZ());

	printf("Derniere composante, premier triangle, point 1: x = %f, y = %f, z = %f \n",
			pos1[tri1[0].getTri1()].getX(),
			pos1[tri1[0].getTri1()].getY(),
			pos1[tri1[0].getTri1()].getZ());

	printf("Premiere composante, dernier triangle, point 3: x = %f, y = %f, z = %f \n",
			pos0[tri0[tri0.size() - 1].getTri3()].getX(),
			pos0[tri0[tri0.size() - 1].getTri3()].getY(),
			pos0[tri0[tri0.size() - 1].getTri3()].getZ());

	printf("Derniere composante, dernier triangle, point 3: x = %f, y = %f, z = %f \n",
			pos1[tri1[tri1.size() - 1].getTri3()].getX(),
			pos1[tri1[tri1.size() - 1].getTri3()].getY(),
			pos1[tri1[tri1.size() - 1].getTri3()].getZ());

	return 0;

}
