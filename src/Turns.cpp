#include <iostream>
#include "Turns.h"

using namespace std;

int initializeTurn(int playerID)
{
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