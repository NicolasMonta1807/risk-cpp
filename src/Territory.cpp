#include <iostream>
#include "Territory.h"

Territory::Territory(int id, std::string name)
{
  this->id = id;
  this->name = name;
  this->soldiers = 0;
  this->neighbors = std::vector<Territory *>();
}

std::vector<Territory *> *Territory::getNeighbors()
{
  return &this->neighbors;
}

void Territory::setNeighbors(std::vector<Territory *> neighbors)
{
  this->neighbors = neighbors;
}

int Territory::getId()
{
  return this->id;
}

std::string Territory::getName()
{
  return this->name;
}

int Territory::getSoldiers()
{
  return this->soldiers;
}

void Territory::addSoldiers(int amount)
{
  this->soldiers += amount;
}

void Territory::removeSoldiers(int amount)
{
  this->soldiers -= amount;
}

bool Territory::isNeighbor(Territory *territoryToCheck)
{
  std::vector<Territory *> neighbors = this->neighbors;
  for (int i = 0; i < neighbors.size(); i++)
  {
    if (neighbors[i]->getId() == territoryToCheck->getId())
      return true;
  }
  return false;
}
