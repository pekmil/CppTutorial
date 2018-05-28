#include <iostream>

using namespace std;

#include "registry.h"
#include "bclass.h"
#include "cclass.h"
using namespace Mercedes;
using namespace Mercedes::B_Class;
using namespace Mercedes::C_Class;

int main()
{
    Registry reg;
    BClass *bc=new BClass(11900000, 8.7, "v12", 2, 5400);
    try
    {
        bc->newRepair(Repair(1998, 16000, "Oil"));
		bc->newRepair(Repair(2990, 44000, "Engine failure"));       // exception here
		bc->newRepair(Repair(1999, 54000, "Breaks"));               // this does not execute
    }
    catch (std::exception &ex)
    {
		cout<<ex.what()<<endl; // Year 2990 is in the future.
    }
    reg.addVechicle(bc);
    CClass *cc=new CClass(3400000, 6.7, "v6", 5, 2000);
    try
    {
        cc->addEquipment("radio");
        cc->addEquipment("seat heating");
		cc->addEquipment("radio");              // exception here
		cc->addEquipment("hi-fi");              // this does not execute
    }
    catch (std::exception &ex)
    {
		cout<<ex.what()<<endl; // Equipment radio is already in the list.
    }

    reg.addVechicle(cc);

    try
    {
		reg[0]->print();         // 11900000, 8.7, v12, 2, 5400
								 //   1998, 16000, Oil
    }
    catch (std::exception &ex)
    {
        cout<<ex.what()<<endl;
    }

    for (int i=0; i<reg.getVechicleCount(); i++)
    {
        Vechicle * vech=reg[i];
        vech->print();
	}
	// 11900000, 8.7, v12, 2, 5400
	//   1998, 16000, Oil
	// 3400000, 6.7, v6, 5, 2000
	//   radio
	//   seat heating

    for (int i=0; i<reg.getVechicleCount(); i++)
    {
        delete reg[i];
    }
    return 0;
}

