// Zadanie z egzaminu wersja 1.cpp : Defines the entry point for the console application.
//

#include"stdafx.h"
#include"VechicleContainer.h"
using namespace std;



int main()
{
	Vechicle a("Auto", "1231221");
	cout<<a.getData();
	cout << endl;

	VechicleContainer carsList(20);
	/*
	listaSamochodow.dodaj(new Osobowy("Skoda", "382718", "Sedan"));
	listaSamochodow.dodaj(new Osobowy("BMW", "456843", "Kombi"));
	listaSamochodow.dodaj(new Ciezarowy("Star", "546846", "24000"));
	listaSamochodow.dodaj(new Ciezarowy("Iveco", "468486", "4500"));
	listaSamochodow.wyswietl();
	cout << endl << endl << "------------## Tutaj usowamy samochod ##------------" << endl << endl;
	listaSamochodow.usun();
	listaSamochodow.wyswietl();

	listaSamochodow.zapisz("lista_Macieja.txt");
	cout << endl;
	listaSamochodow.nazwyKlasy();*/

	carsList.addDataFromFile();
	carsList.showVechicleContainer();
	carsList.saveListToFile("listaMacieja.txt");	



	system("PAUSE");
}

