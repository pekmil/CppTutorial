#ifndef VEZER_H
#define VEZER_H

#include "figura.h"

class Vezer : public Figura
{
public:
	Vezer(const string &pos);
	bool lephet(const string &pos) const;
	char jeloles() const;
};

#endif // VEZER_H
