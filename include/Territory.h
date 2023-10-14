#ifndef _TERRITORY_H_
#define _TERRITORY_H_

#include <string>
#include <vector>

class Territory
{
private:
  int id;
  int soldiers;
  std::string name;
  std::vector<Territory *> neighbors;

public:
  Territory(int id, std::string name);
  std::vector<Territory *> *getNeighbors();
  void setNeighbors(std::vector<Territory *> neighbors);
  std::string getName();
  int getId();
  int getSoldiers();
  void addSoldiers(int amount);
  void removeSoldiers(int amount);
  bool isNeighbor(Territory *territoryToCheck);
};

#endif