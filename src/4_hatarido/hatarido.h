#ifndef HATARIDO_H
#define HATARIDO_H

#include <string>
#include <iostream>

#include "datum.h"

using namespace std;

class Hatarido
{
private:
    string nev;
    Datum* alpha;
    Datum* beta;
    Datum* vegso;
public:
    Hatarido(const string& n);
    ~Hatarido();
    Hatarido(const Hatarido& h);
    string getNev() const;
    void setNev(const string &value);
    const Datum *getAlphaDatum() const;
    void setAlphaDatum(Datum& value);
    const Datum *getBetaDatum() const;
    void setBetaDatum(Datum& value);
    const Datum *getVegsoDatum() const;
    void setVegsoDatum(Datum& value);
    void hataridoTorol(const string& tipus);
};

#endif // HATARIDO_H
