#ifndef _CONTINENT_H_
#define _CONTINENT_H_

#include <string>
#include <vector>

#include "Territory.h"
#include "Player.h"

class Continent
{
private:
  int value;
  std::string name;
  Player *owner;
  std::vector<Territory *> territories;

public:
  Continent(std::string name, std::vector<Territory *> territories, Player *owner, int value);
  std::vector<Territory *> getTerritories();
  void setOwner(Player *newOwner);
  Player *getOwner();
  int getValue();
};

#endif