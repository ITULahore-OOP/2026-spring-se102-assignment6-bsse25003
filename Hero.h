#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>
using namespace std;

class Hero{

    string heroName;
    int health;
    int basePower;

    public:
    //default constructor
    Hero() {}
    //Constructor
    Hero(string hN, int h, int bP)
    {
        heroName = hN;
        health = h;
        basePower = bP;
    }
    //Destructor
    ~Hero()
    {
        cout << "Hero destructor" << endl;
    }

    //getters
    string getName() const;
    int getHealth() const;
    int getPower() const;

    //setters
    void takeDamage(int d);

    //operator overloading
    bool operator > (Hero h2);
    int operator + (Hero h2);
};

#endif