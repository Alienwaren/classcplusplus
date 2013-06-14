#pragma once
#ifndef _H_POSTAC_
#define _H_POSTAC_
class postac
{
public:
	postac(void);
	int zadaj_obrazenia();
	int porusz_postacia();
	void ustawAtrybuty();
	int ustawPancerz();
	~postac(void);
protected:
	int zycie;
	float obrazenia;
	int str;
	int def;
	int klasaPancerza;
	int agl;
	int intel;
	float obrazenia_z_sily;
	double unik;
	
};

#endif //  _H_POSTAC_