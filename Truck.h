#pragma once
#include"stdafx.h"
#include "Vechicle.h"



class Truck :
	public Vechicle
{
private:
	string capacity;

public:
	Truck();
	Truck(string brand, string registerNr, string capacity);
	~Truck();

	friend ostream & operator <<(ostream & output, Truck & arg);
	friend istream & operator >>(istream & input, Truck & arg);

	string getData();
	string getCapacity();
	void setCapacity(string capacity);

	void info();
};


