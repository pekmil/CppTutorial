#ifndef SZAMOK_H
#define SZAMOK_H


class Szamok
{
private:
    unsigned int meret;
    double* szamok;
public:
    Szamok(unsigned int m, double alap_ertek = 0);
    ~Szamok();
    unsigned int darabLeker() const;
    void ertekBeallit(unsigned int idx, double ertek);
    double ertekLeker(unsigned int idx) const;
};

#endif // SZAMOK_H
