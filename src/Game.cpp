#include <iostream>
#include <iomanip>
#include <random>
#include "Game.h"

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
  this->players = std::vector<Player>();
}

void printMap()
{
  std::cout << "------------------------------------------------------------------------------------" << std::endl;
  std::cout << "América del Norte               Europa                      Asia" << std::endl
            << "1. Alaska                       10. Gran Bretaña            17. Afghanistán" << std::endl
            << "2. Alberta                      11. Islandia                18. China" << std::endl
            << "3. América Central              12. Europa del Norte        19. India" << std::endl
            << "4. Estados Unidos Orientales    13. Escandinavia            20. Irkutsk" << std::endl
            << "5. Groenlandia                  14. Europa del Sur          21. Japón" << std::endl
            << "6. Territorio Noroccidental     15. Ucrania                 22. Kamchatka" << std::endl
            << "7. Ontario                      16. Europa Occidental       23. Medio Oriente" << std::endl
            << "8. Quebec                                                   24. Mongolia" << std::endl
            << "9. Estados Unidos Occidentales                              25. Siam" << std::endl
            << "                                                            26. Siberia" << std::endl
            << "                                                            27. Ural" << std::endl
            << "                                                            28. Yakutsk" << std::endl
            << "                                                                        " << std::endl
            << "América del Sur                  África                     Australia   " << std::endl
            << "29. Argentina                    33. Congo                  39. Australia Oriental" << std::endl
            << "30. Brasil                       34. África Oriental        40. Indonesia" << std::endl
            << "31. Perú                         35. Egipto                 41. Nueva Guinea" << std::endl
            << "32. Colombia                     36. Madagascar             42. Australia Occidental" << std::endl
            << "                                 37. África del Norte" << std::endl
            << "                                 38. África del Sur" << std::endl;
  std::cout << "------------------------------------------------------------------------------------" << std::endl;
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
  std::vector<int> playerTerritories = player.getTerritories();
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
  std::queue<Player> playersToFortify;
  std::vector<int> TerritoryAux;
  std::vector<Player>::iterator PlayerIt = this->players.begin();
  std::vector<Territory>::iterator TerritoryIt;
  std::vector<int>::iterator TerritoryAuxIt;

  for (int i = 0; i < 6; i++)
  {
    std::cout << "-----------------------" << std::endl;
    std::cout << "Es el turno de: " << PlayerIt->getName() << std::endl;
    std::cout << "-----------------------" << std::endl;

    while (territory < 1 || territory > 42)
    {
      printMap();
      std::cout << "¿Cuál territorio desea conquistar?:";
      std::cin >> territory;
      if (i != 0)
      {
        TerritoryAuxIt = TerritoryAux.begin();
        for (; TerritoryAuxIt != TerritoryAux.end(); TerritoryAuxIt++)
        {
          if (territory == *TerritoryAuxIt)
          {
            std::cout << "¡El territorio ya tiene dueño!" << std::endl;
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

    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << "Ha escogido el territorio " << TerritoryIt->getId() << ": " << TerritoryIt->getName() << std::endl;
    std::cout << "---------------------------------------------------------" << std::endl;

    do
    {
      std::cin.ignore();
      std::cout << '\n'
                << "Presiona una tecla para continuar..";
    } while (std::cin.get() != '\n');

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
    std::cout << "-----------------------" << std::endl;
    std::cout << "Es el turno de: " << PlayerIt->getName() << std::endl;
    std::cout << "-----------------------" << std::endl;
    printPlayerTerritories(*PlayerIt);
    std::cout << "¿Cual territorio desea fortificar?: ";
    std::cin >> territory;
    if (!searchTerritory(*PlayerIt, territory))
    {
      std::cout << "Este territorio no es suyo" << std::endl;
      continue;
    }
    std::cout << "Usted tiene: " << PlayerIt->getSoldiersToAllocate() << " soldados para poner" << std::endl;
    std::cout << "Cuantos soldados va a posicionar?: ";
    std::cin >> soldiersToFortify;
    if (PlayerIt->getSoldiersToAllocate() >= soldiersToFortify && soldiersToFortify > 0)
    {
      TerritoryIt = this->territories.begin();
      std::advance(TerritoryIt, territory - 1);
      TerritoryIt->addSoldiers(soldiersToFortify);
      PlayerIt->removeSoldiers(soldiersToFortify);
      std::cout << "---------------------------------------------------------" << std::endl;
      std::cout << TerritoryIt->getName() << " ha quedado con " << TerritoryIt->getSoldiers() << " soldados " << std::endl;
      std::cout << "---------------------------------------------------------" << std::endl;
      do
      {
        std::cin.ignore();
        std::cout << '\n'
                  << "Presiona una tecla para continuar..";
      } while (std::cin.get() != '\n');
    }
    else
    {
      std::cout << "No tiene los suficientes soldados para hacer eso" << std::endl;
      do
      {
        std::cin.ignore();
        std::cout << '\n'
                  << "Presiona una tecla para continuar..";
      } while (std::cin.get() != '\n');
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
  std::vector<int> playerTerritories = player.getTerritories();
  std::cout << "Sus territorios son: " << std::endl;
  std::cout << "ID   Nombre" << std::endl;
  for (PlayerTerritoryIt = playerTerritories.begin(); PlayerTerritoryIt != playerTerritories.end(); PlayerTerritoryIt++)
  {
    for (TerritoryIt = this->territories.begin(); TerritoryIt != this->territories.end(); TerritoryIt++)
    {
      if (TerritoryIt->getId() == *PlayerTerritoryIt)
      {
        std::cout << TerritoryIt->getId() << "  " << TerritoryIt->getName() << " - Soldados " << TerritoryIt->getSoldiers() << std::endl;
      }
    }
  }
}

int Game::initialize()
{

  if (this->initialized)
  {
    std::cout << "------------------------------" << std::endl;
    std::cout << "Este juego ya ha sido empezado" << std::endl;
    std::cout << "------------------------------" << std::endl;
    return -1;
  }

  this->initialized = true;
  int playerAmount = 0;
  do
  {
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Este juego se puede jugar entre 3 y 6 jugadores" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "Cuántos jugadores van a jugar?: ";
    std::cin >> playerAmount;
  } while (playerAmount <= 2 || playerAmount > 6);

  for (int i = 0; i < playerAmount; i++)
  {
    std::string name;
    std::cout << "Jugador " << i + 1 << std::endl;
    std::cout << "\t Ingrese su nombre: ";
    std::cin >> name;
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

  return 0;
}

int Game::initializeFromFile(std::string filename)
{
  std::cout << "Initializing from file: " << filename << std::endl;
  return 0;
}

int Game::save(std::string filename)
{
  std::cout << "Saving to: " << filename << std::endl;
  return 0;
}

int Game::compressedSave(std::string filename)
{
  std::cout << "Saving compressed to: " << filename << std::endl;
  return 0;
}

void Game::printAdjacentTerritories(int territory, int playerId, bool adjacentOwned)
{
  std::vector<int> neighbors = this->territories[territory - 1].getNeighbors();
  std::vector<int> playerTerritories = this->players[playerId - 1].getTerritories();

  if (adjacentOwned)
  {
    for (int i = 0; i < neighbors.size(); i++)
    {
      for (int j = 0; j < playerTerritories.size(); j++)
      {
        if (neighbors[i] == playerTerritories[j])
        {
          Territory territory = territories[neighbors[i] - 1];
          std::cout << territory.getId() << " " << territory.getName() << " - Soldados: " << territory.getSoldiers() << std::endl;
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
        std::cout << territory.getId() << " " << territory.getName() << " - Soldados: " << territory.getSoldiers() << std::endl;
      }
    }
  }
}

bool Game::isNeighbor(int territoryFrom, int territoryTo)
{
  Territory territory = this->territories[territoryFrom - 1];
  std::vector<int> neighbors = territory.getNeighbors();
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

  std::vector<int> territories = player.getTerritories();
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

std::vector<int> rollDice(int tries)
{
  std::vector<int> result;

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

void Game::setContinentOwners()
{
  std::vector<Player>::iterator PlayerIt;
  std::vector<Continent>::iterator ContinentIt;
  bool owned;

  for (ContinentIt = this->continents.begin(); ContinentIt != this->continents.end(); ++ContinentIt)
  {
    owned = false;
    std::vector<int> TerritoriesInContinent = ContinentIt->getTerritories();

    for (PlayerIt = this->players.begin(); PlayerIt != this->players.end(); ++PlayerIt)
    {
      bool playerOwnsAll = true;
      std::vector<int> TerritoriesInPlayer = PlayerIt->getTerritories();

      for (int i = 0; i < TerritoriesInContinent.size(); i++)
      {
        bool territoryOwned = false;
        for (int j = 0; j < TerritoriesInPlayer.size(); j++)
        {
          if (TerritoriesInContinent[i] == TerritoriesInPlayer[j])
          {
            territoryOwned = true;
            break;
          }
        }

        if (!territoryOwned)
        {
          playerOwnsAll = false;
          break;
        }
      }

      if (playerOwnsAll)
      {
        ContinentIt->setOwner(PlayerIt->getId());
        owned = true;
        break;
      }
    }

    if (!owned)
    {
      ContinentIt->setOwner(0);
    }
  }
}

void Game::Attack(int playerId)
{
  char option;
  while (option != 'n')
  {
    std::cout << "¿Desea atacar a un territorio?: (S/N)";
    std::cin >> option;
    option = tolower(option);

    switch (option)
    {
    case 's':
      int attackFrom;
      int attackTo;
      printPlayerTerritories(this->players[playerId - 1]);
      std::cout << "Elija el numero del territorio desde donde atacar: ";
      std::cin >> attackFrom;
      if (!isValidToAttack(playerId, attackFrom))
      {
        std::cout << "No puede atacar desde este territorio" << std::endl;
        break;
      }
      std::cout << "-----------------------------------" << std::endl;
      std::cout << "Territorios disponibles para atacar" << std::endl;
      std::cout << "-----------------------------------" << std::endl;
      printAdjacentTerritories(attackFrom, playerId, false);
      std::cout << "Elija el numero del territorio a atacar: ";
      std::cin >> attackTo;
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

        std::vector<int> resultAttacking = rollDice(diceAttacking);
        std::vector<int> resultDefending = rollDice(diceDefending);

        int size;
        if (resultAttacking.size() > resultDefending.size())
          size = resultDefending.size();
        else
          size = resultAttacking.size();

        for (int i = 0; i < size; i++)
        {
          if (resultAttacking[i] > resultDefending[i])
          {
            std::cout << "El jugador " << playerId << " ha ganado el ataque" << std::endl;
            this->territories[attackTo - 1].removeSoldiers(1);
            if (this->territories[attackTo - 1].getSoldiers() == 0)
            {
              std::cout << "El jugador " << playerId << " ha ganado el territorio" << std::endl;
              int soldiersToDeplace;
              std::cout << "Cuantos soldados desea deplazar?: ";
              std::cin >> soldiersToDeplace;
              this->territories[attackFrom - 1].removeSoldiers(soldiersToDeplace);
              changeOwner(playerId, attackTo, soldiersToDeplace);
              break;
            }
          }
          else
          {
            std::cout << "El jugador " << playerId << " ha perdido el ataque" << std::endl;
            std::cout << "Ha perdido un soldado en " << this->territories[attackFrom - 1].getName() << std::endl;
            this->territories[attackFrom - 1].removeSoldiers(1);
          }
        }
      }
      else
      {
        std::cout << "Este territorio no está disponible para atacar" << std::endl;
      }

      break;
    case 'n':
      std::cout << "-----------------------" << std::endl;
      std::cout << " Ha escogido no atacar " << std::endl;
      std::cout << "-----------------------" << std::endl;
      return;
      break;
    default:
      std::cout << "Por favor ingrese una opcion valida" << std::endl;
      std::cout << "¿Desea atacar a otro jugador?: (S/N)";
      std::cin >> option;
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
    std::cout << "Usted tiene: " << PlayerIt->getSoldiersToAllocate() << " soldados para poner" << std::endl;
    std::cout << "¿En cual territorio desea posicionar sus soldados?: ";
    std::cin >> territory;
    if (!searchTerritory(*PlayerIt, territory))
    {
      std::cout << "Este territorio no es suyo" << std::endl;
      continue;
    }
    std::cout << "Cuantos soldados le va a meter?: ";
    std::cin >> soldiersToPlace;
    if (PlayerIt->getSoldiersToAllocate() >= soldiersToPlace && soldiersToPlace > 0)
    {
      TerritoryIt = this->territories.begin();
      std::advance(TerritoryIt, territory - 1);
      TerritoryIt->addSoldiers(soldiersToPlace);
      PlayerIt->removeSoldiers(soldiersToPlace);

      std::cout << "---------------------------------------------------------" << std::endl;
      std::cout << TerritoryIt->getName() << " ha quedado con " << TerritoryIt->getSoldiers() << " soldados " << std::endl;
      std::cout << "---------------------------------------------------------" << std::endl;

      do
      {
        std::cout << '\n'
                  << "Presiona una tecla para continuar...";

      } while (std::cin.get() != '\n');
    }
    else
    {
      std::cout << "No tiene los suficientes soldados para hacer eso" << std::endl;
      continue;
    }
  }
}

void Game::Fortify(int playerId)
{
  printPlayerTerritories(this->players[playerId - 1]);

  char option;
  std::cout << "¿Desea fortificar alguno de sus territorios?: (S/N)";
  std::cin >> option;

  switch (tolower(option))
  {
  case 's':
  {
    bool finished = false;
    while (!finished)
    {
      int territoryFrom;
      int territoryTo;
      printPlayerTerritories(this->players[playerId - 1]);
      std::cout << "Elija el numero del territorio a fortificar: ";
      std::cin >> territoryTo;

      printAdjacentTerritories(territoryTo, playerId, true);
      std::cout << "Elija el numero del territorio del que parten los soldados: ";
      std::cin >> territoryFrom;

      if (isNeighbor(territoryTo, territoryFrom))
      {
        int soldiersToMove = 0;
        while (true)
        {
          std::cout << "¿Cuantos soldados desea mover?: ";
          std::cin >> soldiersToMove;

          if (territories[territoryFrom - 1].getSoldiers() <= soldiersToMove)
          {
            std::cout << "No tiene los soldados suficientes" << std::endl;
            std::cout << "No puede el territorio vacios" << std::endl;
            continue;
          }
          finished = true;
          break;
        }
        territories[territoryFrom - 1].removeSoldiers(soldiersToMove);
        territories[territoryTo - 1].addSoldiers(soldiersToMove);

        printPlayerTerritories(this->players[playerId - 1]);
      }
      else
      {
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "No puede fortificar desde este territorio" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
      }
    }
    break;
  }
  case 'n':
    std::cout << "-------------------------" << std::endl;
    std::cout << "Ha decidido no fortificar" << std::endl;
    std::cout << "-------------------------" << std::endl;
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
    std::cout << "No es su turno" << std::endl;
    return 0;
  }

  std::cout << "----------------------------------" << std::endl;
  std::cout << "Es el turno del jugador: " << players[playerId - 1].getName() << std::endl;
  std::cout << "----------------------------------" << std::endl;

  std::vector<Player>::iterator PlayerIt = this->players.begin();
  for (; PlayerIt != this->players.end(); PlayerIt++)
  {
    if (playerId == PlayerIt->getId())
      break;
  }
  setContinentOwners();
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

  std::cin.ignore();

  return 1;
}