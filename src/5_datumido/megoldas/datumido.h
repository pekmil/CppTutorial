#ifndef DATUMIDO_H
#define DATUMIDO_H

#include "datum.h"

class DatumIdo : public Datum
{
	unsigned int ora, perc;
public:
	DatumIdo(unsigned int _ev, unsigned int _honap, unsigned int _nap, unsigned int _ora, unsigned int _perc);
	unsigned int getOra() const;
	void setOra(unsigned int value);
	unsigned int getPerc() const;
	void setPerc(unsigned int value);

	void kiir() const;
};

#endif // DATUMIDO_H
