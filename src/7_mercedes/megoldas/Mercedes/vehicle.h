#ifndef VECHICLE_H
#define VECHICLE_H

#include <string>
#include <iostream>

using namespace std;

namespace Mercedes
{

class Vechicle
{
protected:
    int price;
    float consumption;
    string motor;
    int doors;
    float engine_size;

public:
    Vechicle(int _p, float _c, string _m, int _d, float _e);
    virtual ~Vechicle();

    virtual void print() const = 0;
};

} // namespace Mercedes

#endif // VECHICLE_H
