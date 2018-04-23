#include "szamsor.h"

Szamsor::Szamsor(unsigned int db):
	darab(db)
{
	tomb=new int[db];
}

Szamsor::Szamsor(const Szamsor &sz):
	darab(sz.darab)
{
	tomb=new int[darab];
	for (unsigned int i=0; i<darab; i++)
		tomb[i]=sz.tomb[i];
}

Szamsor::~Szamsor()
{
	delete [] tomb;
}

unsigned int Szamsor::getDarab() const
{
	return darab;
}

int Szamsor::getErtek(unsigned int index) const
{
	return tomb[index];
}

void Szamsor::setErtek(unsigned int index, int ertek)
{
	if (index<darab)
		tomb[index]=ertek;
}
