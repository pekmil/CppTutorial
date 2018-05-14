#ifndef REPULO_H
#define REPULO_H

#include "jarmu.h"

class Repulo : public Jarmu
{
	unsigned int utasok;
public:
	Repulo(unsigned int t, unsigned int s, unsigned int u);
	void kiir() const;
};

#endif // REPULO_H
