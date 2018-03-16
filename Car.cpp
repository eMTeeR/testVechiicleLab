#pragma once
#include"stdafx.h"
#include "Car.h"
#include"Vechicle.h"


#pragma region Constructors

//--------## Constructors ##--------//

Car::Car() {}

Car::~Car() {}

Car::Car(string brand, string registerNr, string body)
	: Vechicle(brand, registerNr), body(body)
{
	this->body = body;
}

#pragma endregion

#pragma region Overloads

//--------## Overloads ##--------//

ostream & operator <<(ostream & otuput, Car & arg) {
	otuput << arg.getBrand() << " " << arg.getRegisterNr() << " " << arg.body << " ";
	return otuput;
}
//istream & operator >>(istream & we, Osobowy & l) {
//we >> l.setMarka  >> l.setNrRej  >> l.setNadwozie ;
//}

#pragma endregion

#pragma region Get Set

//--------## Get Set Save ##--------//

string Car::getData() {
	Vechicle::getData();
	string output;
	return output = Vechicle::getData() + body;
}

string Car::getBody() {
	return body;
}
void Car::setBody(string nadwozie) {
	this->body = nadwozie;
}
#pragma endregion

//--------## Others ##--------//

void Car::info() {

	Vechicle::info();
	cout << "Typ nadwozia to: " << body << endl;
}