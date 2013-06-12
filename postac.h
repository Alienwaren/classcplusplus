#pragma once
#ifndef _H_POSTAC_
#define _H_POSTAC_
class postac
{
public:
	postac(void);
	int	odejmijzycie();
	int zadaj_obrazenia();
	~postac(void);
protected:
	int zycie;
	int str;
	float atk_spd;
	int obrazenia;
	
};

#endif //_H_POSTAC_