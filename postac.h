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
	int ustawDef();
	~postac(void);
	int zycie;
	float obrazenia;
	int str;
	int def;
	int agl;
	int intel;
	int mana;
	int pancerz;
	float obrazenia_z_sily;
	double unik;
	
};

#endif //  _H_POSTAC_