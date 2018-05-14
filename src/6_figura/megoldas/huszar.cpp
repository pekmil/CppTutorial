#include "huszar.h"

Huszar::Huszar(const string &pos):
	Figura(pos)
{
}

bool Huszar::lephet(const string &pos) const
{
	// Itt már csak egy megoldás szerepel, egy viszonylag tömör, de természetesen van több is.
	// A huszár nem maradhat helyben, és egyik irányba kettőt lép, míg a másikba egyet
	if (pos.length()<2) return false;
	int oszlopelteres=pos[0]-pozicio[0], sorelteres=pos[1]-pozicio[1];
	int oszlop_abszolut=(oszlopelteres<0 ? -oszlopelteres : oszlopelteres);
	int sor_abszolut=(sorelteres<0 ? -sorelteres : sorelteres);
	return ((oszlop_abszolut==1 && sor_abszolut==2) || (oszlop_abszolut==2 && sor_abszolut==1));
}

char Huszar::jeloles() const
{
	return 'H';
}
