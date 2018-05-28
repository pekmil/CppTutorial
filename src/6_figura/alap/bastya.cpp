#include "bastya.h"

Bastya::Bastya(const string &pos) : Figura(pos)
{

}

/*bool Bastya::lephet(const string &pos)
{
    const string& p = getPozicio();
    if(p.compare(pos) == 0) return false;
    char first = p.at(0);
    char second = p.at(1);
    char newFirst = pos.at(0);
    char newSecond = pos.at(1);
    return (first == newFirst) || (second == newSecond);
}*/
