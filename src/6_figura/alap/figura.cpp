#include "figura.h"

Figura::Figura(const string &pos):
	pozicio(pos)
{
}

const string &Figura::getPozicio() const
{
	return pozicio;
}
