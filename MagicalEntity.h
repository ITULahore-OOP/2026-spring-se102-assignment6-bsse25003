#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

#include <iostream>
using namespace std;

class MagicalEntity{
    int manaPool;
    int spellPower;

    public:
    MagicalEntity(int mP, int sP)
    {
        manaPool = mP;
        spellPower = sP;
    }
    //getters
    int getMana() const;
    int getSpellPower() const;
};

#endif