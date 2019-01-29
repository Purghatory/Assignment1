#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor with values Common Spear and 40.0
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */
