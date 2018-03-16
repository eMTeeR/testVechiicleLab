#pragma once
#include"stdafx.h"
#include"Vechicle.h"
#include"Truck.h"
#include"Car.h"
#include<list>

using namespace std;

class VechicleContainer
{

private:
	list<Vechicle *>vechiclesList;	
	int nrOfSlots;

public:
	VechicleContainer();
	VechicleContainer(int nrOfSeats);
	~VechicleContainer();

	bool saveListToFile(string fileName);
	void delateVechicle();

	bool addDataFromFile();
	bool addVechicle(Vechicle * car);
	
	void showVechicleContainer();
	void checkClassName();
	
};

