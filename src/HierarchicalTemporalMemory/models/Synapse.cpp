// Synapse.cpp
// Sam Gallagher
// 21 July 2016
//
// A header file for the Synapse class
// Expected inputs: init (int)      - the initial permanence of the synapse
//                  location (int)  - the point in the input space this synapse is connected to
//                  owner (int)     - the location in memory of the object that owns this synapse

#include "Synapse.h"

float Synapse::threshold = 0.0;

Synapse::Synapse(float init)
{
    permanence = init;
    return;
}

Synapse::Synapse()
{
    return;
}

//STATIC METHODS
void Synapse::setThreshold(float thresh_in)
{
    Synapse::threshold = thresh_in;
}
float Synapse::getThreshold()
{
    return Synapse::threshold;
}

//UPDATE METHOD
//Takes in the increment (positive or negative) and adds it
//to the permanence. Then checks for connection.
void Synapse::update(float inc)
{
    permanence = permanence + inc;
    if(permanence < 0) permanence = 0;
    else if(permanence > 1) permanence = 1;

    if(permanence < Synapse::threshold){
        connected = false;
    }
    else if(permanence >= Synapse::threshold){
        connected = true;
    }
}

//SET AND GET METHODS
void Synapse::setPerm(float p)
{
    permanence = p;
    update(0);
}
float Synapse::getPerm()
{
    return permanence;
}
bool Synapse::getConnected()
{
    return connected;
}

void Synapse::setOwner(Segment* own)
{
    owner = own;
}

Segment* Synapse::getOwner()
{
    return owner;
}
