#include "tarolo.h"

Tarolo::Tarolo(unsigned int m)
{
    this->szamok = new int[m];
    for(unsigned int i = 0; i < m; ++i){
        this->szamok[i] = i+1;
    }
    this->meret = m;
}

Tarolo::Tarolo()
{
    cout << "Meret: ";
    unsigned int meret;
    cin >> meret;
    this->szamok = new int[meret];
    for(unsigned int i = 0; i < meret; ++i){
        cout << (i+1) << ". szam: ";
        cin >> this->szamok[i];
    }
    this->meret = meret;
}

Tarolo::~Tarolo()
{
    delete[] this->szamok;
}

void Tarolo::kiir() const
{
    cout << "Szamok: ";
    for(unsigned int i = 0; i < this->meret; ++i){
        cout << this->szamok[i] << ", ";
    }
    cout << endl;
}

void Tarolo::hozzaad(int ertek)
{
    int* szamok = new int[this->meret + 1];
    unsigned int i = 0;
    for(; i < this->meret; ++i){
        szamok[i] = this->szamok[i];
    }
    szamok[i] = ertek;
    this->meret++;
    delete[] this->szamok;
    this->szamok = szamok;
}

double Tarolo::atlag() const
{
    double szum = 0;
    for(unsigned int i = 0; i < this->meret; ++i){
        szum += this->szamok[i];
    }
    return szum / this->meret;
}

unsigned int Tarolo::lekerMeret() const
{
    return this->meret;
}
