#include "Continent.h"
#include <string>

Continent::Continent(std::string name, std::vector<int> territories, int owner, int value)
{
  this->owner = owner;
  this->name = name;
  this->territories = territories;
  this->value = value;
}

int Continent::getValue()
{
  return this->value;
}

void Continent::setOwner(int playerId)
{
  this->owner = playerId;
}

int Continent::getOwner()
{
  return owner;
}

std::vector<int> Continent::getTerritories()
{
  return this->territories;
}