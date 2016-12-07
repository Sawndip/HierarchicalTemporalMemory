// DistalSegment.h
// Sam Gallagher
// 24 July 2016
//
// A subclass that inherits from the Segment class for
// modelling the distal segments
// Owned by: Cell
#ifndef DISTAL_SEGMENT_H
#define DISTAL_SEGMENT_H

#include "Segment.h"

class DistalSynapse;
class Cell;

class DistalSegment : public Segment
{
private:
	//Implement an owner, and the synapses
	Cell * owner;
	std::vector<DistalSynapse> synapses;

public:
	//Constructor
	DistalSegment(int, int);

	//Virtual methods
	DistalSynapse * getSynapse(int);

	//Object methods
	bool isSegActive();
	bool setOwner(Cell *);
	Cell * getOwner();
};

#endif
