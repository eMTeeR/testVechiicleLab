#pragma once
#include"stdafx.h"
#include "VechicleContainer.h"
#include <fstream>
#include <sstream>


#pragma region Constructors

//--------## Constructors ##--------//

VechicleContainer::VechicleContainer() {
}

VechicleContainer::VechicleContainer(int numOfSlots) {
	this->nrOfSlots = numOfSlots;
}

VechicleContainer::~VechicleContainer() {
}
#pragma endregion

#pragma region Save Delate

//--------## Save Delate ##--------//

bool VechicleContainer::saveListToFile(string fileName) {
	ofstream file(fileName);
	if (!file.is_open())
		return false;
	for (list <Vechicle *> ::iterator it = vechiclesList.begin(); it != vechiclesList.end(); it++) {
		file << (*it)->getData() << endl;
	}
	file.close();
	return true;
}

void VechicleContainer::delateVechicle() {
	string tmpRegisterNr;
	cout << "Podaj nr rejestracyjny wybranego samochody: ";
	cin >> tmpRegisterNr;
	for (list <Vechicle *> ::iterator it = vechiclesList.begin(); it != vechiclesList.end(); it++) {
		if (((*it)->compareRegisterNr(tmpRegisterNr))) {
			cout << "Usunieto pojazd: " << endl;
			(*it)->info();
			vechiclesList.erase(it);
			cout << endl << "------## Koniec usuwania ##------" << endl << endl;
			return;
		}
	}
}
#pragma endregion

#pragma region Get Set

//--------## Get Set ##--------//

bool VechicleContainer::addVechicle(Vechicle * car) {
	if (vechiclesList.size() == nrOfSlots)
		return false;
	else
		vechiclesList.push_back(car);
	return true;
}

bool VechicleContainer::addDataFromFile() {
	string fileName;
	cout << "Podaj nazwe pliku ";
	cin >> fileName;
	ifstream file;
	file.open(fileName);
	if (!file.good()) {
		cout << "Bledny plik " << endl;
		return false;
	}
	cout << "Poprawny plik " << endl;
	string tmp1, tmp2, tmp3;
	string fileLine;
	if (vechiclesList.size() == nrOfSlots) {
		cout << "Lista przepelniona ";
		return false;
	}
	for (int i = 0; i < 4; i++)
	{
		getline(file, fileLine);
		istringstream iss(fileLine);
		iss >> tmp1 >> tmp2 >> tmp3;
		if (tmp1.compare("Skoda"))
			vechiclesList.push_back(new Car(tmp1, tmp2, tmp3));
		else if (tmp1.compare("BMW"))
			vechiclesList.push_back(new Car(tmp1, tmp2, tmp3));
		else if (tmp1.compare("Iveco"))
			vechiclesList.push_back(new Truck(tmp1, tmp2, tmp3));
		else if (tmp1.compare("Star"))
			vechiclesList.push_back(new Truck(tmp1, tmp2, tmp3));
	}
	file.close();
	return true;
}

#pragma endregion

#pragma region Others

//--------## Others ##--------//

void VechicleContainer::showVechicleContainer() {

	if (vechiclesList.size() == 0) {
		cout << "Lista jest pusta" << endl;
	}
	for (list<Vechicle *> ::iterator it = vechiclesList.begin(); it != vechiclesList.end(); it++) {
		(*it)->info();
	}
}

void VechicleContainer::checkClassName() {
	for (list <Vechicle *> ::iterator it = vechiclesList.begin(); it != vechiclesList.end(); it++) {
		cout << typeid(it).name() << endl;
	}
}
#pragma endregion














