#include <iostream>
#include "postac.h"
#include "armor.h"
using namespace std;

int main()
{
	postac gracz_1;
	gracz_1.ustawPancerz();
	gracz_1.ustawDef();
	gracz_1.ustawAtrybuty();
	gracz_1.zadaj_obrazenia();
	return 0;
}