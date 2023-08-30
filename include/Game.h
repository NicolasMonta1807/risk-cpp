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
  int countCards(Player player);
  void completeExchange(int playerId, int exchange);
  void printPlayerTerritories(Player player);
  void placeArmies(int playerId);
  void Attack(int playerId);
  void printAdjacentTerritories(int territory, int playerId, bool adjacentOwned);
  bool isNeighbor(int territory1, int territory2);
  bool isValidToAttack(int playerId, int territory);
  void changeOwner(int playerId, int territoryId, int newSoldiers);
  void setContinentOwners();
  void Fortify(int playerId);
  std::vector<Continent> continents;
  std::vector<Territory> territories;
  std::vector<Player> players;
  std::queue<int> playerIds;
  bool initialized;
};

#endif