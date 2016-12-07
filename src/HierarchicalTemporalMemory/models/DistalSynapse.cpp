/*
 * DistalSynapse.cpp
 *
 *  Created on: Nov 27, 2016
 *      Author: Sam Gallagher
 */

#include "DistalSynapse.h"

bool DistalSynapse::setLocation(Cell * farCell)
{
	DistalSynapse::location = farCell;
	return true;
}

Cell * DistalSynapse::getLocation()
{
	return DistalSynapse::location;
}

bool DistalSynapse::getLocationIsActive()
{
	//return cell activity
	return false;
}
bool DistalSynapse::getLocationIsPred()
{
	//return cell predictivity
	return false;
}
