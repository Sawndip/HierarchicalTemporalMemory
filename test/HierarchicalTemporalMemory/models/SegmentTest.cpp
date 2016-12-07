//SegmentTest.cpp
//Sam Gallagher
//21 July 2016
//
//A test program for the Segment class

#include <iostream>
#include "models/Region.h"

using namespace std; //Save some typing for all the print outs

class Segment;

int main()
{
//Creation
    cout << "Attempting to create segment..." << endl;
    Segment p(1);
    cout << p.getId() << endl;
    cout << "Should have printed \"1\" " << endl;

//Set radius
    cout << "Attempting to set radius..." << endl;
    Segment::setRadius(90);
    cout << Segment::getRadius() << endl;
    cout << "Should have printed \"90\" " << endl;

    return 0;
}
