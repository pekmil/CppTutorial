#include "szamok.h"

Szamok::Szamok(unsigned int m, double alap_ertek) : meret(m)
{
    this->szamok = new double[m];
    for(unsigned int i = 0; i < m; ++i){
        this->szamok[i] = alap_ertek;
    }
}

Szamok::~Szamok()
{
    delete[] szamok;
}

unsigned int Szamok::darabLeker() const
{
    return this->meret;
}

void Szamok::ertekBeallit(unsigned int idx, double ertek)
{
    if(idx >= this->meret) return;

    this->szamok[idx] = ertek;
}

double Szamok::ertekLeker(unsigned int idx) const
{
    if(idx < this->meret){
        return this->szamok[idx];
    }
    else {
        return -1e8;
    }
}
