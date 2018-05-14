#ifndef HAJO_H
#define HAJO_H

#include "jarmu.h"

class Hajo : public Jarmu
{
	unsigned int teherbiras;
public:
	Hajo(unsigned int t, unsigned int s, unsigned int teher);
	void kiir() const;
};

#endif // HAJO_H
