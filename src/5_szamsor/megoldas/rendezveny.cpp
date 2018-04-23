#include "rendezveny.h"
#include <iostream>

Rendezveny::Rendezveny():
	Szamsor(7),
	vendeg(0)
{
}

Rendezveny::Rendezveny(const Rendezveny &r):
	Szamsor(r)
{
	if (r.vendeg) vendeg=new Szemely(*r.vendeg);
	else vendeg=0;
}

Rendezveny::~Rendezveny()
{
	if (vendeg) delete vendeg;
}

const Szemely *Rendezveny::getKiemeltVendeg() const
{
	return vendeg;
}

void Rendezveny::setKiemeltVendeg(const Szemely &v)
{
	if (vendeg) delete vendeg;
	vendeg=new Szemely(v);
}

void Rendezveny::kiir() const
{
	cout << "Kiemelt vendeg: ";
	if (vendeg) cout << vendeg->teljesNev() << " (" << vendeg->getEletkor() << ") " << endl;
	else cout << " nincs" << endl;
	for (unsigned int i=0; i<darab; i++)
	{
		if (i>0) cout << ", ";
		cout << tomb[i];
	}
	cout << endl;
}

void Rendezveny::legjobbNap() const
{
	int max_idx=0;
	for (unsigned int i=1; i<darab; i++)
	{
		if (tomb[i]>tomb[max_idx]) max_idx=i;
	}
	cout << "A rendezveny " << max_idx+1 << ". napjan volt a legtobb vendeg." << endl;
}
