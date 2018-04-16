#include "datumlista.h"

DatumLista::DatumLista(int d, const string& m) : darab(d), megjegyzes(m)
{
    datumok = new Datum[darab];
}

DatumLista::~DatumLista()
{
    delete[] datumok;
}

DatumLista::DatumLista(const DatumLista &dl) : darab(dl.darab), megjegyzes(dl.megjegyzes)
{
    datumok = new Datum[dl.darab];
    for(int i = 0; i < darab; ++i){
        datumok[i] = dl.datumok[i];
    }
}

const Datum& DatumLista::getDatum(int idx) const {
    return datumok[idx];
}

void DatumLista::setDatum(int idx, const Datum& d){
    if(idx >= 0 && idx < darab){
        datumok[idx] = d;
    }
}

const string& DatumLista::getMegjegyzes() const
{
    return megjegyzes;
}

void DatumLista::setMegjegyzes(const string &value)
{
    megjegyzes = value;
}

int DatumLista::getDarab() const
{
    return darab;
}

void DatumLista::hozzaad(const Datum &d)
{
    Datum* datumok = new Datum[darab + 1];
    int i = 0;
    for(; i < darab; ++i){
        datumok[i] = this->datumok[i];
    }
    datumok[i] = d;
    darab++;
    delete[] this->datumok;
    this->datumok = datumok;
}

const Datum &DatumLista::legkorabbi() const
{
    int min_idx=0;
    for (int i=1; i<darab; i++){
        if (datumok[min_idx].getEv()>datumok[i].getEv() ||
                (datumok[min_idx].getEv()==datumok[i].getEv() && datumok[min_idx].getHonap()>datumok[i].getHonap()) ||
                (datumok[min_idx].getEv()==datumok[i].getEv() && datumok[min_idx].getHonap()==datumok[i].getHonap() && datumok[min_idx].getNap()==datumok[i].getNap()))
            min_idx=i;
    }
    return datumok[min_idx];
}

