#ifndef HUSZAR_H
#define HUSZAR_H

#include "figura.h"

class Huszar : public Figura
{
public:
	Huszar(const string &pos);
	bool lephet(const string &pos) const;
	char jeloles() const;
};

#endif // HUSZAR_H
