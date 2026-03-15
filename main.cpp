#include <iostream>
#include <string>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main()
{
    // Pointer to store the Guild object
    Guild *myGuild = nullptr;

    int choice;

    do
    {
        cout << endl;
        cout << "===== Guild Management System =====" << endl;
        cout << "1. Create New Guild" << endl;
        cout << "2. Add a Warrior to Guild" << endl;
        cout << "3. Add a Knight to Guild" << endl;
        cout << "4. Add a Spellblade to Guild" << endl;
        cout << "5. Display Guild Statistics" << endl;
        cout << "6. Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Option 1: Initialize the Guild
        if (choice == 1)
        {
            string gName;
            cout << "Enter Guild Name: ";
            cin >> gName;

            // Clean up old guild if it exists
            delete myGuild;
            myGuild = new Guild(gName);
            cout << "Guild '" << gName << "' created successfully!" << endl;
        }

        // Options 2-4: Adding different types of Heroes
        else if (choice >= 2 && choice <= 4)
        {
            if (myGuild == nullptr)
            {
                cout << "Error: You must create a Guild first!" << endl;
            }
            else
            {
                string name;
                int health, power, armor;

                cout << "Enter Hero Name: ";
                cin >> name;
                cout << "Enter Health: ";
                cin >> health;
                cout << "Enter Base Power: ";
                cin >> power;
                cout << "Enter Armor Rating: ";
                cin >> armor;

                if (choice == 2) // Warrior
                {
                    *myGuild += new Warrior(name, health, power, armor);
                    cout << "Warrior added to roster." << endl;
                }
                else if (choice == 3) // Knight
                {
                    int charge;
                    cout << "Enter Charge Bonus: ";
                    cin >> charge;
                    *myGuild += new Knight(name, health, power, armor, charge);
                    cout << "Knight added to roster." << endl;
                }
                else if (choice == 4) // Spellblade
                {
                    int mana, spellPow;
                    cout << "Enter Mana Pool: ";
                    cin >> mana;
                    cout << "Enter Spell Power: ";
                    cin >> spellPow;
                    *myGuild += new Spellblade(name, health, power, armor, mana, spellPow);
                    cout << "Spellblade added to roster." << endl;
                }
            }
        }

        // Option 5: Display Stats
        else if (choice == 5)
        {
            if (myGuild != nullptr)
            {
                myGuild->displayGuildStats();
            }
            else
            {
                cout << "No Guild exists to display!" << endl;
            }
        }

    } while (choice != 6);

    // Free memory
    delete myGuild;

    cout << "Program Terminated Successfully." << endl;

    return 0;
}