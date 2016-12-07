// Column.h
// Sam Gallagher

#ifndef COLUMN_H
#define COLUMN_H

#include <math.h>

class Region;
class Cell;
class ProximalSegment;

class Column
{
private:
	//Relationship environment
	int id;
	Region * owner;
	ProximalSegment col_segment;
	std::vector<Cell> * local_cells; //Points to its local cells -- Cells are technically in column, but
									 //it will be easier to work when they are all stored together
	//Individual env
	int center;
	bool bursting;
	bool active = false;
	int overlap = 0;
	float overlap_duty_cycle = 1.0;
	float active_duty_cycle = 1.0;
	float boost = 1.0;

public:
	//Constructors
	Column();
	Column(int, Region *,ProximalSegment, int, std::vector<Cell> * local_cells);

	//Member functions
	bool incrementBoost(float);


	//Sets and gets
	bool setId(int);
	bool setOwner(Region * );
	bool setColSegment(ProximalSegment);
	bool setLocalCells(std::vector<Cell> *);
	bool setActive(bool);
	bool setOverlap(int);
	bool setOverlapDutyCycle(float);
	bool setActiveDutyCycle(float);
	bool setBoost(float);
	bool setBursting(bool);
	bool setCenter(int);

	int getId();
	Region * getOwner();
	ProximalSegment getColSegment();
	std::vector<Cell> * getLocalCells();
	bool getActive();
	int getOverlap();
	float getOverlapDutyCycle();
	float getActiveDutyCycle();
	float getBoost();
	Cell * getCell( int );
	bool getBursting();
	int getCenter();

};

#endif /* COLUMN_H */
