#include <iostream>
#include "Territory.h"

Territory::Territory(int id, std::string name, std::vector<int> neighbors)
{
  this->id = id;
  this->name = name;
  this->neighbors = {};
  this->soldiers = 0;
}

std::vector<Territory *> *Territory::getNeighbors()
{
  return &this->neighbors;
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

bool Territory::isNeighbor(Territory *territory1, Territory *territory2)
{
  std::vector<Territory *> neighbors = *territory1->getNeighbors();
  for (int i = 0; i < neighbors.size(); i++)
  {
    if (neighbors[i]->getId() == territory2->getId())
      return true;
  }
  return false;
}
