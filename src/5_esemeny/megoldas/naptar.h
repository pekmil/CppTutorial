#ifndef NAPTAR_H
#define NAPTAR_H

#include "esemeny.h"

class Naptar
{
	unsigned int darab;
	Esemeny *esemenyek;
public:
	Naptar(unsigned int db);
	~Naptar();
	Naptar(const Naptar &n);

	const Esemeny &getEsemeny(unsigned int index) const;
	void setEsemeny(unsigned int index, const Esemeny &e);
	void kiir() const;
	void hozzaad(const Esemeny &e);
};

#endif // NAPTAR_H
