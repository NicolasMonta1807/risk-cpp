#ifndef _CARD_H_
#define _CARD_H_

#include "Territory.h"

class Card
{
private:
    char type;
    Territory *territory;

public:
    Card(char type, Territory *territory);
    char getType();
    Territory *getTerritory();
    void setType(char type);
    void setTerritory(Territory *territory);
};

#endif