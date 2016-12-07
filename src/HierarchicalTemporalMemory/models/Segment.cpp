//Segment.h
//Sam Gallagher
//22 July 2016
//
//A parent segment class, which will be implemented as a
//proximal segment class and a distal segment class.
//Expected inputs:  id (int)     - The segment id, unique to the owner
//                  owner (int)  - The owner id (column or cell)
//                  radius (int) - The radius a segment can reach

#include "Segment.h"

int Segment::radius = 0;


/// CONSTRUCTORS
Segment::Segment()
{
    id = -1;
}

/// SET AND GET METHODS
void Segment::setId(int i)
{
    Segment::id = i;
}
int Segment::getId()
{
    return Segment::id;
}

bool Segment::getActiveState()
{
    return Segment::active;
}

/// STATIC METHODS
void Segment::setRadius(int r)
{
    Segment::radius = r;
}

int Segment::getRadius()
{
    return Segment::radius;
}
