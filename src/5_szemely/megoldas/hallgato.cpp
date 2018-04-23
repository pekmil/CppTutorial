#include "hallgato.h"

#include <iostream>

Hallgato::Hallgato(const string &v, const string &k, unsigned int kor, const string &neptun, unsigned int felevek):
	Szemely(v, k, kor),
	neptun(neptun),
	felevek(felevek)
{
}

const string &Hallgato::getNeptun() const
{
	return neptun;
}

unsigned int Hallgato::getFelevek() const
{
	return felevek;
}

void Hallgato::setFelevek(unsigned int value)
{
	felevek = value;
}

bool Hallgato::furcsa() const
{
	return (eletkor-felevek/2)<18;
}

void Hallgato::kiir() const
{
	Szemely::kiir();
	cout << "  " <<  neptun << ", befejezett felevek: " << felevek << endl;

}
