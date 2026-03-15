#ifndef GUILD_H
#define GUILD_H
#include "Hero.h"

class Guild
{

    string guildName;
    Hero *roster[15];
    int memberCount;

public:
    // constructor
    Guild(string name)
    {
        guildName = name;
        memberCount = 0;
        for(int i = 0; i < 15; i++)
        {
            roster[i] = nullptr;
        }
    }

    // destructor
    ~Guild()
    {
        cout << "The guild " << guildName << " has been disbanded!" << endl;
    }

    int calculateTotalGuildPower() const;
    void displayGuildStats() const;

    // operator overloading
    void operator+=(Hero *newHero);
    friend ostream& operator<<(ostream& os, const Guild& g);
};
#endif