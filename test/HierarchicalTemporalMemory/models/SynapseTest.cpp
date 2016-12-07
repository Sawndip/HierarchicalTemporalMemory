//SynapseTest.cpp
//Sam Gallagher
//21 July 2016
//
//Test program for the synapse class.

//Includes: "Synapse.h" from models package

#include <iostream>
#include "models/Region.h"

using namespace std;

class Synapse;
class Segment;

int testSynapse()
{
// Synapse object creation
    cout << "Checking for creation of synapse..." << endl;
    Synapse s(0.2, 50);
    cout << s.getPerm() << endl;
    cout << "Synapse should have printed \"0.2\"" << endl;
//Synapse increment
    cout << "Attempting to update the synapse by 0.1..." << endl;
    s.update(0.1);
    cout << s.getPerm() << endl;
    cout << "Should have printed \"0.3\"" << endl;
//Synapse decrement
    cout << "Attempting to decrement synapse permanence by 0.1..." << endl;
    s.update(-0.1);
    cout << s.getPerm() << endl;
    cout << "Should have printed \"0.2\"" << endl;
//Synapse location
    cout << "Attempting to read the synapse location..." << endl;
    cout << s.getLocation() << endl;
    cout << "Should have printed \"50\" " << endl;
//Set threshold
    cout << "Attempting to set the threshold to 0.2..." << endl;
    Synapse::setThreshold(0.5);
    cout << Synapse::getThreshold() << endl;
    cout << "Should have printed \"0.5\"" << endl;
//Increment permanence, check for connection
    cout << "Attempting to connect the synapse..." << endl;
    s.update(0.6);
    cout << s.getConnected() << endl;
    cout << "Should have printed true or \"1\" " << endl;
//Set and get owner
    cout << "Attempting to create a segment and add a synapse..."<< endl;
    Segment seg(1,1);
    s = seg.getSynapse(0);
    cout << s.getOwner() << endl;
    cout << "Should have printed a memory address" << endl;

    cout << "\n\nTest complete." << endl;
    return 0;
}
