#include "Spellblade.h"

int Spellblade::calculateHybridDamage()
{
    int HybridDamage = getPower() + getSpellPower();
    return HybridDamage;
}