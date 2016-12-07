/*
 * Column.cpp
 *
 *  Created on: Dec 5, 2016
 *      Author: Sam Gallagher
 */

#include "Column.h"

Column::Column()
{
	Column::id = -1;
	Column::owner = nullptr;
	Column::col_segment = new ProximalSegment(1,0);
	Column::local_cells = nullptr;
	Column::bursting = false;
	Column::active = false;
	Column::overlap = 0;
	Column::overlap_duty_cycle = 1.0;
	Column::active_duty_cycle = 1.0;
	Column::boost = 1.0;
	Column::center = -1;
}

Column::Column(int ColID,Region * OWN, ProximalSegment ColSEG, int ColCENT, std::vector<Cell> * Locals)
{
	if(ColID > 0)
		Column::id = ColID;
	if(OWN->getId() > -1)
		Column::owner = OWN;
	if(ColSEG.getId() > -1)
		Column::col_segment = ColSEG;
	Column::local_cells = Locals;

	Column::bursting = false;
	Column::active = false;
	Column::overlap = 0;
	Column::overlap_duty_cycle = 1.0;
	Column::active_duty_cycle = 1.0;
	Column::boost = 1.0;
	if(ColCENT > -1)
		Column::center = ColCENT;
}

//****************************
//MEMBER FUNCTIONS

bool Column::incrementBoost(float inc)
{
	if(inc >= 0 && inc <= 1)
	{
		Column::boost += inc;
		return true;
	}
	else return false;
}

//**********************************
//SETS

bool Column::setId(int i)
{
	if(i > 0)
	{
		Column::id = i;
		return true;
	}
	else return false;
}
bool Column::setOwner(Region * r)
{
	Column::owner = r;
	return true;
}
bool Column::setColSegment(ProximalSegment s)
{
	Column::col_segment = s;
	return true;
}
bool Column::setLocalCells(std::vector<Cell> * Locals)
{
	Column::local_cells = Locals;
	return true;
}
bool Column::setActive(bool a)
{
	Column::active = a;
	return true;
}
bool Column::setOverlap(int o)
{
	if(o >= 0)
	{
		Column::overlap = o;
		return true;
	}
	else return false;
}
bool Column::setOverlapDutyCycle(float odc)
{
	if(odc >= 0 && odc <= 1)
	{
		Column::overlap_duty_cycle = odc;
		return true;
	}
	else return false;
}
bool Column::setActiveDutyCycle(float adc)
{
	if(adc >= 0 && adc <= 1)
	{
		Column::active_duty_cycle = adc;
		return true;
	}
	else return false;
}
bool Column::setBoost(float b)
{
	if(b > 0)
	{
		Column::boost = b;
		return true;
	}
	else return false;
}
bool Column::setBursting(bool b)
{
	Column::bursting = b;
	return true;
}
bool Column::setCenter(int c)
{
	if(c > -1)
	{
		Column::center = c;
		return true;
	}
	else return false;
}

//**********************
//GETS

int Column::getId()
{
	return Column::id;
}
Region * Column::getOwner()
{
	return Column::owner;
}
ProximalSegment Column::getColSegment()
{
	return Column::col_segment;
}
std::vector<Cell> * Column::getLocalCells()
{
	return Column::local_cells;
}
bool Column::getActive()
{
	return Column::active;
}
int Column::getOverlap()
{
	return Column::overlap;
}
float Column::getOverlapDutyCycle()
{
	return Column::overlap_duty_cycle;
}
float Column::getActiveDutyCycle()
{
	return Column::active_duty_cycle;
}
float Column::getBoost()
{
	return Column::boost;
}
Cell * Column::getCell(int j)
{
	//Return the nth cell in a column, with k cells per column, by
	// going to the column center and working either side
	int nCells = Column::owner->userParameters.nCellsPerCol;
	if(Column::owner->getId() > -1)
	{
		if(j < nCells && j >= 0)
		{
			return Column::local_cells[j];
		}
	}
	else return nullptr;
}
bool Column::getBursting()
{
	return Column::bursting;
}
int Column::getCenter()
{
	return Column::center;
}
