#ifndef _TERRITORY_H_
#define _TERRITORY_H_

#include <string>
#include <list>

class Territory
{
public:
  Territory();
  Territory(int id, std::string name, std::list<int> neighbors, bool conquered);
  std::list<int> getNeighbors();
  std::string getName();
  int getId();
  int getSoldiers();
  void addSoldiers(int amount);
  void removeSoldiers(int amount);
  void conquerTerritory();
  bool getConqueror();

private:
  bool conquered;
  int id;
  int soldiers;
  std::string name;
  std::list<int> neighbors;
};

#endif