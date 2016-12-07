//Segment.h
//Sam Gallagher
//22 July 2016
//
//A parent segment class, which will be implemented as a
//proximal segment class and a distal segment class.
//Expected inputs:  id (int)     - The segment id, unique to the owner
//                  owner (int)  - The owner id (column or cell)
//                  radius (int) - The radius a segment can reach
//
// TODO: Implement <vector> or other class for better usage of objects
//       Define subclasses for proximal and distal segments

#ifndef __SEGMENT_H__
#define __SEGMENT_H__

#include <vector>
#include "Synapse.h"

class Column;

class Segment
{
protected:
    int id = -1;
    int overlap = 0;
    bool active;
    static int radius;
    //Owner and synapses are not included because it is specific to distal/proximal
    //segments - it is defined in the child classes

public:
//Constructors=======================
    Segment();
//Segment Methods====================
    virtual bool isSegActive(); //isSegActive checks if this segment is active. Checks its
    // synapses, and calculates an overlap for the synapse's connections. The Synapse objects will
    // have pointers to their "connections" (locations in the input space, or another cell)

//Sets and Gets======================
    void setId(int);
    int getId();
    bool getActiveState();
    virtual Synapse getSynapse(int);
//Static Methods=====================
    static void setRadius(int);
    static int getRadius();
};

#endif
