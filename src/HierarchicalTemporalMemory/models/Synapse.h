// Synapse.h
// Sam Gallagher
// 21 July 2016
//
// A header file for the Synapse class
// Expected inputs: init (int)      - the initial permanence of the synapse
//                  location (int)  - the point in the input space this synapse is connected to
//                  owner (int)     - the location in memory of the object that owns this synapse
// NONE OF THESE ARE IN THE CONSTRUCTOR, they must be implemented manually. This is due to the
// fact that you can't have an array of objects and construct each one.
// At the moment, you have to give the "location" for a synapse as an int, but I think this should
// be specific - a pointer to a cell (distal) or a pointer to an input space (proximal)

#ifndef __SYNAPSE_H_INCLUDED__
#define __SYNAPSE_H_INCLUDED__

class Segment;

class Synapse
{
private:
    static float threshold;

    int location = -1;
    float permanence = 0.0;
    bool connected = false;
    Segment * owner;

public:
    //Constructors===================//
    Synapse();
    Synapse(float);

    //Static member methods=========//
    static void setThreshold(float);
    static float getThreshold();

    //Object methods================//
    void update(float);

    //Set and get functions=========//
    void setPerm(float);
    float getPerm();
    virtual bool setLocation();
    bool getConnected();
    void setOwner(Segment *);
    Segment * getOwner();
};

#endif

/*
NOTES FOR USING Synapse.h
=========================================
This class creates a synapse with a permanence, a
connected state (bool), and an update method. The
threshold for connection of the synapses is a static
variable. There are static set and get methods for
it, BUT when you set the threshold, you will need to
manually update ALL SYNAPSE INSTANCES if you want the
change to take immediate effect i.e. the set() method
does not automatically update the connected variables,
because these are not static.
*/
