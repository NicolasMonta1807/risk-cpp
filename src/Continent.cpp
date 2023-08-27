#include "Continent.h"
#include <string>

Continent::Continent(std::string name, std::vector<Territory> territories)
{
  this->name = name;
  this->territories = territories;
}

void Continent::setOwner(int playerId)
{
  this->owner = playerId;
}

std::vector<Territory> Continent::getTerritories()
{
  return this->territories;
}