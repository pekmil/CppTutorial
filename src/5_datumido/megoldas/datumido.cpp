#include "datumido.h"

#include <iostream>

using namespace std;

DatumIdo::DatumIdo(unsigned int _ev, unsigned int _honap, unsigned int _nap, unsigned int _ora, unsigned int _perc):
	Datum(_ev, _honap, _nap),
	ora(_ora),
	perc(_perc)
{
}

unsigned int DatumIdo::getOra() const
{
	return ora;
}

void DatumIdo::setOra(unsigned int value)
{
	ora = value;
}

unsigned int DatumIdo::getPerc() const
{
	return perc;
}

void DatumIdo::setPerc(unsigned int value)
{
	perc = value;
}

void DatumIdo::kiir() const
{
	cout << ev << "." << honap << "." << nap << " " << ora << ":" << perc << endl;
}
