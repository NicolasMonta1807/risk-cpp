#include "Player.h"

Player::Player(int id, std::string name)
{
  this->id = id;
  this->exchangeCounter = 0;
  this->soldiersToAllocate = 0;
  this->name = name;
  this->territories = {};
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

void Player::assignTerritory(Territory *territory)
{
  this->territories.push_back(territory);
}

void Player::removeTerritory(Territory *territory)
{
  std::vector<Territory *>::iterator it = this->territories.begin();
  while (it != this->territories.end())
  {
    if ((*it)->getId() == territory->getId())
    {
      this->territories.erase(it);
      break;
    }
    it++;
  }
}

std::vector<Territory *> *Player::getTerritories()
{
  return &this->territories;
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

bool Player::isOwned(Territory *territory)
{
  std::vector<Territory *>::iterator it = this->territories.begin();
  while (it != this->territories.end())
  {
    if ((*it)->getId() == territory->getId())
    {
      return true;
    }
    it++;
  }
  return false;
}

void Player::printOwnedTerritories()
{
  std::vector<Territory *>::iterator TerritoryIt = this->territories.begin();
  std::cout << "Sus territorios son: " << std::endl;
  std::cout << "ID   Nombre" << std::endl;

  for (; TerritoryIt != this->territories.end(); TerritoryIt++)
  {
    std::cout << (*TerritoryIt)->getId() << "  " << (*TerritoryIt)->getName() << " - Soldados " << (*TerritoryIt)->getSoldiers() << std::endl;
  }
}