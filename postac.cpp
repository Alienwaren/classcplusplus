#include "postac.h"
#include <iostream>
#include <ctime>
#include "armor.h"

using namespace std;
postac::postac(void)
{
	defence = 0;
}


int postac::zadaj_obrazenia()
{
	
	const float przelicznik_sily_obr = 2.f;
	srand(time(NULL));
	obrazenia_z_sily = str * przelicznik_sily_obr;
	obrazenia = rand() % 10 + 1 + obrazenia_z_sily;
	zycie =  zycie -  obrazenia;
	cout << "Zostalo zycia: " << zycie << endl;
	return zycie;
}
void postac::ustawAtrybuty()
{
	const float przelicznik_na_spd = 0.01f;
	cout << "Wprowadz zycie" << endl;
	cin >> zycie;
	cout << "Wprowadz atrybuty swojej nowej postaci\n Sila:";
	cin >> str;
	cout << "Inteligencja: " << endl;
	cin >> intel;
	mana = intel * 10;
	cout << "Zrecznasc: " << endl;
	cin >> agl;
	unik = agl * przelicznik_na_spd;
	

}
int postac::ustawPancerz()
{
	armor szkielet;
	pancerz = szkielet.ustawKlase();
	return pancerz;
}
int postac::ustawDef()
{
	int defence = 0;
	const float przelicznik_str_def = 0.5f;
	defence = przelicznik_str_def * str;
	cout << endl << defence;
		
	return defence;
}

postac::~postac(void)
{
}
