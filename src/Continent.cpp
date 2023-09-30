#include "Continent.h"
#include <string>

Continent::Continent(std::string name, std::vector<Territory *> territories, Player *owner, int value)
{
  this->value = value;
  this->name = name;
  this->owner = owner;
  this->territories = territories;
}

int Continent::getValue()
{
  return this->value;
}

void Continent::setOwner(Player *newOwner)
{
  this->owner = newOwner;
}

Player *Continent::getOwner()
{
  return owner;
}

std::vector<Territory *> Continent::getTerritories()
{
  return this->territories;
}