#include <iostream>
#include "figura.h"
#include "bastya.h"
//#include "kiraly.h"
//#include "futo.h"
//#include "vezer.h"
//#include "huszar.h"

using namespace std;

int main()
{
    // Figura osztály teszt: ervenyes függvény
    cout << endl;
    cout << "Figura teszt: ervenyes" << endl;
    cout << Figura::ervenyes("A1") << endl; // 1
    cout << Figura::ervenyes("H8") << endl; // 1
    cout << Figura::ervenyes("D6") << endl; // 1
    cout << Figura::ervenyes("A") << endl; // 0
    cout << Figura::ervenyes("a1") << endl; // 0
    cout << Figura::ervenyes("X1") << endl; // 0
    cout << Figura::ervenyes("A9") << endl; // 0
    cout << Figura::ervenyes("A1d") << endl; // 0

    // Bastya osztály teszt: lephet függvény
    cout << endl;
    cout << "Bastya teszt: lephet" << endl;
    Bastya b1("C5");
    cout << b1.lephet("C5") << endl; // 0
    cout << b1.lephet("C8") << endl; // 1
    cout << b1.lephet("D3") << endl; // 0
    cout << b1.lephet("C4") << endl; // 1
    cout << b1.lephet("E5") << endl; // 1
    cout << b1.lephet("H5") << endl; // 1
    cout << b1.lephet("A3") << endl; // 0

//	// Kiraly osztály teszt: lephet függvény
//	cout << endl;
//	cout << "Kiraly teszt: lephet" << endl;
//	Kiraly k1("C5");
//	cout << k1.lephet("C5") << endl; // 0
//	cout << k1.lephet("C4") << endl; // 1
//	cout << k1.lephet("D4") << endl; // 1
//	cout << k1.lephet("D5") << endl; // 1
//	cout << k1.lephet("D6") << endl; // 1
//	cout << k1.lephet("C6") << endl; // 1
//	cout << k1.lephet("B6") << endl; // 1
//	cout << k1.lephet("B5") << endl; // 1
//	cout << k1.lephet("B4") << endl; // 1
//	cout << k1.lephet("C7") << endl; // 0
//	cout << k1.lephet("E4") << endl; // 0

//	// Figura osztály teszt: odalep függvény
//	cout << endl;
//	cout << "Figura teszt: odalep" << endl;
//	Figura *f1=new Bastya("D4");
//	Figura *f2=new Kiraly("E8");
//	cout << f1->odalep("D9") << endl; // 0
//	cout << f1->getPozicio() << endl; // D4
//	cout << f1->odalep("E3") << endl; // 0
//	cout << f1->getPozicio() << endl; // D4
//	cout << f1->odalep("G4") << endl; // 1
//	cout << f1->getPozicio() << endl; // G4
//	cout << f1->odalep("G2") << endl; // 1
//	cout << f1->getPozicio() << endl; // G2
//	cout << f2->odalep("E6") << endl; // 0
//	cout << f2->getPozicio() << endl; // E8
//	cout << f2->odalep("E7") << endl; // 1
//	cout << f2->getPozicio() << endl; // E7
//	cout << f2->odalep("F6") << endl; // 1
//	cout << f2->getPozicio() << endl; // F6
//	cout << f2->odalep("F6") << endl; // 0
//	cout << f2->getPozicio() << endl; // F6
//	delete f1;
//	delete f2;

//	// Figura osztály teszt: jeloles függvény
//	cout << endl;
//	cout << "Figura teszt: jeloles" << endl;
//	Figura *f3=new Bastya("A2");
//	Figura *f4=new Kiraly("F6");
//	cout << f3->jeloles() << endl; // B
//	cout << f4->jeloles() << endl; // K
//	delete f3;
//	delete f4;

//	// Futo osztály teszt
//	cout << endl;
//	cout << "Futo teszt" << endl;
//	Figura *futo=new Futo("F4");
//	cout << futo->jeloles() << endl; // F
//	cout << futo->lephet("F4") << endl; // 0
//	cout << futo->lephet("F5") << endl; // 0
//	cout << futo->lephet("E5") << endl; // 1
//	cout << futo->lephet("D6") << endl; // 1
//	cout << futo->lephet("C7") << endl; // 1
//	cout << futo->lephet("B8") << endl; // 1
//	cout << futo->lephet("E3") << endl; // 1
//	cout << futo->lephet("H2") << endl; // 1
//	cout << futo->lephet("D2") << endl; // 1
//	cout << futo->lephet("D1") << endl; // 0
//	cout << futo->odalep("D7") << endl; // 0
//	cout << futo->getPozicio() << endl; // F4
//	cout << futo->odalep("H6") << endl; // 1
//	cout << futo->getPozicio() << endl; // H6
//	cout << futo->odalep("F3") << endl; // 0
//	cout << futo->getPozicio() << endl; // H6
//	cout << futo->odalep("C1") << endl; // 1
//	cout << futo->getPozicio() << endl; // C1
//	delete futo;

//	// Vezer osztály teszt
//	cout << endl;
//	cout << "Vezer teszt" << endl;
//	Figura *vezer=new Vezer("A5");
//	cout << vezer->jeloles() << endl; // V
//	cout << vezer->lephet("A5") << endl; // 0
//	cout << vezer->lephet("F5") << endl; // 1
//	cout << vezer->lephet("A8") << endl; // 1
//	cout << vezer->lephet("B6") << endl; // 1
//	cout << vezer->lephet("C7") << endl; // 1
//	cout << vezer->lephet("D8") << endl; // 1
//	cout << vezer->lephet("C3") << endl; // 1
//	cout << vezer->lephet("E1") << endl; // 1
//	cout << vezer->lephet("G3") << endl; // 0
//	cout << vezer->lephet("D1") << endl; // 0
//	cout << vezer->odalep("H6") << endl; // 0
//	cout << vezer->getPozicio() << endl; // A5
//	cout << vezer->odalep("H5") << endl; // 1
//	cout << vezer->getPozicio() << endl; // H5
//	cout << vezer->odalep("F8") << endl; // 0
//	cout << vezer->getPozicio() << endl; // H5
//	cout << vezer->odalep("E8") << endl; // 1
//	cout << vezer->getPozicio() << endl; // E8
//	delete vezer;

//	// Huszar osztály teszt
//	cout << endl;
//	cout << "Huszar teszt" << endl;
//	Figura *huszar=new Huszar("D4");
//	cout << huszar->jeloles() << endl; // H
//	cout << huszar->lephet("D4") << endl; // 0
//	cout << huszar->lephet("E2") << endl; // 1
//	cout << huszar->lephet("F3") << endl; // 1
//	cout << huszar->lephet("F5") << endl; // 1
//	cout << huszar->lephet("E6") << endl; // 1
//	cout << huszar->lephet("C6") << endl; // 1
//	cout << huszar->lephet("B5") << endl; // 1
//	cout << huszar->lephet("B3") << endl; // 1
//	cout << huszar->lephet("C2") << endl; // 1
//	cout << huszar->lephet("D1") << endl; // 0
//	cout << huszar->odalep("H6") << endl; // 0
//	cout << huszar->getPozicio() << endl; // D4
//	cout << huszar->odalep("E6") << endl; // 1
//	cout << huszar->getPozicio() << endl; // E6
//	cout << huszar->odalep("D7") << endl; // 0
//	cout << huszar->getPozicio() << endl; // E6
//	cout << huszar->odalep("D8") << endl; // 1
//	cout << huszar->getPozicio() << endl; // D8
//	delete huszar;
	return 0;
}
