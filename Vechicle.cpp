#pragma once
#include"stdafx.h"
#include "Vechicle.h"


#pragma region Constructors

//--------## Constructors ##--------//

Vechicle::Vechicle(){}

Vechicle::~Vechicle(){}

Vechicle::Vechicle(string brand, string registerNr) {

	this->brand = brand;
	this->registerNr = registerNr;
}
#pragma endregion

#pragma region Overloads

//--------## Overloads ##--------//

ostream & operator <<(ostream & output, Vechicle & arg) {
	output << arg.brand << " " << arg.registerNr << " ";
	return output;
}
/*istream & operator >>(istream & we, Samochod & l) {
	/we >> l.setMarka >> l.setNrRej ;	}*/
#pragma endregion

#pragma region Get Set Save

//--------## Get Set Save ##--------//

string Vechicle::getBrand() {
	return brand;
}
void Vechicle::setBrand(string brand) {
	this->brand = brand;
}
string Vechicle::getRegisterNr() {
	return registerNr;
}
void Vechicle::setRegisterNr(string registerNr) {
	this->registerNr = registerNr;
}
string Vechicle::getData() {
	string output;
	return output = brand + " " + registerNr + " ";
}
void Vechicle::saveData() {
	cin >> brand >> registerNr;
	Vechicle::Vechicle(brand, registerNr);
}
#pragma endregion

#pragma region Others

//--------## Others ##--------

void Vechicle::info() {
	std::cout << "Marka samochodu to: " << brand << endl << "Nr rejestracyjny to: " << registerNr << endl;
}

bool Vechicle::compareRegisterNr(string registerNr) {
	if (this->registerNr.compare(registerNr) == 0)
		return true;
	return false;
}

#pragma endregion




	
