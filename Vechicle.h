#pragma once
#include"stdafx.h"
#include<iostream>
#include <string>


using namespace std;

class Vechicle
{
private:
	string brand;
	string registerNr;

public:
	Vechicle();
	Vechicle(string brand, string registerNr);
	~Vechicle();

	friend ostream & operator <<(ostream & output,Vechicle & arg);
	friend istream & operator >>(istream & input, Vechicle & arg);

	virtual string getData();
	virtual void saveData();
	string getBrand();
	void setBrand(string brand);
	string getRegisterNr();
	void setRegisterNr(string registerNr);

	virtual void info();
	bool compareRegisterNr(string nrRej);

	

};

