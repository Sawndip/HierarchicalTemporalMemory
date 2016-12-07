/*
 * ProximalSynapse.cpp
 *
 *  Created on: Nov 27, 2016
 *      Author: Sam Gallagher
 */

#include "ProximalSynapse.h"

bool ProximalSynapse::setLocation(bool * in)
{
	ProximalSynapse::location = in;
	//Catch exception
	return true;
}

bool * ProximalSynapse::getLocation()
{
	return ProximalSynapse::location;
}

bool ProximalSynapse::getLocationIsActive()
{
	//Make sure this is the right way to handle pointers with ::
	return ProximalSynapse::*location;
}
