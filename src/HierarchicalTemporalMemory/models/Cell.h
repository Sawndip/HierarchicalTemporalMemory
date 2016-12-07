// Cell.h
// Sam Gallagher

#ifndef CELL_H
#define CELL_H

class Region;
class Column;
class DistalSegment;

class Cell
{
private:
	int id;
	Region * owner; //Note that cells are owned by the region, not the column
	std::vector<DistalSegment> cell_segs;
	bool active;
	bool predicting; //You can make this a float to accommodate varying scales of prediction, and focus
	int maxNewSynapses;

public:
	//Constructors
	Cell();
	Cell(int, Region *, std::vector<DistalSegment>, int);

	//Member functions


	//Sets and gets
	bool setId(int);
	bool setOwner(Region *);
	bool setCellSegs(std::vector<DistalSegment>);
	bool setActive(bool);
	bool setPredicting(bool);
	bool setMaxNewSynapses(int);

	int getId();
	Region * getOwner();
	std::vector<DistalSegment> * getCellSegs();
	bool getActive();
	bool getPredicting();
	int getMaxNewSynapses();
	DistalSegment * getSegment(int);
	int getNumberSegments();


};

#endif /* CELL_H */
