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
  std::vector<Continent> getContinents();
  std::vector<Territory> getTerritories();
  int initialize();
  int initializeFromFile(std::string filename);
  int save(std::string filename);
  int compressedSave(std::string filename);
  int turn(int playerId);
  std::vector<Player> getPlayers();

private:
  void allocateSoldiers();
  void createTerritories();
  void printPlayerTerritories(Player player);
  void placeArmies(int playerId);
  std::vector<Continent> continents;
  std::vector<Territory> territories;
  std::vector<Player> players;
  std::queue<int> playerIds;
  bool initialized;
};

#endif