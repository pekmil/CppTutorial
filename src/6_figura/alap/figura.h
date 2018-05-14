#ifndef FIGURA_H
#define FIGURA_H

#include <string>

using namespace std;

class Figura
{
	string pozicio;
public:
	Figura(const string &pos);
	const string &getPozicio() const;
};

#endif // FIGURA_H
