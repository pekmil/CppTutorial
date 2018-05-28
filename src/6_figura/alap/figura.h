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
    static bool ervenyes(const string& pos);
    virtual bool lephet(const string& pos) override = 0;
};

#endif // FIGURA_H
