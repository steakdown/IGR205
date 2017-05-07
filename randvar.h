/*
 * randvar.h
 *
 *	A random variable, that can pick a number randomly
 *	using probabilities given.
 *	The N on the paper diagram is represented using one of those.
 *
 *
 *  Created on: May 7, 2017
 *      Author: blupi
 */

#ifndef RANDVAR_H_
#define RANDVAR_H_

#include <cstdlib>
#include <vector>
#include <iostream>

class RandVar {
public:
	RandVar();
	RandVar(std::vector<std::pair<int, unsigned int> > occur);
	RandVar(std::vector<std::pair<int, float> > newProbs);

	// gives random number, using parameters given on object
	// creation as weights
	int getRandomPick();

	virtual ~RandVar();

private:
	std::vector<std::pair<int, float> > probs;
};

#endif /* RANDVAR_H_ */
