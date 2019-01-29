#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    if (armor < 30)
		return hitPoints;

	if (hitPoints - armor < 0)
		return 0;
	else;
		return hitPoints - armor;
}
