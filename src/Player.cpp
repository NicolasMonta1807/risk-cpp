#include "Player.h"

Player::Player(int id, std::string name)
{
  this->id = id;
  this->name = name;
}

int Player::getId()
{
  return this->id;
}

void Player::setSoldiersToAllocate(int soldiersToAllocate)
{
  this->soldiersToAllocate = soldiersToAllocate;
}

void Player::removeSoldiers(int soldiers)
{
  this->soldiersToAllocate -= soldiers;
}

int Player::getSoldiersToAllocate()
{
  return this->soldiersToAllocate;
}

std::string Player::getName()
{
  return this->name;
}

void Player::assignTerritory(int territoryId)
{
  this->territories.push_back(territoryId);
}

void Player::removeTerritory(int territoryId)
{
  std::list<int>::iterator it = this->territories.begin();

  for (; it != this->territories.end(); it++)
  {
    if (*it == territoryId)
      break;
  }
  this->territories.erase(it);
}

// int Player::countSoldiers()
// {
//   int soldiers = 0;
//   std::list<int>::iterator it = this->territories.begin();

//   for (; it != this->territories.end(); it++)
//   {
//     soldiers += it->getSoldiers();
//   }

//   return soldiers;
// }