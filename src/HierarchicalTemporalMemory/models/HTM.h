/*
 * HTM.h
 *
 *  Created on: Dec 3, 2016
 *      Author: Sam Gallagher
 *
 *  Description
 *  	This class is a container for the entire hierarchy of regions in the
 *  	hierarchical temporal memory. Configurations of the regions, and initializtion
 *  	of the regions, is performed here.
 *
 *  	There is also an _overall_ time variable, as opposed to the time in
 *  	each individual region. This variable keeps track of how many time
 *  	steps have passed by for the entire program
 */

#ifndef HTM_H
#define HTM_H

#include "Region.h"

class HTM
{
private:
	int htm_time_elapsed = 0;

public:


};



#endif /* HTM_H */
