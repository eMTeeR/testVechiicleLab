#pragma once
#include"stdafx.h"
#include "Vechicle.h"


class Car :
	public Vechicle
{
private:
	string body;

public:
	Car();
	Car(string brand, string registerNr, string body);
	~Car();

	friend ostream & operator <<(ostream & otuput,Car & arg);
	friend istream & operator >>(istream & input, Car & arg);

	string getData();
	string getBody();
	void setBody(string body);

	void info();
};

