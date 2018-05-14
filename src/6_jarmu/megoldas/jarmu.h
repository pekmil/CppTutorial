#ifndef JARMU_H
#define JARMU_H

class Jarmu
{
protected:
	unsigned int tomeg, sebesseg;
public:
	Jarmu(unsigned int t, unsigned int s);
	virtual void kiir() const = 0;
	virtual ~Jarmu();
};

#endif // JARMU_H
