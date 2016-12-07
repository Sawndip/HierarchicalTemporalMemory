// Region.h
// Sam Gallagher

#ifndef REGION_H
#define REGION_H

#include <vector>
#include <list>
#include "Config.h"
#include "Synapse.h"
#include "InputSpace.h"
#include "DistalSegment.h"
#include "ProximalSegment.h"
#include "Cell.h"
#include "Column.h"

class Region
{
private:
	int time = 0; //Region owns time for ALL cells and columns within. It is NOT defined in a per-object-basis.
			  //To access the time e.g. for a cell, you must go through the ownership-train (column->region->region.time
	int id = -1;
	InputSpace * region_input;
	HTM * owner;
	std::vector<Column> col_space;
	std::vector<Cell> cell_space;

public:
	//Immutable public configuration
	const struct Config userParameters;

	//Constructors
	Region(); //Default configuration settings
	Region(int, struct Config, InputSpace, HTM *);

	//Regions functions
	bool initializeColumns();
	bool intializeCells();


	//Sets and Gets
	bool setTime(int); //Avoid doing this directly
	bool setInputSpace(InputSpace * );
	bool setOwner(HTM *);
	bool setColSpace(std::vector<Column>);
	bool setCellSpace(std::vector<Cell>);

	int getRegionTime();
	int getId();
	InputSpace * getInputSpace();
	HTM * getOwner();
	std::vector<Column> * getColumns();
	std::vector<Cell> * getCells();
	Column * getColumn(int);
	Cell * getCell(int);
	Cell * getCell(int, int);


};

#endif
