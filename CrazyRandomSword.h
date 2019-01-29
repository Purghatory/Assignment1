#include <string>
#include "Weapon.h"

#include <stdlib.h>
#include <time.h>

using namespace std;

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Random sword", (rand() % 93 + 7)) {}

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */
