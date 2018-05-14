#include "figura.h"

Figura::Figura(const string &pos):
	pozicio(pos)
{
}

const string &Figura::getPozicio() const
{
	return pozicio;
}

Figura::~Figura()
{
}

bool Figura::ervenyes(const string &pos)
{
	if (pos.length()!=2) return false;
	return (pos[0]>='A' && pos[0]<='H' && pos[1]>='1' && pos[1]<='8');
}

bool Figura::odalep(const string &pos)
{
	if (ervenyes(pos) && lephet(pos))
	{
		pozicio=pos;
		return true;
	}
	else return false;
}
