#include <iostream>
#include "Turns.h"

using namespace std;

int initializeTurn(int playerID)
{
    int option = 0;
    string territory;
    int cost;

    cout << "It should be this player's turn: " << playerID << " Who gets a number of soldiers this turn" << endl;
    cout << "That then has to allocate those soldiers" << endl;

    while (option != 4)
    {
        turnsMenu();
        cout << "Type the number of the option you choose: ";
        cin >> option;
        cin.ignore();

        cout << endl;

        switch (option)
        {
        case 1:
            cout << "It will ask for a territory to attack with all the details" << endl;
            break;
        case 2:
            cout << "Enter the name of the territory: ";
            cin >> territory;
            cout << endl;
            cost = conquestCost(territory);
            cout << cost << endl;
            break;
        case 3:
            cost = cheapestConquest();
            cout << cost << endl;
            break;
        case 4:
            cout << "The turn has ended" << endl;
            break;
        default:
            cout << "Not an option" << endl;
        }
    }
    return 0;
}

int conquestCost(string territory)
{
    cout << "This should show the cost for conquering this territory: " << territory << endl;
    return 0;
}

int cheapestConquest()
{
    cout << "In here this should tell the player what the cheapest conquest possible is, alongside the cost" << endl;
    return 0;
}

void turnsMenu()
{
    cout << "1. Attack!" << endl;
    cout << "2. Lookup the cost of a conquest" << endl;
    cout << "3. Lookup the cheapest conquest" << endl;
    cout << "4. End turn" << endl;
    cout << endl;
}