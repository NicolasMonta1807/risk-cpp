#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
#include <list>
#include "Territory.h"

class Player
{
public:
  Player();
  Player(int id, std::string name);
  std::string getName();
  int getId();
  void setSoldiersToAllocate(int soldiersToAllocate);
  void removeSoldiers(int soldiers);
  int getSoldiersToAllocate();
  std::vector<int> getTerritories();
  void assignTerritory(int territoryId);
  void removeTerritory(int territoryId);
  std::vector<int> getCards();
  void addCard(int value, int type);
  void removeCard(int value, int type);
  void setExchangeCounter(int exchangeCounter);
  int getExchangeCounter();

private:
  int id;
  int exchangeCounter;
  int soldiersToAllocate;
  std::string name;
  std::vector<int> territories;
  std::vector<int> cards;
};

#endif