/*
 * InputSpace.cpp
 *
 *  Created on: Nov 27, 2016
 *      Author: Sam Gallagher
 */

#include "InputSpace.h"

InputSpace::InputSpace(int i, int w, std::string n, std::vector<bool> d)
{
	InputSpace::id = i;
	InputSpace::width = w;
	InputSpace::name = n;
	InputSpace::time = -1;

	if(d.size == w)
		InputSpace::data = d;

}

bool InputSpace::setData(std::vector<bool> d)
{
	if(d.size() == InputSpace::width)
	{
		InputSpace::data = d;
		return true;
	}
	else return false;
}

bool InputSpace::setLocationActive(int j,bool a)
{
	InputSpace::data.at(j) = a;
	return true;
}
bool InputSpace::setTime(int t)
{
	if(t >= -1)
	{
		InputSpace::time = t;
		return true;
	}
	else return false;
}
bool * InputSpace::getLocation(int j)
{
	if(j > 0 && j < InputSpace::data.size())
		return &InputSpace::data.at(j);
	else return nullptr;
}
bool InputSpace::getLocationActive(int j)
{
	if(j > 0 && j < InputSpace::data.size()) //If in range
		return InputSpace::data.at(j);
	else
		return nullptr;
}
int InputSpace::getTime()
{
	return InputSpace::time;
}
int InputSpace::getId()
{
	return InputSpace::id;
}
int InputSpace::getWidth()
{
	return InputSpace::width;
}
std::string InputSpace::getName()
{
	return InputSpace::name;
}
