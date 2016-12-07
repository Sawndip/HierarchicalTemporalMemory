// InputSpace.h
// Sam Gallagher

#ifndef INPUT_SPACE_H
#define INPUT_SPACE_H

#include <vector>

class InputSpace
{
private:
	const int id;
	const int width;
	const std::string name;
	int time;
	std::vector<bool> data;

public:
	InputSpace(int, int, std::string, std::vector<bool>); // id, width, name, data

	//Sets and gets
	bool setData(std::vector<bool>); //Set the data vector
	bool setLocationActive(int,bool);
	bool setTime(int); //A setter for the time. Avoid setting this manually unless there is a time jump

	bool * getLocation(int);	//Get a pointer to a location
	bool getLocationActive(int); //Extract the value from a position
	int getTime();
	int getId();
	int getWidth();
	std::string getName();

};

#endif
