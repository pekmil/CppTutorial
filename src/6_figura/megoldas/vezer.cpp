#include "vezer.h"

Vezer::Vezer(const string &pos):
	Figura(pos)
{
}

bool Vezer::lephet(const string &pos) const
{
	// Itt már csak egy megoldás szerepel, egy viszonylag tömör, de természetesen van több is.
	// A vezér nem maradhat helyben, és mind a bástya, mind a futó lépéseit tudja.
	if (pos.length()<2) return false;
	int oszlopelteres=pos[0]-pozicio[0], sorelteres=pos[1]-pozicio[1];
	int oszlop_abszolut=(oszlopelteres<0 ? -oszlopelteres : oszlopelteres);
	int sor_abszolut=(sorelteres<0 ? -sorelteres : sorelteres);
	if (oszlop_abszolut==0 && sor_abszolut==0) return false;
	else if (oszlop_abszolut==sor_abszolut) return true;
	else if ((pos[0]==pozicio[0]) ^ (pos[1]==pozicio[1])) return true;
	else return false;
}

char Vezer::jeloles() const
{
	return 'V';
}
