#include "esemeny.h"

Esemeny::Esemeny(const string &_nev, unsigned int _ev, unsigned int _honap, unsigned int _nap):
	Datum(_ev, _honap, _nap),
	nev(_nev)
{
}

Esemeny::Esemeny():
	Datum(0,0,0),
	nev("")
{
}

const string &Esemeny::getNev() const
{
	return nev;
}

void Esemeny::setNev(const string &value)
{
	nev = value;
}

bool Esemeny::korabbi(const Esemeny &e) const
{
	if (ev<e.ev ||
			(ev==e.ev && honap<e.honap) ||
			(ev==e.ev && honap==e.honap && nap<e.nap))
		return true;
	else return false;
}
