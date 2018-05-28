#include "vehicle.h"

namespace Mercedes
{

Vechicle::Vechicle(int _p, float _c, string _m, int _d, float _e) :
    price(_p),
    consumption(_c),
    motor(_m),
    doors(_d),
    engine_size(_e)
{
}

Vechicle::~Vechicle()
{
}

} // namespace Mercedes
