#ifndef CCLASS_H
#define CCLASS_H

#include "vehicle.h"
#include "container.h"

namespace Mercedes
{

namespace C_Class
{

class CClass : public Vechicle
{
protected:
    Container<string> equipments;
public:
    class ExistingEquipmentException : public std::exception
    {
        string whatstr;

    public:
        ExistingEquipmentException(string _str)
        {
            whatstr="Equipment " + _str + " is already in the list.";
        }

        ~ExistingEquipmentException() throw()
        {
        }

        virtual const char * what() const throw()
        {
            return whatstr.c_str();
        }
    };

    CClass(int _p, float _c, string _m, int _d, float _e);

    void addEquipment(const string & eq);

    void print() const;

};

} // namespace C_Class

} // namespace Mercedes

#endif // CCLASS_H
