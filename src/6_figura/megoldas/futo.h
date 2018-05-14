#ifndef FUTO_H
#define FUTO_H

#include "figura.h"

class Futo : public Figura
{
public:
	Futo(const string &pos);
	bool lephet(const string &pos) const;
	char jeloles() const;
};

#endif // FUTO_H
