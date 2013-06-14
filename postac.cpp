#include "postac.h"
#include <iostream>
#include <ctime>

using namespace std;
postac::postac(void)
{
}


int postac::zadaj_obrazenia()
{
	const float przelicznik_sily = 2.f;
	srand(time(NULL));
	obrazenia_z_sily = str * przelicznik_sily;
	//cout << obrazenia_z_sily << endl;
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
	cout << "Zrecznasc: " << endl;
	cin >> agl;
	unik = agl * przelicznik_na_spd;
	

}
int postac::ustawPancerz()
{
	return NULL;
}

postac::~postac(void)
{
}
