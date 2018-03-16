#pragma once
#include"stdafx.h"
#include"Truck.h"
#include"Vechicle.h"


#pragma region Constructors

//--------## Constructors ##--------//

Truck::Truck() {}

Truck::~Truck() {}

Truck::Truck(string brand, string registerNr, string capacity)
	: Vechicle(brand, registerNr), capacity(capacity) {
	this->capacity = capacity;
}

#pragma endregion


#pragma region Overloads

//--------## Overloads ##--------//

ostream & operator <<(ostream & output, Truck & arg) {
	output << arg.getBrand() << " " << arg.getRegisterNr() << " " << arg.capacity << " ";
	return output;
}
/*istream & operator >>(istream & we, Ciezarowy & l) {
we >> l.setMarka  >> l.setNrRej  >> l.setLadownosc ;}*/

#pragma endregion

#pragma region Get Set

//--------## Get Set Save ##--------//

string Truck::getData() {
	Vechicle::getData();
	string output;
	return output = Vechicle::getData() + capacity;
}

string Truck::getCapacity() {
	return capacity;
}
void Truck::setCapacity(string capacity) {
	this->capacity = capacity;
}
#pragma endregion

//--------## Others ##--------//

void Truck::info() {
	Vechicle::info();
	cout << "Ladownosc wynosi : " << capacity << "kilogramow" << endl;
}