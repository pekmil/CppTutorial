#ifndef BCLASS_H
#define BCLASS_H

#include "vehicle.h"
#include "container.h"
#include "repair.h"

#include <sstream>

namespace Mercedes
{

namespace B_Class
{

class BClass : public Vechicle
{
protected:
    Container<Repair> repairs;
public:
    class FutureRepairException : public std::exception
    {
        string whatstr;
    public:
        FutureRepairException(int year)
        {
            stringstream str;
			str<<"Year "<<year<<" is in the future.";
            whatstr=str.str();
        }

        ~FutureRepairException() throw()
        {
        }

        virtual const char * what() const throw()
        {
            return whatstr.c_str();
        }
    };

    BClass(int _p, float _c, string _m, int _d, float _e);

    void newRepair(const Repair &repair);
	void print() const;
};

} // namespace B_Class

} // namespace Mercedes

#endif // BCLASS_H
