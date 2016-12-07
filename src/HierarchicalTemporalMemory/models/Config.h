/*
 * Config.h
 *
 *  Created on: Dec 3, 2016
 *      Author: sam
 */

#ifndef CONFIG_H
#define CONFIG_H

struct Config
{
	int nRegions;
	int nCellsPerCol;
	int nProxSynapses; //Initial number of synapses on a proximal segment
	int inputWidth;   //Size of the input space
	int maxSegments;
	int neighborhoodSize;
	int receptiveFieldSize;

	float permThreshold;
	float minActiveDuty;
	float minOverlapDuty;
	float percentCompress; //Percentage of input spaces, used for number of columns
						   // E.g. 10% with an input space of 2000 = 200 columns
};


#endif /* CONFIG_H */
