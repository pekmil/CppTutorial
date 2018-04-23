#include "vizsgalat.h"

Vizsgalat::Vizsgalat()
{
	elso=masodik=harmadik=0;
}

Vizsgalat::~Vizsgalat()
{
	if (elso) delete elso;
	if (masodik) delete masodik;
	if (harmadik) delete harmadik;
}

Vizsgalat::Vizsgalat(const Vizsgalat &v)
{
	if (v.elso) elso=new DatumIdo(*v.elso);
	else elso=0;
	if (v.masodik) masodik=new DatumIdo(*v.masodik);
	else masodik=0;
	if (v.harmadik) harmadik=new DatumIdo(*v.harmadik);
	else harmadik=0;
}

const DatumIdo *Vizsgalat::getElso() const
{
	return elso;
}

void Vizsgalat::setElso(const DatumIdo &di)
{
	if (elso)
	{
		delete elso;
		elso=new DatumIdo(di);
		// vagy
//		*elso=di;
	}
	else elso=new DatumIdo(di);
}

const DatumIdo *Vizsgalat::getMasodik() const
{
	return masodik;
}

void Vizsgalat::setMasodik(const DatumIdo &di)
{
	if (masodik)
	{
		delete masodik;
		masodik=new DatumIdo(di);
	}
	else masodik=new DatumIdo(di);
}

const DatumIdo *Vizsgalat::getHarmadik() const
{
	return harmadik;
}

void Vizsgalat::setHarmadik(const DatumIdo &di)
{
	if (harmadik)
	{
		delete harmadik;
		harmadik=new DatumIdo(di);
	}
	else harmadik=new DatumIdo(di);
}
