#ifndef REPAIR_H
#define REPAIR_H

#include <string>

using namespace std;

namespace Mercedes
{

class Repair
{
    int year, cost;
    string description;
public:
    Repair();
    Repair(int _y, int _c, string _d);
    string getDescription() const;
    void setDescription(const string &value);
    int getCost() const;
    void setCost(int value);
    int getYear() const;
    void setYear(int value);
};

} // namespace Mercedes

#endif // REPAIR_H
