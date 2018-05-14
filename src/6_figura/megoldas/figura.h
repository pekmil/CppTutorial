#ifndef FIGURA_H
#define FIGURA_H

#include <string>

using namespace std;

class Figura
{
protected:
	string pozicio;
public:
	Figura(const string &pos);
	const string &getPozicio() const;

	virtual ~Figura();

	static bool ervenyes(const string &pos);
	virtual bool lephet(const string &pos) const = 0;
	bool odalep(const string &pos);
	virtual char jeloles() const = 0;
};

#endif // FIGURA_H
