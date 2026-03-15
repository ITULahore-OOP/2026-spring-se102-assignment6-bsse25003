#include "Warrior.h"

//getter for armor rating
int Warrior::getArmor() const
{
    return armorRating;
}

int Warrior::calculateEffectiveHealth()
{
    int EffectiveHealth = getHealth() + (armorRating * 2);
    return EffectiveHealth;
}