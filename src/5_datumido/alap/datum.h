#ifndef DATUM_H
#define DATUM_H

class Datum
{
protected:
	unsigned int ev, honap, nap;
public:
	Datum(unsigned int _ev, unsigned int _honap, unsigned int _nap);
	unsigned int getEv() const;
	void setEv(unsigned int value);
	unsigned int getHonap() const;
	void setHonap(unsigned int value);
	unsigned int getNap() const;
	void setNap(unsigned int value);
};

#endif // DATUM_H
