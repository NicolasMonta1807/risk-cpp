#include "Player.h"

Player::Player(int id, std::string name)
{
  this->id = id;
  this->name = name;
  this->exchangeCounter = 0;
  this->cards = {0, 0, 0};
}

int Player::getId()
{
  return this->id;
}

void Player::setExchangeCounter(int exchangeCounter)
{
  this->exchangeCounter = exchangeCounter;
}
int Player::getExchangeCounter()
{
  return this->exchangeCounter;
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
  std::vector<int>::iterator it = this->territories.begin();

  for (; it != this->territories.end(); it++)
  {
    if (*it == territoryId)
      break;
  }
  this->territories.erase(it);
}

std::vector<int> Player::getTerritories()
{
  return this->territories;
}

std::vector<int> Player::getCards()
{
  return this->cards;
}
void Player::addCard(int value, int type)
{
  this->cards[type - 1] = this->cards[type - 1] + value;
}

void Player::removeCard(int value, int type)
{
  this->cards[type - 1] = this->cards[type - 1] - value;
}