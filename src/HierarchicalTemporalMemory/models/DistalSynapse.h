/*
 * DistalSynapse.h
 * Created: 27 Nov 2016
 * Author: Sam Gallagher
 *
 * Implementation of synapse interface for distal synapses. Distal synapses connect to locations within the input
 * space (a bool vector itself), and are owned by distal segments, which are owned by columns.
 */

#ifndef DIST_SYNAPSE_H
#define DIST_SYNAPSE_H

class Cell;

class DistalSynapse : public Synapse
{
private:
	Cell * location;


public:
	bool setLocation(Cell *);
	Cell * getLocation();
	bool getLocationIsActive();
	bool getLocationIsPred();
};

#endif
