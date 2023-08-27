#ifndef _CONTINENT_H_
#define _CONTINENT_H_

#include <string>
#include <vector>
#include "Territory.h"
#include "Player.h"

class Continent
{
public:
  Continent();
  Continent(std::string name, std::vector<int> territories, int owner);
  std::vector<int> getTerritories();
  void setOwner(int playerId);
  int getOwner();

private:
  int owner;
  std::string name;
  std::vector<int> territories;
};

#endif