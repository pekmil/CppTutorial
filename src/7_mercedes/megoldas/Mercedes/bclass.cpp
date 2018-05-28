#include "bclass.h"

namespace Mercedes
{

namespace B_Class
{

BClass::BClass(int _p, float _c, string _m, int _d, float _e) : Vechicle(_p, _c, _m, _d, _e)
{
}

void BClass::newRepair(const Repair &repair)
{
    if (repair.getYear()>2015)
        throw FutureRepairException(repair.getYear());
    repairs.addObject(repair);
}

void BClass::print() const
{
    cout<<price<<", "<<consumption<<", "<<motor<<", "<<doors<<", "<<engine_size<<endl;
    for (int i=0; i<repairs.getSize(); i++)
    {
        const Repair &rep=repairs.getObject(i);
        cout<<"\t"<<rep.getYear()<<", "<<rep.getCost()<<", "<<rep.getDescription()<<endl;
    }
}

} // namespace B_Class

} // namespace Mercedes
