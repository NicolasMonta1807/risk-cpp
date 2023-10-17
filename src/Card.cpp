#include <iostream>
#include "Card.h"

Card::Card(int id, char type, Territory *territory)
{
  this->id = id;
  this->type = type;
  this->territory = territory;
}

int Card::getId()
{
  return this->id;
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