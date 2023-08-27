#include <iostream>
#include <iomanip>
#include <random>
#include "Game.h"

using namespace std;

std::vector<Player> Game::getPlayers()
{
  return this->players;
}

void Game::createTerritories()
{

  this->territories.push_back(Territory(1, "Alaska", {2, 6}));
  this->territories.push_back(Territory(2, "Alberta", {6, 7, 9, 4}));
  this->territories.push_back(Territory(3, "America Central", {4, 9, 32}));
  this->territories.push_back(Territory(4, "Estados Unidos Orientales", {8, 7, 9, 3}));
  this->territories.push_back(Territory(5, "Groenlandia", {6, 7, 8, 11}));
  this->territories.push_back(Territory(6, "Territorio Noroccidental", {1, 2, 7, 5}));
  this->territories.push_back(Territory(7, "Ontario", {6, 2, 9, 4, 8}));
  this->territories.push_back(Territory(8, "Quebec", {5, 7, 4}));
  this->territories.push_back(Territory(9, "Estados Unidos Occidentales", {2, 7, 4, 3}));
  this->territories.push_back(Territory(10, "Gran Bretania", {16, 11, 13, 12}));
  this->territories.push_back(Territory(11, "Islandia", {5, 10, 12}));
  this->territories.push_back(Territory(12, "Europa del Norte", {10, 16, 14, 15, 13}));
  this->territories.push_back(Territory(13, "Escandinavia", {15, 12, 11, 10}));
  this->territories.push_back(Territory(14, "Europa del Sur", {16, 12, 15, 37, 35, 23}));
  this->territories.push_back(Territory(15, "Ucrania", {4, 3, 5, 17, 26, 23}));
  this->territories.push_back(Territory(16, "Europa Occidental", {10, 12, 14, 37}));
  this->territories.push_back(Territory(17, "Afghanistan", {15, 26, 23}));
  this->territories.push_back(Territory(18, "China", {17, 19, 25, 24, 27, 26}));
  this->territories.push_back(Territory(19, "India", {23, 17, 18, 25}));
  this->territories.push_back(Territory(20, "Irkutsk", {24, 26, 28, 22}));
  this->territories.push_back(Territory(21, "Japon", {22, 24}));
  this->territories.push_back(Territory(22, "Kamchatka", {28, 20, 24, 1}));
  this->territories.push_back(Territory(23, "Medio Oriente", {17, 35, 15, 14, 19}));
  this->territories.push_back(Territory(24, "Mongolia", {20, 18, 26, 22, 21}));
  this->territories.push_back(Territory(25, "Siam", {18, 19, 40}));
  this->territories.push_back(Territory(26, "Siberia", {28, 20, 24, 18, 27}));
  this->territories.push_back(Territory(27, "Ural", {15, 17, 26, 18, 24}));
  this->territories.push_back(Territory(28, "Yakutsk", {26, 20, 22}));
  this->territories.push_back(Territory(29, "Argentina", {30, 31}));
  this->territories.push_back(Territory(30, "Brasil", {29, 31, 32, 37}));
  this->territories.push_back(Territory(31, "Peru", {29, 30, 32}));
  this->territories.push_back(Territory(32, "Colombia", {30, 31, 3}));
  this->territories.push_back(Territory(33, "Congo", {34, 37, 38}));
  this->territories.push_back(Territory(34, "Africa Oriental", {33, 35, 36, 37, 38}));
  this->territories.push_back(Territory(35, "Egipto", {34, 37, 23, 14}));
  this->territories.push_back(Territory(36, "Madagascar", {34, 38}));
  this->territories.push_back(Territory(37, "Africa del Norte", {30, 16, 14, 33, 34, 35}));
  this->territories.push_back(Territory(38, "Africa del Sur", {33, 34, 36}));
  this->territories.push_back(Territory(39, "Australia Oriental", {42, 41}));
  this->territories.push_back(Territory(40, "Indonesia", {42, 41, 25}));
  this->territories.push_back(Territory(41, "Nueva Guinea", {39, 40, 42}));
  this->territories.push_back(Territory(42, "Australia Occidental", {39, 40, 41}));

  std::vector<int> NorthAmerica = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> Europe = {10, 11, 12, 13, 14, 15, 16};
  std::vector<int> Asia = {17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
  std::vector<int> SouthAmerica = {29, 30, 31, 32};
  std::vector<int> Africa = {33, 34, 35, 36, 37, 38};
  std::vector<int> Australia = {39, 40, 41, 42};

  this->continents.push_back(Continent("AmericaDelNorte", NorthAmerica, 0, 5));
  this->continents.push_back(Continent("Europa", Europe, 0, 5));
  this->continents.push_back(Continent("Asia", Asia, 0, 7));
  this->continents.push_back(Continent("AmericaDelSur", SouthAmerica, 0, 2));
  this->continents.push_back(Continent("Africa", Africa, 0, 3));
  this->continents.push_back(Continent("Australia", Australia, 0, 2));
}

Game::Game()
{
  createTerritories();
  this->players = vector<Player>();
}

void printMap()
{
  std::cout << "------------------------------------------------------------------------------------" << endl;
  std::cout << "América del Norte               Europa                      Asia" << endl
            << "1. Alaska                       10. Gran Bretaña            17. Afghanistán" << endl
            << "2. Alberta                      11. Islandia                18. China" << endl
            << "3. América Central              12. Europa del Norte        19. India" << endl
            << "4. Estados Unidos Orientales    13. Escandinavia            20. Irkutsk" << endl
            << "5. Groenlandia                  14. Europa del Sur          21. Japón" << endl
            << "6. Territorio Noroccidental     15. Ucrania                 22. Kamchatka" << endl
            << "7. Ontario                      16. Europa Occidental       23. Medio Oriente" << endl
            << "8. Quebec                                                   24. Mongolia" << endl
            << "9. Estados Unidos Occidentales                              25. Siam" << endl
            << "                                                            26. Siberia" << endl
            << "                                                            27. Ural" << endl
            << "                                                            28. Yakutsk" << endl
            << "                                                                        " << endl
            << "América del Sur                  África                     Australia   " << endl
            << "29. Argentina                    33. Congo                  39. Australia Oriental" << endl
            << "30. Brasil                       34. África Oriental        40. Indonesia" << endl
            << "31. Perú                         35. Egipto                 41. Nueva Guinea" << endl
            << "32. Colombia                     36. Madagascar             42. Australia Occidental" << endl
            << "                                 37. África del Norte" << endl
            << "                                 38. África del Sur" << endl;
  std::cout << "------------------------------------------------------------------------------------" << endl;
  return;
}

std::vector<Continent> Game::getContinents()
{
  return continents;
}

std::vector<Territory> Game::getTerritories()
{
  return territories;
}

bool searchTerritory(Player player, int id)
{
  std::vector<int>::iterator PlayerTerritoryIt;
  vector<int> playerTerritories = player.getTerritories();
  for (PlayerTerritoryIt = playerTerritories.begin(); PlayerTerritoryIt != playerTerritories.end(); PlayerTerritoryIt++)
  {
    if (*PlayerTerritoryIt == id)
    {
      return true;
    }
  }
  return false;
}

void Game::allocateSoldiers()
{
  int territory = 0;
  int soldiersToFortify = 0;
  queue<Player> playersToFortify;
  vector<int> TerritoryAux;
  std::vector<Player>::iterator PlayerIt = this->players.begin();
  std::vector<Territory>::iterator TerritoryIt;
  std::vector<int>::iterator TerritoryAuxIt;
  for (int i = 0; i < 12; i++)
  {
    std::cout << "Es el turno de: " << PlayerIt->getName() << endl;

    while (territory < 1 || territory > 42)
    {
      printMap();
      std::cout << "¿Cuál territorio desea conquistar?:";
      cin >> territory;
      if (i != 0)
      {
        TerritoryAuxIt = TerritoryAux.begin();
        for (; TerritoryAuxIt != TerritoryAux.end(); TerritoryAuxIt++)
        {
          if (territory == *TerritoryAuxIt)
          {
            cout << "¡El territorio ya tiene dueño!" << endl;
            territory = 0;
            break;
          }
        }
      }
    }
    TerritoryAux.push_back(territory);

    PlayerIt->assignTerritory(territory);

    PlayerIt->removeSoldiers(1);

    TerritoryIt = this->territories.begin();
    std::advance(TerritoryIt, territory - 1);
    TerritoryIt->addSoldiers(1);

    std::cout << "Ha escogido el territorio: " << TerritoryIt->getName() << endl;
    std::cout << "Con ID:                    " << TerritoryIt->getId() << endl;

    PlayerIt++;
    if (PlayerIt == players.end())
    {
      PlayerIt = players.begin();
    }
    territory = 0;
  }

  while (playersToFortify.size() != players.size())
  {
    playersToFortify.push(*PlayerIt);
    std::advance(PlayerIt, 1);
    if (PlayerIt == players.end())
    {
      PlayerIt = players.begin();
    }
  }

  while (playersToFortify.size() > 0)
  {
    printPlayerTerritories(*PlayerIt);
    std::cout << "¿Cual territorio desea fortificar?: ";
    cin >> territory;
    if (!searchTerritory(*PlayerIt, territory))
    {
      std::cout << "Este territorio no es suyo" << endl;
      continue;
    }
    std::cout << "Usted tiene: " << PlayerIt->getSoldiersToAllocate() << " soldados para poner" << endl;
    std::cout << "Cuantos soldados le va a meter?: ";
    cin >> soldiersToFortify;
    if (PlayerIt->getSoldiersToAllocate() >= soldiersToFortify && soldiersToFortify > 0)
    {
      TerritoryIt = this->territories.begin();
      std::advance(TerritoryIt, territory - 1);
      TerritoryIt->addSoldiers(soldiersToFortify);
      PlayerIt->removeSoldiers(soldiersToFortify);
    }
    else
    {
      std::cout << "No tiene los suficientes soldados para hacer eso" << endl;
      continue;
    }
    playersToFortify.pop();
    if (PlayerIt->getSoldiersToAllocate() != 0)
    {
      playersToFortify.push(*PlayerIt);
    }

    if (playersToFortify.size() == 0)
    {
      break;
    }

    while (PlayerIt->getId() != playersToFortify.front().getId())
    {
      std::advance(PlayerIt, 1);
      if (PlayerIt == players.end())
      {
        PlayerIt = players.begin();
      }
    }

    territory = 0;
  }
}

void Game::printPlayerTerritories(Player player)
{
  std::vector<Territory>::iterator TerritoryIt;
  std::vector<int>::iterator PlayerTerritoryIt;
  vector<int> playerTerritories = player.getTerritories();
  std::cout << "Sus territorios son: " << endl;
  std::cout << "ID   Nombre" << endl;
  for (PlayerTerritoryIt = playerTerritories.begin(); PlayerTerritoryIt != playerTerritories.end(); PlayerTerritoryIt++)
  {
    for (TerritoryIt = this->territories.begin(); TerritoryIt != this->territories.end(); TerritoryIt++)
    {
      if (TerritoryIt->getId() == *PlayerTerritoryIt)
      {
        std::cout << TerritoryIt->getId() << "  " << TerritoryIt->getName() << " - Soldados " << TerritoryIt->getSoldiers() << endl;
      }
    }
  }
}

int Game::initialize()
{
  int playerAmount = 0;
  do
  {
    std::cout << "-----------------------------------------------" << endl;
    std::cout << "Este juego se puede jugar entre 3 y 6 jugadores" << endl;
    std::cout << "-----------------------------------------------" << endl;
    std::cout << "Cuántos jugadores van a jugar?: ";
    cin >> playerAmount;
  } while (playerAmount <= 2 || playerAmount > 6);

  for (int i = 0; i < playerAmount; i++)
  {
    std::string name;
    std::cout << "Jugador " << i + 1 << endl;
    std::cout << "\t Ingrese su nombre: ";
    cin >> name;
    Player newPlayer = Player(i + 1, name);
    switch (playerAmount)
    {
    case 3:
      newPlayer.setSoldiersToAllocate(35);
      break;
    case 4:
      newPlayer.setSoldiersToAllocate(30);
      break;
    case 5:
      newPlayer.setSoldiersToAllocate(25);
      break;
    case 6:
      newPlayer.setSoldiersToAllocate(20);
      break;
    }

    this->players.push_back(newPlayer);
    this->playerIds.push(newPlayer.getId());
  }

  allocateSoldiers();

  cin.ignore();

  return 0;
}

int Game::initializeFromFile(string filename)
{
  std::cout << "Initializing from file: " << filename << endl;
  return 0;
}

int Game::save(string filename)
{
  std::cout << "Saving to: " << filename << endl;
  return 0;
}

int Game::compressedSave(string filename)
{
  std::cout << "Saving compressed to: " << filename << endl;
  return 0;
}

void Game::printAdjacentTerritories(int territory, int playerId, bool adjacentOwned)
{
  vector<int> neighbors = this->territories[territory - 1].getNeighbors();
  vector<int> playerTerritories = this->players[playerId - 1].getTerritories();

  if (adjacentOwned)
  {
    for (int i = 0; i < neighbors.size(); i++)
    {
      for (int j = 0; j < playerTerritories.size(); j++)
      {
        if (neighbors[i] == playerTerritories[j])
        {
          Territory territory = territories[neighbors[i] - 1];
          cout << territory.getId() << " " << territory.getName() << " - Soldados: " << territory.getSoldiers() << endl;
        }
      }
    }
  }
  else
  {
    for (int i = 0; i < neighbors.size(); i++)
    {
      bool found = false;
      for (int j = 0; j < playerTerritories.size(); j++)
      {
        if (neighbors[i] == playerTerritories[j])
        {
          found = true;
          break;
        }
      }
      if (!found)
      {
        Territory territory = territories[neighbors[i] - 1];
        cout << territory.getId() << " " << territory.getName() << " - Soldados: " << territory.getSoldiers() << endl;
      }
    }
  }
}

bool Game::isNeighbor(int territoryFrom, int territoryTo)
{
  Territory territory = this->territories[territoryFrom - 1];
  vector<int> neighbors = territory.getNeighbors();
  for (int i = 0; i < neighbors.size(); i++)
  {
    if (neighbors[i] == territoryTo)
      return true;
  }
  return false;
}

bool Game::isValidToAttack(int playerId, int territory)
{
  Player player = this->players[playerId - 1];
  bool isFromPlayer = false;
  int soldiers = 0;

  vector<int> territories = player.getTerritories();
  for (int i = 0; i < territories.size(); i++)
  {
    if (territories[i] == territory)
    {
      isFromPlayer = true;
    }
  }

  for (int i = 0; i < this->territories.size(); i++)
  {
    if (this->territories[i].getId() == territory)
    {
      soldiers = this->territories[i].getSoldiers();
    }
  }

  return (isFromPlayer && soldiers > 2);
}

vector<int> rollDice(int tries)
{
  vector<int> result;

  std::random_device rd;
  std::mt19937 gen(rd());

  std::uniform_int_distribution<int> dist(1, 6);
  for (int i = 0; i < tries; i++)
  {
    result.push_back(dist(gen));
  }

  for (int i = 0; i < result.size(); i++)
  {
    for (int j = i; j < result.size(); j++)
    {
      if (result[j] > result[i])
      {
        int temp = result[i];
        result[i] = result[j];
        result[j] = temp;
      }
    }
  }

  return result;
}

void Game::changeOwner(int playerId, int territoryId, int newSoldiers)
{
  for (int i = 0; i < players.size(); i++)
  {
    for (int j = 0; j < players[i].getTerritories().size(); j++)
    {
      if (players[i].getTerritories()[j] == territoryId)
      {
        players[i].removeTerritory(territoryId);
        players[playerId - 1].assignTerritory(territoryId);
      }
    }
  }
  territories[territoryId - 1].addSoldiers(newSoldiers);
}

void Game::Attack(int playerId)
{
  char option;
  while (option != 'n')
  {
    cout << "¿Desea atacar a un territorio?: (S/N)";
    cin >> option;
    option = tolower(option);

    switch (option)
    {
    case 's':
      int attackFrom;
      int attackTo;
      printPlayerTerritories(this->players[playerId - 1]);
      cout << "Elija el numero del territorio desde donde atacar: ";
      cin >> attackFrom;
      if (!isValidToAttack(playerId, attackFrom))
      {
        cout << "No puede atacar desde este territorio" << endl;
        break;
      }
      cout << "-----------------------------------" << endl;
      cout << "Territorios disponibles para atacar" << endl;
      cout << "-----------------------------------" << endl;
      printAdjacentTerritories(attackFrom, playerId, false);
      cout << "Elija el numero del territorio a atacar: ";
      cin >> attackTo;
      if (isNeighbor(attackFrom, attackTo))
      {
        Territory attacking = this->territories[attackFrom - 1];

        int diceAttacking = attacking.getSoldiers() - 1;
        if (diceAttacking > 3)
          diceAttacking = 3;
        Territory defending = this->territories[attackTo - 1];
        int diceDefending = defending.getSoldiers();
        if (diceDefending > 2)
          diceDefending = 2;

        vector<int> resultAttacking = rollDice(diceAttacking);
        vector<int> resultDefending = rollDice(diceDefending);

        int size;
        if (resultAttacking.size() > resultDefending.size())
          size = resultDefending.size();
        else
          size = resultAttacking.size();

        for (int i = 0; i < size; i++)
        {
          if (resultAttacking[i] > resultDefending[i])
          {
            cout << "El jugador " << playerId << " ha ganado el ataque" << endl;
            this->territories[attackTo - 1].removeSoldiers(1);
            if (this->territories[attackTo - 1].getSoldiers() == 0)
            {
              cout << "El jugador " << playerId << " ha ganado el territorio" << endl;
              int soldiersToDeplace;
              cout << "Cuantos soldados desea deplazar?: ";
              cin >> soldiersToDeplace;
              this->territories[attackFrom - 1].removeSoldiers(soldiersToDeplace);
              changeOwner(playerId, attackTo, soldiersToDeplace);
              break;
            }
          }
          else
          {
            cout << "El jugador " << playerId << " ha perdido el ataque" << endl;
            cout << "Ha perdido un soldado en " << this->territories[attackFrom - 1].getName() << endl;
            this->territories[attackFrom - 1].removeSoldiers(1);
          }
        }
      }
      else
      {
        cout << "Este territorio no está disponible para atacar" << endl;
      }

      break;
    case 'n':
      cout << "-----------------------" << endl;
      cout << " Ha escogido no atacar " << endl;
      cout << "-----------------------" << endl;
      return;
      break;
    default:
      cout << "Por favor ingrese una opcion valida" << endl;
      cout << "¿Desea atacar a otro jugador?: (S/N)";
      cin >> option;
      break;
    }
  }
}

void Game::placeArmies(int playerId)
{
  std::vector<Player>::iterator PlayerIt = this->players.begin();
  std::vector<Territory>::iterator TerritoryIt;
  for (; PlayerIt != this->players.end(); PlayerIt++)
  {
    if (PlayerIt->getId() == playerId)
      break;
  }

  int territory;
  int soldiersToPlace;
  while (PlayerIt->getSoldiersToAllocate() > 0)
  {
    printPlayerTerritories(*PlayerIt);
    std::cout << "Usted tiene: " << PlayerIt->getSoldiersToAllocate() << " soldados para poner" << endl;
    std::cout << "¿En cual territorio desea posicionar sus soldados?: ";
    cin >> territory;
    if (!searchTerritory(*PlayerIt, territory))
    {
      std::cout << "Este territorio no es suyo" << endl;
      continue;
    }
    std::cout << "Cuantos soldados le va a meter?: ";
    cin >> soldiersToPlace;
    if (PlayerIt->getSoldiersToAllocate() >= soldiersToPlace && soldiersToPlace > 0)
    {
      TerritoryIt = this->territories.begin();
      std::advance(TerritoryIt, territory - 1);
      TerritoryIt->addSoldiers(soldiersToPlace);
      PlayerIt->removeSoldiers(soldiersToPlace);
    }
    else
    {
      std::cout << "No tiene los suficientes soldados para hacer eso" << endl;
      continue;
    }
  }
}

void Game::Fortify(int playerId)
{
  printPlayerTerritories(this->players[playerId - 1]);

  char option;
  cout << "¿Desea fortificar alguno de sus territorios?: (S/N)";
  cin >> option;

  switch (tolower(option))
  {
  case 's':
    int territoryFrom;
    int territoryTo;
    printPlayerTerritories(this->players[playerId - 1]);
    cout << "Elija el numero del territorio a fortificar: ";
    cin >> territoryTo;

    printAdjacentTerritories(territoryTo, playerId, true);
    cout << "Elija el numero del territorio del que parten los soldados: ";
    cin >> territoryFrom;

    if (isNeighbor(territoryTo, territoryFrom))
    {
      int soldiersToMove = 0;
      while (true)
      {
        cout << "¿Cuantos soldados desea mover?: ";
        cin >> soldiersToMove;

        if (territories[territoryFrom - 1].getSoldiers() <= soldiersToMove)
        {
          cout << "No tiene los soldados suficientes" << endl;
          cout << "No puede el territorio vacios" << endl;
          continue;
        }
        break;
      }
      territories[territoryFrom - 1].removeSoldiers(soldiersToMove);
      territories[territoryTo - 1].addSoldiers(soldiersToMove);

      printPlayerTerritories(this->players[playerId - 1]);
    }

    break;
  case 'n':
    cout << "Ha decidido no fortificar" << endl;
    return;
  default:
    break;
  }
}

int Game::turn(int playerId)
{
  std::queue<int> queueIds = this->playerIds;
  if (queueIds.front() != playerId)
  {
    cout << "No es su turno" << endl;
    return 0;
  }

  std::vector<Player>::iterator PlayerIt = this->players.begin();
  for (; PlayerIt != this->players.end(); PlayerIt++)
  {
    if (playerId == PlayerIt->getId())
      break;
  }

  int newSoldiers = PlayerIt->getTerritories().size() / 3;
  if (newSoldiers < 3)
    newSoldiers = 3;

  std::vector<Continent>::iterator ContinentIt = this->continents.begin();
  for (; ContinentIt != this->continents.end(); ContinentIt++)
  {
    if (ContinentIt->getOwner() == playerId)
    {
      newSoldiers += ContinentIt->getValue();
    }
  }

  PlayerIt->setSoldiersToAllocate(newSoldiers);
  placeArmies(playerId);
  Attack(playerId);
  Fortify(playerId);

  this->playerIds.push(this->playerIds.front());
  playerIds.pop();

  cin.ignore();

  return 1;
}