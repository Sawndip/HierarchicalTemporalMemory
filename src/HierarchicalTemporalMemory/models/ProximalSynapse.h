/*
 * ProximalSynapse.h
 *
 *  Created on: Nov 27, 2016
 *      Author: Sam Gallagher
 *
 *  Implementation of Synapse interface for proximal synapses. Proximal synapses
 *  connect to cells in the area. Proximal synapses appear on proximal segments whic
 *  are owned by cells.
 */

#ifndef PROX_SYNAPSE_H
#define PROX_SYNAPSE_H

class Cell;

class ProximalSynapse : public Synapse
{
private:
	bool * location;

public:
	bool setLocation(bool *);
	bool * getLocation();
	bool getLocationIsActive();
};

#endif

