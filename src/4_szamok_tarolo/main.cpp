#include <iostream>

#include "szamok.h"
#include "tarolo.h"

using namespace std;

void kiir(const Szamok& sz){
    for(unsigned int i = 0; i < sz.darabLeker(); ++i){
        cout << sz.ertekLeker(i) << ", ";
    }
    cout << endl;
}

int kisebbTarolo(const Tarolo& t1, const Tarolo& t2){
    if(t1.lekerMeret() < t2.lekerMeret()){
        return -1;
    }
    else if(t1.lekerMeret() > t2.lekerMeret()){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    Szamok sz1(3);
    Szamok sz2(5, 2.5);

    sz1.ertekBeallit(0, 1.1);
    sz1.ertekBeallit(1, 1.2);
    sz1.ertekBeallit(2, 1.3);

    sz2.ertekBeallit(0, 1.5);
    sz2.ertekBeallit(2, 2.5);
    sz2.ertekBeallit(4, 3.5);

    kiir(sz1);
    kiir(sz2);

    Tarolo t1;
    Tarolo t2(10);

    t1.kiir();
    t2.kiir();

    cout << "t1 atlag: " << t1.atlag() << endl;
    cout << "t2 atlag: " << t2.atlag() << endl;

    t1.hozzaad(11);
    t1.hozzaad(12);
    t1.hozzaad(13);
    t1.kiir();

    cout << "kisebbTarolo(t1, t2): " << kisebbTarolo(t1, t2) << endl;

    return 0;
}
