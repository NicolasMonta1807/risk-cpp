#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Continent.h"
#include "Territory.h"
#include <string>
#include <list>
#include <queue>

class Game
{
public:
  Game();
  std::list<Continent> getContinents();
  int initialize();
  int initializeFromFile(std::string filename);
  int save(std::string filename);
  int compressedSave(std::string filename);

private:
  void allocateSoldiers();
  void createTerritories();
  std::list<Continent> continents;
  std::list<Player> players;
  std::queue<int> playerIds;
  bool initialized;
};

#endif