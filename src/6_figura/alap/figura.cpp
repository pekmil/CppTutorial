#include "figura.h"

Figura::Figura(const string &pos):
	pozicio(pos)
{
}

const string &Figura::getPozicio() const
{
    return pozicio;
}

bool Figura::ervenyes(const string &pos)
{
    if(pos.length() != 2) return false;
    char first = pos.at(0);
    char second = pos.at(1);
    return (first >= 'A' && first <= 'H') && (second >= '1' && second <= '8');
}
