/*
 * Cell.cpp
 *
 *  Created on: Dec 5, 2016
 *      Author: Sam Gallagher
 */

#include "Cell.h"

Cell::Cell()
{
	Cell::id = -1;
	Cell::owner = nullptr;
	Cell::cell_segs = new DistalSegment(1,1);
	Cell::active = false;
	Cell::predicting = false;
	Cell::maxNewSynapses = 0;
}
Cell::Cell(int CellID, Region * OWN, std::vector<DistalSegment> CellSEGS, int MaxSYN)
{
	if(CellID > -1)
		Cell::id = CellID;
	if(OWN->getId() > -1)
		Cell::owner = OWN;
	if(!(CellSEGS.empty()))
		Cell::cell_segs = CellSEGS;

	if(MaxSYN > -1)
		Cell::maxNewSynapses = MaxSYN;
	Cell::active = false;
	Cell::predicting = false;

}

bool Cell::setId(int i)
{
	if(i > -1)
	{
		Cell::id = i;
		return true;
	}
	else return false;
}
bool Cell::setOwner(Region * o)
{
	if(o->getId() > -1)
	{
		Cell::owner = o;
		return true;
	}
	else return false;
}
bool Cell::setCellSegs(std::vector<DistalSegment> d)
{
	Cell::cell_segs = d;
	return true;
}
bool Cell::setActive(bool a)
{
	Cell::active = a;
	return true;
}
bool Cell::setPredicting(bool p)
{
	Cell::predicting = p;
	return true;
}
bool Cell::setMaxNewSynapses(int n)
{
	if(n > -1)
	{
		Cell::maxNewSynapses = n;
		return true;
	}
	else return false;
}

int Cell::getId()
{
	return Cell::id;
}
Region * Cell::getOwner()
{
	return Cell::owner;
}
std::vector<DistalSegment> * Cell::getCellSegs()
{
	return Cell::cell_segs;
}
bool Cell::getActive()
{
	return Cell::active;
}
bool Cell::getPredicting()
{
	return Cell::predicting;
}
int Cell::getMaxNewSynapses()
{
	return Cell::maxNewSynapses;
}
DistalSegment * Cell::getSegment(int j)
{
	if(j > -1)
		if(j < Cell::cell_segs.size())
			return Cell::cell_segs.at(j);
}
int Cell::getNumberSegments()
{
	return Cell::cell_segs.size();
}
