#include "hatarido.h"

Hatarido::Hatarido(const string& n) : nev(n)
{
    alpha = beta = vegso = 0;
}

Hatarido::~Hatarido()
{
    if(alpha) delete alpha;
    if(beta) delete beta;
    if(vegso) delete vegso;
}

Hatarido::Hatarido(const Hatarido &h) : nev(h.nev)
{
    if(h.alpha) alpha = new Datum(*h.alpha);
    else alpha = 0;
    if(h.beta) beta = new Datum(*h.beta);
    else beta = 0;
    if(h.vegso) vegso = new Datum(*h.vegso);
    else vegso = 0;
}

const Datum *Hatarido::getAlphaDatum() const
{
    return alpha;
}

void Hatarido::setAlphaDatum(Datum& value)
{
    if(alpha == 0) alpha = new Datum(value);
    else *alpha = value;
}

const Datum *Hatarido::getBetaDatum() const
{
    return beta;
}

void Hatarido::setBetaDatum(Datum& value)
{
    if(beta == 0) beta = new Datum(value);
    else *beta = value;
}

const Datum *Hatarido::getVegsoDatum() const
{
    return vegso;
}

void Hatarido::setVegsoDatum(Datum& value)
{
    if(vegso == 0) vegso = new Datum(value);
    else *vegso = value;
}

void Hatarido::hataridoTorol(const string &tipus)
{
    if(tipus == "alpha" && alpha){
        delete alpha;
        alpha = 0;
    }
    else if(tipus == "beta" && beta){
        delete beta;
        beta = 0;
    }
    else if(tipus == "vegso" && vegso){
        delete vegso;
        vegso = 0;
    }
}

string Hatarido::getNev() const
{
    return nev;
}

void Hatarido::setNev(const string &value)
{
    nev = value;
}
