#ifndef BASTYA_H
#define BASTYA_H

#include "figura.h"

#include <iostream>

using namespace std;

class Bastya : public Figura
{
public:
    Bastya(const string &pos);
    //virtual bool lephet(const string &pos);
};

#endif // BASTYA_H
