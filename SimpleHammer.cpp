#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    if (armor < 30)
        return hitpoints;

    return hitPoints - armor;
}
