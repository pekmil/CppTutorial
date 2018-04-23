#ifndef HALLGATO_H
#define HALLGATO_H

#include "szemely.h"

class Hallgato : public Szemely
{
	string neptun;
	unsigned int felevek;
public:
	Hallgato(const string &v, const string &k, unsigned int kor, const string &neptun, unsigned int felevek=1);
	const string &getNeptun() const;
	unsigned int getFelevek() const;
	void setFelevek(unsigned int value);

	bool furcsa() const;
	void kiir() const;
};

#endif // HALLGATO_H
