/*
 * main.cpp
 *
 *	Used to test the Component class with a .dae file
 *
 *  Created on: May 5, 2017
 *      Author: blupi
 */

#include "model.h"
#include "vec3f.h"
#include "vec3i.h"
#include "randvar.h"
#include <time.h>

int main( int argc, const char* argv[] )
{

	srand(time(NULL));

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

	std::vector<std::pair<int, unsigned int> > testVec;
	testVec.push_back(std::pair<int, unsigned int>(5, 20));
	testVec.push_back(std::pair<int, unsigned int>(8, 20));
	testVec.push_back(std::pair<int, unsigned int>(78, 60));
	RandVar testvar = RandVar(testVec);

	// next line is a hack to get different results for the first call of "rand"
	// without it for some reason, the first result is always the same (at least on my machine)
	// it must be because of the pseudo randomness, but who knows
	rand(); rand(); rand();

	printf("Random pick 1: %d \n", testvar.getRandomPick());
	printf("Random pick 2: %d \n", testvar.getRandomPick());
	printf("Random pick 3: %d \n", testvar.getRandomPick());
	printf("Random pick 4: %d \n", testvar.getRandomPick());
	printf("Random pick 5: %d \n", testvar.getRandomPick());

	return 0;

}
