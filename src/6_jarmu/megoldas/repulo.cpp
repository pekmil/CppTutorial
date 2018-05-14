#include "repulo.h"

#include <iostream>

using namespace std;


Repulo::Repulo(unsigned int t, unsigned int s, unsigned int u):
	Jarmu(t,s),
	utasok(u)
{
}

void Repulo::kiir() const
{
	cout << "tomeg: " << tomeg << ", sebesseg: " << sebesseg << ", utasok: " << utasok << endl;
}
