#include <iostream>
#include "Card.h"

Card::Card(char type, Territoy *territory)
{
    this->type = type;
    this->territory = territory;
}

char Card::getType()
{
    return this->type;
}

Territory *Card::getTerritory()
{
    return this->territory;
}

void Card::setTerritory(Territory *territory)
{
    this->territory = territory;
}

void Card::setType(char type)
{
    this->type = type;
}