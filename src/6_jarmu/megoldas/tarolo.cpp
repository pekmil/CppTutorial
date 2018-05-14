#include "tarolo.h"
#include "repulo.h"
#include "hajo.h"

#include <iostream>

using namespace std;

Tarolo::Tarolo()
{
	for (unsigned int i=0; i<TAROLO_KAPACITAS; i++)
		tomb[i]=0;
}

Tarolo::~Tarolo()
{
	for (unsigned int i=0; i<TAROLO_KAPACITAS; i++)
		if (tomb[i]) delete tomb[i];
}

void Tarolo::beallit(unsigned int index, Jarmu *j)
{
	if (index<TAROLO_KAPACITAS)
	{
		if (tomb[index]) delete tomb[index];
		tomb[index]=j;
	}
	else
	{
		delete j;
	}
}

void Tarolo::megjelenit() const
{
	cout << "tartalom:" << endl;
	for (unsigned int i=0; i<TAROLO_KAPACITAS; i++)
	{
		cout << i << ".: ";
		if (tomb[i]) tomb[i]->kiir();
		else cout << "ures" << endl;
	}
}

Tarolo::Tarolo(const Tarolo &t)
{
	for (unsigned int i=0; i<TAROLO_KAPACITAS; i++)
	{
		if (t.tomb[i]==0) tomb[i]=0;
		else
		{
			Repulo *r=dynamic_cast<Repulo*>(t.tomb[i]);
			Hajo *h=dynamic_cast<Hajo*>(t.tomb[i]);
			if (r) tomb[i]=new Repulo(*r);
			else if (h) tomb[i]=new Hajo(*h);
		}
	}
}
