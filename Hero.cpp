#include "Hero.h"

//getter for name
string Hero::getName() const
{
    return heroName;
}

//getter for health
int Hero::getHealth() const
{
    return health;
}

//getter for power
int Hero::getPower() const
{
    return basePower;
}

void Hero::takeDamage(int d)
{
    if(health > 0 && health - d > 0)
    {
        health -= d;
    }
}

//operator overloading
bool Hero::operator > (Hero h2)
{
    if(basePower > h2.getPower())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Hero::operator + (Hero h2)
{
    return health + h2.getHealth();
}