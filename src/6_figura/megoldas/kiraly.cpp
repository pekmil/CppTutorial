#include "kiraly.h"

Kiraly::Kiraly(const string &pos):
	Figura(pos)
{
}

bool Kiraly::lephet(const string &pos) const
{
	if (pos.length()<2) return false; // Biztos, ami biztos, legyen meg a két karakter.
	int oszlopelteres=pos[0]-pozicio[0], sorelteres=pos[1]-pozicio[1]; // Alapvető megközelítés: max egyet léphet mindkét irányba.

	// Egy lehetőség: mind a 8 esetet ellenőrizzük külön.
//	if (oszlopelteres==1 && sorelteres==1) return true;
//	else if (oszlopelteres==1 && sorelteres==0) return true;
//	else if (oszlopelteres==1 && sorelteres==-1) return true;
//	else if (oszlopelteres==0 && sorelteres==-1) return true;
//	else if (oszlopelteres==-1 && sorelteres==-1) return true;
//	else if (oszlopelteres==-1 && sorelteres==0) return true;
//	else if (oszlopelteres==-1 && sorelteres==1) return true;
//	else if (oszlopelteres==0 && sorelteres==1) return true;
//	else return false;

	// Másik lehetőség: számolhatunk az abszolút értékekkel, és akkor nincs -1.
//	int oszlop_abszolut=(oszlopelteres<0 ? -oszlopelteres : oszlopelteres);
//	int sor_abszolut=(sorelteres<0 ? -sorelteres : sorelteres);
//	if (oszlop_abszolut==1 && sor_abszolut==1) return true;
//	else if (oszlop_abszolut==1 && sor_abszolut==0) return true;
//	else if (oszlop_abszolut==0 && sor_abszolut==1) return true;
//	else return false;

	// Harmadik lehetőség: az abszolút eltérések maximuma pontosan 1.
	int oszlop_abszolut=(oszlopelteres<0 ? -oszlopelteres : oszlopelteres);
	int sor_abszolut=(sorelteres<0 ? -sorelteres : sorelteres);
	int abszolut_max=(oszlop_abszolut>sor_abszolut ? oszlop_abszolut : sor_abszolut);
	return abszolut_max==1;

	// Természetesen más megoldás is lehetséges.
}

char Kiraly::jeloles() const
{
	return 'K';
}
