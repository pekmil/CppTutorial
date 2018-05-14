#ifndef KIRALY_H
#define KIRALY_H

#include "figura.h"

class Kiraly : public Figura
{
public:
	Kiraly(const string &pos);
	bool lephet(const string &pos) const;
	char jeloles() const;
};

#endif // KIRALY_H
