#ifndef KNIGHT_H
#define KNIGHT_H
#include "Warrior.h"

class Knight : public Warrior
{
    int chargeBonus;

    public:

    Knight(string hN, int h, int bP, int aR, int cB) : Warrior(hN, h, bP, aR)
    {
        chargeBonus = cB;
    }

    //getter
    int getChargeBonus();

    int calculateBurstDamage();
};

#endif