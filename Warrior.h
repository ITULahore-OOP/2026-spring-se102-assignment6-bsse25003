#ifndef WARRIOR_H
#define WARRIOR_H
#include "Hero.h"

class Warrior : public Hero
{
    int armorRating;

    public:
    //constructor
    Warrior(string hN, int h, int bP, int aR) : Hero(hN, h, bP)
    {
        armorRating = aR;
    }

    //getter
    int getArmor() const;

    int calculateEffectiveHealth();
};

#endif