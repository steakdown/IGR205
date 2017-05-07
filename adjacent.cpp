/*
 * adjacent.cpp
 *
 * Created on: May 6, 2017
 *     Author: vgaillard
 */

#include "adjacent.h"

Adjacent::Adjacent()
{
}

Adjacent::Adjacent(vector<Component> * comps): comps(comps)
{
    nbComps = comps->size();
    adjMatrix = new int*[nbComps];
    for(int i = 0; i < nbComps; i++) {
        adjMatrix[i] = new int[nbComps];
        for(int j = 0; j < nbComps; j++)
            adjMatrix[i][j] = 0;
    }
}

int ** Adjacent::computeMatrix()
{
    // TODO: create adjacent matrix
    return adjMatrix;
}

int ** Adjacent::getMatrix()
{
    return adjMatrix;
}

Adjacent::~Adjacent()
{
    for(int i = 0; i < nbComps; i++)
        delete[] adjMatrix[i];
    delete[] adjMatrix;
}
