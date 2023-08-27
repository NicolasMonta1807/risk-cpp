#include <iostream>
#include "Territory.h"

Territory::Territory(int id, std::string name, std::list<int> neighbors)
{
  this->id = id;
  this->name = name;
  this->neighbors = neighbors;
  this->soldiers = 0;
}

std::list<int> Territory::getNeighbors()
{
  return this->neighbors;
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
