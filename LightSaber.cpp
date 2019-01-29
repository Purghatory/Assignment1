#include "LightSaber.h"

double LightSaber::hit(double armor) {

	// if armor is at least 1.5 times the hitpoints, block the light saber sucessfully and take 0 Damage
	// otherwise, saber deals the full hitpoints, sliding cleanly through your weak armor

	if (armor >= hitPoints*1.5)
		return 0;

	else
		return hitPoints;
}
