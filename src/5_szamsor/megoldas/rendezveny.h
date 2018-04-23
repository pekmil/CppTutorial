#ifndef RENDEZVENY_H
#define RENDEZVENY_H

#include "szamsor.h"
#include "szemely.h"

class Rendezveny : public Szamsor
{
	Szemely *vendeg;
public:
	Rendezveny();
	Rendezveny(const Rendezveny &r);
	~Rendezveny();

	const Szemely *getKiemeltVendeg() const;
	void setKiemeltVendeg(const Szemely &v);

	void kiir() const;
	void legjobbNap() const;
};

#endif // RENDEZVENY_H
