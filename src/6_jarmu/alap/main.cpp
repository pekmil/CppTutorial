#include <iostream>
#include "jarmu.h"
#include "tarolo.h"
//#include "repulo.h"
//#include "hajo.h"

using namespace std;

//void jarmuKiirSima(Jarmu j)
//{
//	j.kiir();
//}

//void jarmuKiirVirtualis(const Jarmu &j)
//{
//	j.kiir();
//}

int main()
{
	// Jarmu osztály teszt
	cout << endl;
	cout << "Jarmu teszt" << endl;
	Jarmu j1(5,6);
	j1.kiir();

	// Tarolo osztály teszt
	cout << endl;
	cout << "Tarolo teszt" << endl;
	Tarolo t1;
	t1.megjelenit();
	t1.beallit(2,new Jarmu(3,7));
	t1.beallit(4,new Jarmu(8,1));
	t1.megjelenit();
	t1.beallit(6,new Jarmu(1,2));
	t1.beallit(2,new Jarmu(1,9));
	t1.megjelenit();

//	// Repulo és Hajo teszt
//	cout << endl;
//	cout << "Repulo es Hajo teszt" << endl;
//	Repulo r1(12,13,14);
//	Hajo h1(65,54,43);
//	r1.kiir();
//	h1.kiir();
//	t1.beallit(0, new Hajo(32,33,34));
//	t1.beallit(1, new Repulo(76,86,96));
//	t1.megjelenit();

//	// virtuális kiir függvény teszt
//	cout << endl;
//	cout << "virtualis kiir teszt" << endl;
//	jarmuKiirSima(h1);
//	jarmuKiirSima(r1);
//	jarmuKiirVirtualis(h1);
//	jarmuKiirVirtualis(r1);

//	// Tarolo osztály másoló konstruktor teszt
//	cout << endl;
//	cout << "Tarolo masolo konstruktor teszt" << endl;
//	Tarolo t2(t1);
//	t2.megjelenit();
//	t2.beallit(4, new Hajo(4,3,2));
//	t2.megjelenit();
	return 0;
}
