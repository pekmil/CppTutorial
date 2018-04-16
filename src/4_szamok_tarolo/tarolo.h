#ifndef TAROLO_H
#define TAROLO_H

#include <iostream>

using namespace std;

class Tarolo
{
private:
    int* szamok;
    unsigned int meret;
public:
    Tarolo(unsigned int m);
    Tarolo();
    ~Tarolo();

    void kiir() const;
    void hozzaad(int ertek);
    double atlag() const;
    unsigned int lekerMeret() const;
};

#endif // TAROLO_H
