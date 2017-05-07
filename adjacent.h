/*
 * adjacent.h
 *
 * Created on: May 6, 2017
 *     Author: vgaillard
 */

#ifndef ADJACENT_H_
#define ADJACENT_H_

#include "component.h"

using namespace std;

class Adjacent {
public:
	Adjacent();
	Adjacent(vector<Component> * comps);
    // compute matrix and return it;
    int ** computeMatrix();
    // return adjacent matrix
    int ** getMatrix();
	virtual ~Adjacent();

private:
    vector<Component> * comps; // componenets array
    int nbComps;               // number of components
    int ** adjMatrix;          // adjacent matrix
                               // if adjMatrix[2][3] = 1, comp 2 is connected with comp 3
                               // if adjMatrix[1][7] = 0, comp 1 is not connected with comp 7
};

#endif /* ADJACENT_H_ */
