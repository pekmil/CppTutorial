#include "cclass.h"

namespace Mercedes
{

namespace C_Class
{

CClass::CClass(int _p, float _c, string _m, int _d, float _e) : Vechicle(_p, _c, _m, _d, _e)
{
}

void CClass::addEquipment(const string &eq)
{
    for (int i=0; i<equipments.getSize(); i++)
    {
        if (equipments.getObject(i)==eq)
            throw ExistingEquipmentException(eq);
    }
    equipments.addObject(eq);
}

void CClass::print() const
{
    cout<<price<<", "<<consumption<<", "<<motor<<", "<<doors<<", "<<engine_size<<endl;
    for (int i=0; i<equipments.getSize(); i++)
    {
        cout<<"\t"<<equipments.getObject(i)<<endl;
    }
}

} // namespace C_Class

} // namespace Mercedes
