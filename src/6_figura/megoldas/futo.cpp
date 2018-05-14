#include "futo.h"

Futo::Futo(const string &pos):
	Figura(pos)
{
}

bool Futo::lephet(const string &pos) const
{
	// Itt már csak egy megoldás szerepel, egy viszonylag tömör, de természetesen van több is.
	// A futó nem maradhat helyben, és ugyanannyit lép sorok és oszlopok szerint.
	if (pos.length()<2) return false;
	int oszlopelteres=pos[0]-pozicio[0], sorelteres=pos[1]-pozicio[1];
	int oszlop_abszolut=(oszlopelteres<0 ? -oszlopelteres : oszlopelteres);
	int sor_abszolut=(sorelteres<0 ? -sorelteres : sorelteres);
	return (!(oszlop_abszolut==0 && sor_abszolut==0) && oszlop_abszolut==sor_abszolut);
}

char Futo::jeloles() const
{
	return 'F';
}
