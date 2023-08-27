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
  std::list<int> getTerritories();
  void assignTerritory(int territoryId);
  void removeTerritory(int territoryId);
  // int countSoldiers();

private:
  int id;
  int soldiersToAllocate;
  std::string name;
  std::list<int> territories;
};

#endif