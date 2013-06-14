#pragma once
#ifndef _H_POSTAC_
#define _H_POSTAC_
class postac
{
public:
	postac(void);
	int ustawZycie();
	int zadaj_obrazenia();
	int porusz_postacia();
	void ustawAtrybuty();
	~postac(void);
protected:
	int zycie;
	int obrazenia;
	int str;
	int def;
	int klasaPancerza;
	int agl;
	int intel;
	int unik;
	float przelicznik_uniku_na_punkt;
};

#endif //  _H_POSTAC_