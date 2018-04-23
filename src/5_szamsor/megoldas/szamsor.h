#ifndef SZAMSOR_H
#define SZAMSOR_H

class Szamsor
{
protected:
	unsigned int darab;
	int *tomb;
public:
	Szamsor(unsigned int db);
	Szamsor(const Szamsor &sz);
	~Szamsor();

	unsigned int getDarab() const;
	int getErtek(unsigned int index) const;
	void setErtek(unsigned int index, int ertek);
};

#endif // SZAMSOR_H
