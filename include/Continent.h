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
  Continent(std::string name, std::vector<Territory> territories);
  std::vector<Territory> getTerritories();
  void setOwner(int playerId);

private:
  int owner;
  std::string name;
  std::vector<Territory> territories;
};

#endif