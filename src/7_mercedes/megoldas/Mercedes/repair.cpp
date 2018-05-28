#include "repair.h"

namespace Mercedes
{

Repair::Repair()
{
}

Repair::Repair(int _y, int _c, string _d) :
    year(_y),
    cost(_c),
    description(_d)
{
}

string Repair::getDescription() const
{
    return description;
}

void Repair::setDescription(const string &value)
{
    description = value;
}

int Repair::getCost() const
{
    return cost;
}

void Repair::setCost(int value)
{
    cost = value;
}

int Repair::getYear() const
{
    return year;
}

void Repair::setYear(int value)
{
    year = value;
}

} // namespace Mercedes
