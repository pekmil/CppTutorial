#include "bastya.h"

Bastya::Bastya(const string &pos):
	Figura(pos)
{
}

bool Bastya::lephet(const string &pos) const
{
	if (pos.length()<2) return false; // Biztos, ami biztos, legyen meg a két karakter.

	// Egy lehetőség: rendesen kifejtjük a feltételeket.
//	if (pos[0]==pozicio[0] || pos[1]==pozicio[1]) // Legalább a sor vagy az oszlop ugyanaz kell hogy legyen.
//	{
//		if (pos[0]==pozicio[0] && pos[1]==pozicio[1]) return false; // De ha mindkettő ugyanaz, akkor nem jó.
//		else return true;
//	}
//	else
//	{
//		return false;
//	}

	// Másik lehetőség: Egy összetett logikai kifejezéssé tömöríthető.
//	return ((pos[0]==pozicio[0] || pos[1]==pozicio[1]) && !(pos[0]==pozicio[0] && pos[1]==pozicio[1]));

	// Harmadik lehetőség: pontosan vagy a sor vagy az oszlop egyezik meg, de nem mindkettő => kizáró vagy.
	return ((pos[0]==pozicio[0]) ^ (pos[1]==pozicio[1]));

	// Természetesen más megoldás is lehetséges.
}

char Bastya::jeloles() const
{
	return 'B';
}
