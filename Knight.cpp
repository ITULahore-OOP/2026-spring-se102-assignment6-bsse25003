#include "Knight.h"

int Knight::getChargeBonus()
{
    return chargeBonus;
}

int Knight::calculateBurstDamage()
{
    int BurstDamage = getPower() + chargeBonus;
    return BurstDamage;
}
