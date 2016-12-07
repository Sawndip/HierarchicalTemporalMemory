/*
 * DistalSegment.cpp
 *
 *  Created on: Nov 27, 2016
 *      Author: sam
 */

#include "DistalSegment.h"

DistalSegment::DistalSegment(int segID, int nSYN)
{
	DistalSegment::id = segID;
	int nSynapses = nSYN;
	float initialPerm = Synapse::getThreshold() + 0.01; //Make initial perm random

	DistalSynapse s(initialPerm);
	s.setOwner(this);

	for(int j = 0; j < nSynapses; j++)
	{
		DistalSegment::synapses.push_back(s);
	}

	DistalSegment::owner = nullptr;
}

DistalSynapse * DistalSegment::getSynapse(int s)
{
	return DistalSegment::synapses.at(s);
}

bool DistalSegment::isSegActive()
{
	return false;
}

bool DistalSegment::setOwner(Cell * o)
{
	DistalSegment::owner = o;
	return true;
}

Cell * DistalSegment::getOwner()
{
	return DistalSegment::owner;
}
