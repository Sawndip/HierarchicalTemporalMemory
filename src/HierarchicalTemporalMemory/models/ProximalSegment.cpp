/*
 * ProximalSegment.cpp
 *
 *  Created on: Nov 27, 2016
 *      Author: sam
 */

#include "ProximalSegment.h"

ProximalSegment::ProximalSegment(int segID, int nSYN)
{
	Segment::id = segID;

	int nSynapses = nSYN;
	float initialPerm = Synapse::getThreshold()+0.01; // Make random

	ProximalSegment::owner = nullptr; // Initialize owner null

	for(int j = 0;j < nSynapses; j++)
	{
		ProximalSynapse s(initialPerm); //Initial perm
		ProximalSegment::synapses.push_back(s);
	}
}

ProximalSynapse * ProximalSegment::getSynapse(int s)
{
	return ProximalSegment::&synapses.at(s);
}

bool ProximalSegment::isSegActive()
{
	return false;
}

bool ProximalSegment::setOwner(bool * o)
{
	ProximalSegment::owner = o;
	return true;
}

bool * ProximalSegment::getOwner()
{
	return ProximalSegment::owner;
}
