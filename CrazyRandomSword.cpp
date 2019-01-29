#include "CrazyRandomSword.h"
#include <stdlib.h>
#include <time.h>

double CrazyRandomSword::hit(double armor) {

	srand (time(NULL));

	int oneThird = armor / 3;

	// int newHitPoints = rand() % 93 + 7;
	armor = rand() % (oneThird - 2) + 2;

	if(hitPoints - armor < 0)
        return 0;

    return hitPoints - armor;

}
