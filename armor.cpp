#include "armor.h"
#include <ctime>
#include <iostream>

armor::armor(void)
{
	srand(time(NULL));
	klasaBazowa = rand() % 20 + 1;
}


armor::~armor(void)
{
}
