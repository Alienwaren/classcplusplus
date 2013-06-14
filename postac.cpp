#include "postac.h"
#include <iostream>
#include <ctime>

using namespace std;
postac::postac(void)
{
}

int postac::ustawZycie()
{
	cin >> zycie;
	return zycie;
}
int postac::zadaj_obrazenia()
{
	srand(time(NULL));
	obrazenia = rand() % 10 + 1;
	zycie =  zycie -  obrazenia;
	cout << zycie << endl;
	return zycie;
}
void postac::ustawAtrybuty()
{
	przelicznik_uniku_na_punkt = 0.01;
	cout << "Wprowadz atrybuty swojej nowej postaci\n Sila:";
	cin >> str;
	cout << "Inteligencja: " << endl;
	cin >> intel;
	cout << "Zrecznasc: " << endl;
	cin >> agl;
	unik = agl * przelicznik_uniku_na_punkt;
	

}

postac::~postac(void)
{
}
