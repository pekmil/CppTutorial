#ifndef REGISTRY_H
#define REGISTRY_H

#include "container.h"
#include "vehicle.h"

namespace Mercedes
{

class Registry
{
    Container<Vechicle*> vechicles;
public:
    Registry();

    void addVechicle(Vechicle * vech);
    int getVechicleCount() const;
    Vechicle *operator [](int index) const;
};

} // namespace Mercedes

#endif // REGISTRY_H
