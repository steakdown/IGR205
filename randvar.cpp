/*
 * randvar.cpp
 *
 *  Created on: May 7, 2017
 *      Author: blupi
 */

#include "randvar.h"
#include <time.h>

RandVar::RandVar() {
}

RandVar::RandVar(std::vector<std::pair<int, unsigned int> > occur)
{
	unsigned int totalOccur = 0;
	probs.resize(occur.size());

	for(unsigned int i = 0; i < occur.size(); i++)
	{
		totalOccur += occur[i].second;
	}

	for(unsigned int i = 0; i < occur.size(); i++)
	{
		probs[i] = std::pair<int, float>(occur[i].first,
				occur[i].second/(float)totalOccur);
	}

}

RandVar::RandVar(std::vector<std::pair<int, float> > newProbs)
{
	probs = newProbs;
}

int RandVar::getRandomPick()
{
	// random number between 0 and 1
	double randNum = ((double) rand() / (RAND_MAX));

	for(unsigned int i = 0; i < probs.size(); i++)
	{
		// if random number is less than current prob, choose it
		if(randNum < probs[i].second)
		{
			return probs[i].first;
		}
		// else decrease random number by that prob
		else
		{
			randNum -= probs[i].second;
		}
	}

	// Shouldn't get here
	std::cerr << "Probability vector not set up correctly" << std::endl;
	return 0;
}

RandVar::~RandVar() {
}

