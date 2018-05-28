#include "registry.h"

namespace Mercedes
{

Registry::Registry()
{
}

void Registry::addVechicle(Vechicle *vech)
{
    vechicles.addObject(vech);
}

int Registry::getVechicleCount() const
{
    return vechicles.getSize();
}

Vechicle *Registry::operator [](int index) const
{
    return vechicles.getObject(index);
}

} // namespace Mercedes
