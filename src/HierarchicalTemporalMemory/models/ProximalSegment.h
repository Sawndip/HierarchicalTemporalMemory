// ProximalSegment.h
// Sam Gallagher
// 24 July 2016
//
// A subclass that inherits from the Segment class for
// modelling the proximal segments
// Owned by: Column
#ifndef PROXIMAL_SEGMENT_H
#define PROXIMAL_SEGMENT_H

#include "Segment.h"

class ProximalSynapse;

class ProximalSegment : public Segment
{
private:
	//Implement an owner, and the synapses
	bool * owner;
	std::vector<ProximalSynapse> synapses;

	//Private variables
	static int nSynapses = 0;

public:
	//Constructor
	ProximalSegment(int, int);

	//Virtual methods
	ProximalSynapse * getSynapse(int);

	//Object methods
	bool isSegActive();
	bool setOwner(bool *);
	bool * getOwner();
};

#endif
