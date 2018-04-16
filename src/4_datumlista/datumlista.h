#ifndef DATUMLISTA_H
#define DATUMLISTA_H

#include <iostream>
#include <string>

#include "datum.h"

using namespace std;

class DatumLista
{
private:
    Datum* datumok;
    int darab;
    string megjegyzes;
public:
    DatumLista(int d, const string& m);
    ~DatumLista();
    DatumLista(const DatumLista& dl);
    const string& getMegjegyzes() const;
    void setMegjegyzes(const string &value);
    const Datum& getDatum(int idx) const;
    void setDatum(int idx, const Datum& d);
    int getDarab() const;
    void hozzaad(const Datum& d);
    const Datum& legkorabbi() const;
};

#endif // DATUMLISTA_H
