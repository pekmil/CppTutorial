#ifndef ESEMENY_H
#define ESEMENY_H

#include "datum.h"
#include <string>

using namespace std;

class Esemeny : public Datum
{
	string nev;
public:
	Esemeny(const string &_nev, unsigned int _ev, unsigned int _honap, unsigned int _nap);
	Esemeny();
	const string &getNev() const;
	void setNev(const string &value);

	bool korabbi(const Esemeny &e) const;
};

#endif // ESEMENY_H
