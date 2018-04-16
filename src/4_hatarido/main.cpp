#include <iostream>
#include "hatarido.h"

using namespace std;

void datumKiir(const Datum *d)
{
	if (d==0) cout << "Nem letezo datum" << endl;
	else cout << d->getEv() << "." << d->getHonap() << "." << d->getNap() << endl;
}

void hataridotKiir(const Hatarido &h)
{
	cout << h.getNev() << ": " << endl;
	cout << "  alpha: ";
	datumKiir(h.getAlphaDatum());
	cout << "  beta: ";
	datumKiir(h.getBetaDatum());
	cout << "  vegso: ";
	datumKiir(h.getVegsoDatum());
}

int main()
{
	// Létrehozás és név beállítás
	Hatarido h1("Elso tarolo osztaly");
	cout << "Kerek egy masik nevet: ";
	string nev;
	getline(cin, nev); // Teljes sor bekérése
	Hatarido h2(nev);
	cout << h1.getNev() << endl;
	cout << h2.getNev() << endl;
	h1.setNev("Atallitott nev");
	cout << h1.getNev() << endl;
	cout << h2.getNev() << endl;

	// Dátum beállítása
	cout << endl;
	h1.setAlphaDatum(Datum(2017, 3, 6));
	cout << "Kerek egy datumot (ev, honap, nap): ";
	unsigned int e, h, n;
	cin >> e >> h >> n;
	h1.setVegsoDatum(Datum(e,h,n));
	cout << "Kerek meg egy datumot (ev, honap, nap): ";
	cin >> e >> h >> n;
	Datum d(e,h,n);
	h2.setBetaDatum(d);
	hataridotKiir(h1);
	hataridotKiir(h2);

	// Dátum átállítása és törlése
	cout << endl;
	h1.setVegsoDatum(Datum(2000,1,1));
	h1.hataridoTorol("alpha"); // Ezt kitörli
	h1.hataridoTorol("beta"); // Itt nincs dátum tárolva
	h1.hataridoTorol("gamma"); // Ilyen meg nincs is
	hataridotKiir(h1);

	// Másolat készítése
	cout << endl;
	Hatarido uj(h1);
	hataridotKiir(h1);
	hataridotKiir(uj);
	uj.setNev("UJ");
	uj.setBetaDatum(Datum(1996,8,9));
	hataridotKiir(h1);
	hataridotKiir(uj);

	return 0;
}
