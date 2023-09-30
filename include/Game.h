#ifndef GAME_H
#define GAME_H

#include <string>
#include <list>
#include <queue>
#include <iostream>
#include <iomanip>
#include <random>

#include "Player.h"
#include "Continent.h"
#include "Territory.h"

class Game
{
private:
  bool initialized;
  std::vector<Continent *> continents;
  std::vector<Territory *> territories;
  std::vector<Player *> players;
  std::queue<int> playerIds;

  void allocateSoldiers();
  void createTerritories();
  int countCards(Player *player);
  void completeExchange(int playerId, int exchange);
  void printPlayerTerritories(Player *player);
  void placeArmies(int playerId);
  void Attack(int playerId);
  void printAdjacentTerritories(int territory, int playerId, bool adjacentOwned);
  bool isValidToAttack(Player *player, Territory *territory);
  void changeOwner(Player *player, Territory *territory, int newSoldiers);
  void setContinentOwners();
  void Fortify(int playerId);

public:
  Game();
  int initialize();
  int initializeFromFile(std::string filename);
  int save(std::string filename);
  int compressedSave(std::string filename);
  int turn(int playerId);
};

#endif