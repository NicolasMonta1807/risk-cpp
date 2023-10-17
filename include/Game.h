#ifndef GAME_H
#define GAME_H

#include <string>
#include <list>
#include <vector>
#include <queue>
#include <deque>
#include <iostream>
#include <iomanip>
#include <random>
#include <algorithm>
#include <fstream>
#include <unordered_map>

#include "Player.h"
#include "Continent.h"
#include "Territory.h"
#include "HuffmanTree.h"

class Game
{
private:
  bool initialized;
  std::vector<Continent *> continents;
  std::vector<Territory *> territories;
  std::vector<Player *> players;
  std::deque<Card *> cards;
  std::queue<int> playerIds;

  void allocateSoldiers();
  void createTerritories();
  int countCards(Player *player);
  void completeExchange(int playerId, int exchange);
  void placeArmies(int playerId);
  void Attack(int playerId);
  void printAdjacentTerritories(int territory, int playerId, bool adjacentOwned);
  bool isValidToAttack(Player *player, Territory *territory);
  void changeOwner(Player *player, Territory *territory, int newSoldiers);
  void setContinentOwners();
  void Fortify(int playerId);
  std::string generateMessage();

public:
  Game();
  int initialize();
  int initializeFromFile(std::string filename);
  int save(std::string filename);
  int compressedSave(std::string filename);
  int turn(int playerId);
};

#endif