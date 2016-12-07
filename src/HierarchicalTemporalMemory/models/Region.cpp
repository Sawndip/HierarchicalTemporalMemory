/*
 * Region.cpp
 *
 *  Created on: Dec 3, 2016
 *      Author: Sam Gallagher
 */

#include "Region.h"

Region::Region()
{
	struct Config default_conf;
	//Not defined: inputWidth - the number of spaces in the input
	default_conf.maxSegments = 3;
	default_conf.minActiveDuty = 0.01;
	default_conf.minOverlapDuty = 0.01;
	default_conf.nCellsPerCol = 3;
	default_conf.nProxSynapses = 100;
	default_conf.nRegions = 1;
	default_conf.neighborhoodSize = 15;
	default_conf.permThreshold = 0.5;
	default_conf.percentCompress = 0.2; //20% of input
	Region::userParameters = default_conf;
	Region::owner == nullptr;

}

Region::Region(int regID, struct Config conf, InputSpace in,HTM * own)
{
	Region::id = regID;
	Region::userParameters = conf;
	Region::region_input = in;
	Region::owner = own;

	int ncols = 0;
	if(conf.percentCompress > 0 || conf.percentCompress < 1)
		if(in.getWidth() > 0)
			ncols = in.getWidth()*conf.percentCompress;

	Column c; //Initialize a temporary column
	for(int i = 0; i < ncols; i++)
	{
		Region::col_space.at(i) = c;
	}
}

bool Region::initializeColumns()
{
	int nColsToInit = Region::userParameters.percentCompress*Region::userParameters.inputWidth;

	Region::col_space.resize(nColsToInit);
	for(int i = 0; i < nColsToInit; i++)
	{
		Region::col_space.at(i) = new Column();
	}
	return true;
}
bool Region::intializeCells()
{
	int nCellsToInit = Region::col_space.size()*Region::userParameters.nCellsPerCol;

	Region::cell_space.resize(nCellsToInit);
	for(int i = 0; i < nCellsToInit; i++)
	{
		Region::cell_space.at(i) = new Cell();
	}
	return true;
}

bool Region::setTime(int t)
{
	Region::time = t;
	return true;
}
bool Region::setInputSpace(InputSpace * in)
{
	Region::region_input = in;
	return true;
}
bool Region::setOwner(HTM * own)
{
	Region::owner = own;
	return true;
}
bool Region::setColSpace(std::vector<Column> c)
{
	Region::col_space = c;
	return true;
}
bool Region::setCellSpace(std::vector<Cell> c)
{
	Region::cell_space = c;
	return true;
}

int Region::getRegionTime()
{
	return Region::time;
}
int Region::getId()
{
	return Region::id;
}
InputSpace * Region::getInputSpace()
{
	return Region::&region_input;
}
HTM * Region::getOwner()
{
	return Region::&owner;
}
std::vector<Column> * Region::getColumns()
{
	return Region::&col_space;
}
std::vector<Cell> * Region::getCells()
{
	return Region::&cell_space;
}
Column * Region::getColumn(int j)
{
	if(j > -1 && j < Region::col_space.size())
		return Region::col_space.at(j);
	else return nullptr;
}
Cell * Region::getCell(int i,int col)
{
	if(i > -1 && i < Region::userParameters.nCellsPerCol)
	{
		if(col > -1 && col < Region::col_space.size())
			return Region::&col_space.at(col).getCell(i);
	}
	else return nullptr;
}
Cell * Region::getCell(int i)
{
	if(i > -1 && i < Region::cell_space.size())
		return Region::&cell_space.at(i);
	else return nullptr;
}

