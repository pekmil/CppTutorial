#ifndef VIZSGALAT_H
#define VIZSGALAT_H

#include <datumido.h>

class Vizsgalat
{
	DatumIdo *elso, *masodik, *harmadik;
public:
	Vizsgalat();
	~Vizsgalat();
	Vizsgalat(const Vizsgalat &v);

	const DatumIdo *getElso() const;
	void setElso(const DatumIdo &di);
	const DatumIdo *getMasodik() const;
	void setMasodik(const DatumIdo &di);
	const DatumIdo *getHarmadik() const;
	void setHarmadik(const DatumIdo &di);
};

#endif // VIZSGALAT_H
