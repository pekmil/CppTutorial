#ifndef SZEMELY_H
#define SZEMELY_H

#include <string>

using namespace std;

class Szemely
{
protected:
	string vnev, knev;
	unsigned int eletkor;
public:
	Szemely(const string &v, const string &k, unsigned int kor);
	const string &getVezetekNev() const;
	const string &getKeresztNev() const;
	string teljesNev() const;
	unsigned int getEletkor() const;
	void kiir() const;

	bool fiatalabb(const Szemely &sz);
};

#endif // SZEMELY_H
