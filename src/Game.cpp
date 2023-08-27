#include "Game.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Game::createTerritories()
{
  std::vector<Territory> NorthAmerica = {
      Territory(1, "Alaska", {2, 6}, false),
      Territory(2, "Alberta", {6, 7, 9, 4}, false),
      Territory(3, "América Central", {4, 9, 32}, false),
      Territory(4, "Estados Unidos Orientales", {8, 7, 9, 3}, false),
      Territory(5, "Groenlandia", {6, 7, 8, 11}, false),
      Territory(6, "Territorio Noroccidental", {1, 2, 7, 5}, false),
      Territory(7, "Ontario", {6, 2, 9, 4, 8}, false),
      Territory(8, "Quebec", {5, 7, 4}, false),
      Territory(9, "Estados Unidos Occidentales", {2, 7, 4, 3}, false),
  };

  std::vector<Territory> Europe = {
      Territory(10, "Gran Bretaña", {16, 11, 13, 12}, false),
      Territory(11, "Islandia", {5, 10, 12}, false),
      Territory(12, "Europa del Norte", {10, 16, 14, 15, 13}, false),
      Territory(13, "Escandinavia", {15, 12, 11, 10}, false),
      Territory(14, "Europa del Sur", {16, 12, 15, 37, 35, 23}, false),
      Territory(15, "Ucrania", {4, 3, 5, 17, 26, 23}, false),
      Territory(16, "Europa Occidental", {10, 12, 14, 37}, false),
  };

  std::vector<Territory> Asia = {
      Territory(17, "Afghanistan", {15, 26, 23}, false),
      Territory(18, "China", {17, 19, 25, 24, 27, 26}, false),
      Territory(19, "India", {23, 17, 18, 25}, false),
      Territory(20, "Irkutsk", {24, 26, 28, 22}, false),
      Territory(21, "Japón", {22, 24}, false),
      Territory(22, "Kamchatka", {28, 20, 24, 1}, false),
      Territory(23, "Medio Oriente", {17, 35, 15, 14, 19}, false),
      Territory(24, "Mongolia", {20, 18, 26, 22, 21}, false),
      Territory(25, "Siam", {18, 19, 40}, false),
      Territory(26, "Siberia", {28, 20, 24, 18, 27}, false),
      Territory(27, "Ural", {15, 17, 26, 18, 24}, false),
      Territory(28, "Yakutsk", {26, 20, 22}, false),
  };

  std::vector<Territory> SouthAmerica = {
      Territory(29, "Argentina", {30, 31}, false),
      Territory(30, "Brasil", {29, 31, 32, 37}, false),
      Territory(31, "Perú", {29, 30, 32}, false),
      Territory(32, "Colombia", {30, 31, 3}, false),
  };

  std::vector<Territory> Africa = {
      Territory(33, "Congo", {34, 37, 38}, false),
      Territory(34, "África Oriental", {33, 35, 36, 37, 38}, false),
      Territory(35, "Egipto", {34, 37, 23, 14}, false),
      Territory(36, "Madagascar", {34, 38}, false),
      Territory(37, "África del Norte", {30, 16, 14, 33, 34, 35}, false),
      Territory(38, "África del Sur", {33, 34, 36}, false),
      Territory(39, "Australia Oriental", {42, 41}, false),
      Territory(40, "Indonesia", {42, 41, 25}, false),
      Territory(41, "Nueva Guinea", {39, 40, 42}, false),
      Territory(42, "Australia Occidental", {39, 40, 41}, false),
  };

  this->continents.push_back(Continent("América del Norte", NorthAmerica));
  this->continents.push_back(Continent("Europa", Europe));
  this->continents.push_back(Continent("Asia", Asia));
  this->continents.push_back(Continent("América del Sur", SouthAmerica));
  this->continents.push_back(Continent("África", Africa));
}

Game::Game()
{
  createTerritories();
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

std::list<Continent> Game::getContinents()
{
  return continents;
}

void Game::allocateSoldiers()
{
  list<Player>::iterator currentPlayer = this->players.begin();
  for (int i = 1; i <= 42; i++)
  {
    int territory = 0;
    std::cout << "------------------" << endl;
    std::cout << "Jugador " << currentPlayer->getName() << endl;
    std::cout << "------------------" << endl;
    printMap();

    int conqueror;
    vector<Territory>::iterator territoryToAllocate;
    while (territory < 1 || territory > 42)
    {
      std::cout << "Escoja un territorio para asignar soldados: ";
      cin >> territory;
      if (territory >= 1 && territory <= 9)
      {
        list<Continent> continents = this->continents;
        std::list<Continent>::iterator it = continents.begin();
        territoryToAllocate = it->getTerritories().begin();
        std::advance(territoryToAllocate, territory - 1);
      }

      if (territory >= 10 && territory <= 16)
      {
        list<Continent> continents = Game::getContinents();
        std::list<Continent>::iterator it = continents.begin();
        it++;
        vector<Territory> territories = it->getTerritories();
        territoryToAllocate = territories.begin();
        std::advance(territoryToAllocate, territory - 10 - 1);
      }

      if (territory >= 17 && territory <= 28)
      {
        list<Continent> continents = Game::getContinents();
        std::list<Continent>::iterator it = continents.begin();
        it++;
        it++;
        vector<Territory> territories = it->getTerritories();
        territoryToAllocate = territories.begin();
        std::advance(territoryToAllocate, territory - 28 - 1);
      }

      if (territory >= 29 && territory <= 32)
      {
        list<Continent> continents = Game::getContinents();
        std::list<Continent>::iterator it = continents.begin();
        it++;
        it++;
        it++;
        vector<Territory> territories = it->getTerritories();
        territoryToAllocate = territories.begin();
        std::advance(territoryToAllocate, territory - 32 - 1);
      }

      if (territory >= 33 && territory <= 38)
      {
        list<Continent> continents = Game::getContinents();
        std::list<Continent>::iterator it = continents.begin();
        it++;
        it++;
        it++;
        it++;
        vector<Territory> territories = it->getTerritories();
        territoryToAllocate = territories.begin();
        std::advance(territoryToAllocate, territory - 38 - 1);
      }

      if (territory >= 38 && territory <= 42)
      {
        list<Continent> continents = Game::getContinents();
        std::list<Continent>::iterator it = continents.begin();
        it++;
        it++;
        it++;
        it++;
        it++;
        vector<Territory> territories = it->getTerritories();
        territoryToAllocate = territories.begin();
        std::advance(territoryToAllocate, territory - 42 - 1);
      }

      if (territoryToAllocate->getConqueror())
      {
        std::cout << "Este territorio ya tiene dueño" << endl;
        territory = 0;
      }
    }

    territoryToAllocate->conquerTerritory();
    std::cout << "AHORAAAA EL DUEÑO DE ESTO ES " << territoryToAllocate->getConqueror() << endl;
    currentPlayer->assignTerritory(territoryToAllocate->getId());
    currentPlayer->removeSoldiers(1);

    std::cout << "Ha escogido el territorio " << territoryToAllocate->getName() << endl;
    std::cout << "Un soldado será asignado a este territorio" << endl;
    std::cout << "Le quedan " << currentPlayer->getSoldiersToAllocate() << " soldados" << endl;
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
    players.push_back(newPlayer);
    playerIds.push(newPlayer.getId());
    std::cout << endl;
  }

  allocateSoldiers();

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