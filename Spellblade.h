#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include "Warrior.h"
#include "MagicalEntity.h"

class Spellblade : public Warrior, public MagicalEntity
{
    public:
    Spellblade(string hN, int h, int bP, int aR, int mP, int sP) : Warrior(hN, h, bP, aR), MagicalEntity(mP, sP)  //calling constructors
    {
        cout << "Spell Blade Constructor" << endl;
    }
    
    int calculateHybridDamage();
};

#endif