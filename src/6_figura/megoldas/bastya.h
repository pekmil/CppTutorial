#ifndef BASTYA_H
#define BASTYA_H

#include "figura.h"

class Bastya : public Figura
{
public:
	Bastya(const string &pos);
	bool lephet(const string &pos) const;
	char jeloles() const;
};

#endif // BASTYA_H
