#include "naptar.h"
#include <iostream>

Naptar::Naptar(unsigned int db):
	darab(db)
{
	esemenyek=new Esemeny[darab];
}

Naptar::~Naptar()
{
	delete [] esemenyek;
}

Naptar::Naptar(const Naptar &n):
	darab(n.darab)
{
	esemenyek=new Esemeny[darab];
	for (unsigned int i=0; i<darab; i++)
		esemenyek[i]=n.esemenyek[i];
}

const Esemeny &Naptar::getEsemeny(unsigned int index) const
{
	return esemenyek[index];
}

void Naptar::setEsemeny(unsigned int index, const Esemeny &e)
{
	if (index<darab)
		esemenyek[index]=e;
}

void Naptar::kiir() const
{
	for (unsigned int i=0; i<darab; i++)
	{
		const Esemeny &e=esemenyek[i]; // mert így rövidebb
		cout << e.getNev() << ": " << e.getEv() << "." << e.getHonap() << "." << e.getNap() << endl;
	}
}

void Naptar::hozzaad(const Esemeny &e)
{
	Esemeny *uj=new Esemeny[darab+1];
	for (unsigned int i=0; i<darab; i++)
		uj[i]=esemenyek[i];
	uj[darab]=e;
	darab++;
	delete [] esemenyek;
	esemenyek=uj;
}
