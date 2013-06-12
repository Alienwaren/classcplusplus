#include "postac.h"
#include <iostream>
#include <ctime>

postac::postac(void)
{
}
int postac::odejmijzycie()
{
	postac gracz_1;
	gracz_1.zycie = 100;
	gracz_1.zycie = gracz_1.zycie - gracz_1.obrazenia;
	std::cout << gracz_1.zycie;
	return zycie;
}
int postac::zadaj_obrazenia()
{
	srand(time(NULL));
	int koncowe;
	postac gracz_1;
	gracz_1.obrazenia = rand() % 0 + 4;
	koncowe = gracz_1.obrazenia * gracz_1.atk_spd;

}

postac::~postac(void)
{
}
