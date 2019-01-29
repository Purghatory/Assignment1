#include <string>
#include "Weapon.h"

using namespace std;

#ifndef LIGHTSABER_H
#define LIGHTSABER_H

class LightSaber : public Weapon {
public:

    LightSaber() : Weapon("Light saber", 60.0) {}

    virtual ~LightSaber() {};

    virtual double hit(double armor);

};

#endif /* LIGHTSABER_H */
