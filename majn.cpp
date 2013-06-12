#include <iostream>
#include "postac.h"

using namespace std;

int main()
{
	postac gracz_1;
	gracz_1.zycie = 100;
	gracz_1.zadaj_obrazenia();
	gracz_1.odejmijzycie();
	
	return 0;
}