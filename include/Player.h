#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <vector>
#include <iostream>

#include "Territory.h"
#include "Card.h"

class Player
{
private:
  int id;
  int exchangeCounter;
  int soldiersToAllocate;
  std::string name;
  std::vector<Territory *> territories;
  std::vector<Card *> cards;

public:
  Player(int id, std::string name);
  std::string getName();
  int getId();
  void setSoldiersToAllocate(int soldiersToAllocate);
  void removeSoldiers(int soldiers);
  int getSoldiersToAllocate();
  std::vector<Territory *> *getTerritories();
  void assignTerritory(Territory *territory);
  void removeTerritory(Territory *territory);
  std::vector<Card *> getCards();
  int countCards();
  void addCard(Card *newCard);
  void removeCard(Card *cardToRemove);
  void setExchangeCounter(int exchangeCounter);
  int getExchangeCounter();
  bool isOwned(Territory *territory);
  void printOwnedTerritories();
};

#endif