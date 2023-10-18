#include "Game.h"

void Game::createTerritories()
{
  Territory *Alaska = new Territory(1, "Alaska");
  Territory *Alberta = new Territory(2, "Alberta");
  Territory *AmericaCentral = new Territory(3, "America Central");
  Territory *EstadosUnidosOrientales = new Territory(4, "Estados Unidos Orientales");
  Territory *Groenlandia = new Territory(5, "Groenlandia");
  Territory *TerritorioNoroccidental = new Territory(6, "Territorio Noroccidental");
  Territory *Ontario = new Territory(7, "Ontario");
  Territory *Quebec = new Territory(8, "Quebec");
  Territory *EstadosUnidosOccidentales = new Territory(9, "Estados Unidos Occidentales");
  Territory *GranBretania = new Territory(10, "Gran Bretania");
  Territory *Islandia = new Territory(11, "Islandia");
  Territory *EuropaDelNorte = new Territory(12, "Europa del Norte");
  Territory *Escandinavia = new Territory(13, "Escandinavia");
  Territory *EuropaDelSur = new Territory(14, "Europa del Sur");
  Territory *Ucrania = new Territory(15, "Ucrania");
  Territory *EuropaOccidental = new Territory(16, "Europa Occidental");
  Territory *Afghanistan = new Territory(17, "Afghanistan");
  Territory *China = new Territory(18, "China");
  Territory *India = new Territory(19, "India");
  Territory *Irkutsk = new Territory(20, "Irkutsk");
  Territory *Japon = new Territory(21, "Japon");
  Territory *Kamchatka = new Territory(22, "Kamchatka");
  Territory *MedioOriente = new Territory(23, "Medio Oriente");
  Territory *Mongolia = new Territory(24, "Mongolia");
  Territory *Siam = new Territory(25, "Siam");
  Territory *Siberia = new Territory(26, "Siberia");
  Territory *Ural = new Territory(27, "Ural");
  Territory *Yakutsk = new Territory(28, "Yakutsk");
  Territory *Argentina = new Territory(29, "Argentina");
  Territory *Brasil = new Territory(30, "Brasil");
  Territory *Peru = new Territory(31, "Peru");
  Territory *Colombia = new Territory(32, "Colombia");
  Territory *Congo = new Territory(33, "Congo");
  Territory *AfricaOriental = new Territory(34, "Africa Oriental");
  Territory *Egipto = new Territory(35, "Egipto");
  Territory *Madagascar = new Territory(36, "Madagascar");
  Territory *AfricaDelNorte = new Territory(37, "Africa del Norte");
  Territory *AfricaDelSur = new Territory(38, "Africa del Sur");
  Territory *AustraliaOriental = new Territory(39, "Australia Oriental");
  Territory *Indonesia = new Territory(40, "Indonesia");
  Territory *NuevaGuinea = new Territory(41, "Nueva Guinea");
  Territory *AustraliaOccidental = new Territory(42, "Australia Occidental");

  Alaska->setNeighbors({Alberta, TerritorioNoroccidental, Kamchatka});
  Alberta->setNeighbors({Alaska, TerritorioNoroccidental, Ontario, EstadosUnidosOccidentales});
  AmericaCentral->setNeighbors({EstadosUnidosOccidentales, EstadosUnidosOrientales, Colombia});
  EstadosUnidosOrientales->setNeighbors({AmericaCentral, EstadosUnidosOccidentales, Ontario, Quebec});
  Groenlandia->setNeighbors({Quebec, Ontario, TerritorioNoroccidental, Islandia});
  TerritorioNoroccidental->setNeighbors({Alaska, Alberta, Ontario, Groenlandia});
  Ontario->setNeighbors({Alberta, TerritorioNoroccidental, Groenlandia, Quebec, EstadosUnidosOrientales, EstadosUnidosOccidentales});
  Quebec->setNeighbors({Ontario, Groenlandia, EstadosUnidosOrientales});
  EstadosUnidosOccidentales->setNeighbors({Alberta, Ontario, EstadosUnidosOrientales, AmericaCentral});
  GranBretania->setNeighbors({Islandia, Escandinavia, EuropaDelNorte, EuropaOccidental});
  Islandia->setNeighbors({Groenlandia, GranBretania, Escandinavia});
  EuropaDelNorte->setNeighbors({GranBretania, Escandinavia, Ucrania, EuropaOccidental});
  Escandinavia->setNeighbors({Islandia, GranBretania, EuropaDelNorte, Ucrania});
  EuropaDelSur->setNeighbors({GranBretania, EuropaOccidental, Ucrania, MedioOriente, Egipto, AfricaDelNorte});
  Ucrania->setNeighbors({EuropaDelNorte, Escandinavia, EuropaDelSur, MedioOriente, Afghanistan, Ural});
  EuropaOccidental->setNeighbors({GranBretania, EuropaDelNorte, EuropaDelSur, AfricaDelNorte});
  Afghanistan->setNeighbors({Ucrania, Ural, China, India, MedioOriente});
  China->setNeighbors({Afghanistan, Ural, Siberia, Mongolia, Siam, India});
  India->setNeighbors({Afghanistan, China, Siam});
  Irkutsk->setNeighbors({Siberia, Yakutsk, Kamchatka, Mongolia});
  Japon->setNeighbors({Kamchatka, Mongolia});
  Kamchatka->setNeighbors({Alaska, Irkutsk, Yakutsk, Japon, Mongolia});
  MedioOriente->setNeighbors({Ucrania, Afghanistan, India, Egipto, AfricaDelNorte, EuropaDelSur});
  Mongolia->setNeighbors({Siberia, Irkutsk, Kamchatka, Japon, China});
  Siam->setNeighbors({India, China, Indonesia});
  Siberia->setNeighbors({Ural, China, Mongolia, Irkutsk, Yakutsk});
  Ural->setNeighbors({Ucrania, Afghanistan, China, Siberia});
  Yakutsk->setNeighbors({Siberia, Irkutsk, Kamchatka});
  Argentina->setNeighbors({Brasil, Peru});
  Brasil->setNeighbors({Argentina, Peru, Colombia, AfricaDelNorte});
  Peru->setNeighbors({Brasil, Argentina, Colombia});
  Colombia->setNeighbors({Brasil, Peru, AmericaCentral});
  Congo->setNeighbors({AfricaOriental, AfricaDelSur, AfricaDelNorte});
  AfricaOriental->setNeighbors({Congo, AfricaDelSur, Madagascar, Egipto, AfricaDelNorte});
  Egipto->setNeighbors({AfricaDelNorte, AfricaDelSur, EuropaDelSur, MedioOriente, AfricaOriental});
  Madagascar->setNeighbors({AfricaOriental, AfricaDelSur});
  AfricaDelNorte->setNeighbors({Egipto, EuropaDelSur, AfricaOriental, Congo, Brasil, EuropaOccidental});
  AfricaDelSur->setNeighbors({Congo, AfricaOriental, Egipto, Madagascar});
  AustraliaOriental->setNeighbors({Indonesia, NuevaGuinea});
  Indonesia->setNeighbors({AustraliaOriental, NuevaGuinea, Siam});
  NuevaGuinea->setNeighbors({AustraliaOriental, Indonesia, AustraliaOccidental});
  AustraliaOccidental->setNeighbors({NuevaGuinea, Indonesia});

  Continent *AmericaDelNorte = new Continent(
      "AmericaDelNorte",
      {Alaska, Alberta,
       AmericaCentral,
       EstadosUnidosOrientales,
       Groenlandia,
       TerritorioNoroccidental,
       Ontario,
       Quebec,
       EstadosUnidosOccidentales},
      nullptr, 5);

  Continent *Europa = new Continent(
      "Europa",
      {GranBretania,
       Islandia,
       EuropaDelNorte,
       Escandinavia,
       EuropaDelSur,
       Ucrania,
       EuropaOccidental},
      nullptr, 5);

  Continent *Asia = new Continent(
      "Asia",
      {Afghanistan,
       China,
       India,
       Irkutsk,
       Japon,
       Kamchatka,
       MedioOriente,
       Mongolia,
       Siam,
       Siberia,
       Ural,
       Yakutsk},
      nullptr, 7);

  Continent *AmericaDelSur = new Continent(
      "AmericaDelSur",
      {Argentina,
       Brasil,
       Peru,
       Colombia},
      nullptr, 2);

  Continent *Africa = new Continent(
      "Africa",
      {Congo,
       AfricaOriental,
       Egipto,
       Madagascar,
       AfricaDelNorte,
       AfricaDelSur},
      nullptr, 3);

  Continent *Australia = new Continent(
      "Australia",
      {AustraliaOriental,
       Indonesia,
       NuevaGuinea,
       AustraliaOccidental},
      nullptr, 2);

  this->continents.push_back(AmericaDelNorte);
  this->continents.push_back(Europa);
  this->continents.push_back(Asia);
  this->continents.push_back(AmericaDelSur);
  this->continents.push_back(Africa);

  this->territories.push_back(Alaska);
  this->territories.push_back(Alberta);
  this->territories.push_back(AmericaCentral);
  this->territories.push_back(EstadosUnidosOrientales);
  this->territories.push_back(Groenlandia);
  this->territories.push_back(TerritorioNoroccidental);
  this->territories.push_back(Ontario);
  this->territories.push_back(Quebec);
  this->territories.push_back(EstadosUnidosOccidentales);
  this->territories.push_back(GranBretania);
  this->territories.push_back(Islandia);
  this->territories.push_back(EuropaDelNorte);
  this->territories.push_back(Escandinavia);
  this->territories.push_back(EuropaDelSur);
  this->territories.push_back(Ucrania);
  this->territories.push_back(EuropaOccidental);
  this->territories.push_back(Afghanistan);
  this->territories.push_back(China);
  this->territories.push_back(India);
  this->territories.push_back(Irkutsk);
  this->territories.push_back(Japon);
  this->territories.push_back(Kamchatka);
  this->territories.push_back(MedioOriente);
  this->territories.push_back(Mongolia);
  this->territories.push_back(Siam);
  this->territories.push_back(Siberia);
  this->territories.push_back(Ural);
  this->territories.push_back(Yakutsk);
  this->territories.push_back(Argentina);
  this->territories.push_back(Brasil);
  this->territories.push_back(Peru);
  this->territories.push_back(Colombia);
  this->territories.push_back(Congo);
  this->territories.push_back(AfricaOriental);
  this->territories.push_back(Egipto);
  this->territories.push_back(Madagascar);
  this->territories.push_back(AfricaDelNorte);
  this->territories.push_back(AfricaDelSur);
  this->territories.push_back(AustraliaOriental);
  this->territories.push_back(Indonesia);
  this->territories.push_back(NuevaGuinea);
  this->territories.push_back(AustraliaOccidental);

  this->cards.push_back(new Card(1, 's', Alaska));
  this->cards.push_back(new Card(2, 'h', Alberta));
  this->cards.push_back(new Card(3, 'c', AmericaCentral));
  this->cards.push_back(new Card(4, 's', EstadosUnidosOrientales));
  this->cards.push_back(new Card(5, 'h', Groenlandia));
  this->cards.push_back(new Card(6, 'c', TerritorioNoroccidental));
  this->cards.push_back(new Card(7, 's', Ontario));
  this->cards.push_back(new Card(8, 'h', Quebec));
  this->cards.push_back(new Card(9, 'c', EstadosUnidosOccidentales));
  this->cards.push_back(new Card(10, 's', GranBretania));
  this->cards.push_back(new Card(11, 'h', Islandia));
  this->cards.push_back(new Card(12, 'c', EuropaDelNorte));
  this->cards.push_back(new Card(13, 's', Escandinavia));
  this->cards.push_back(new Card(14, 'h', EuropaDelSur));
  this->cards.push_back(new Card(15, 'c', Ucrania));
  this->cards.push_back(new Card(16, 's', EuropaOccidental));
  this->cards.push_back(new Card(17, 'h', Afghanistan));
  this->cards.push_back(new Card(18, 'c', China));
  this->cards.push_back(new Card(19, 's', India));
  this->cards.push_back(new Card(20, 'h', Irkutsk));
  this->cards.push_back(new Card(21, 'c', Japon));
  this->cards.push_back(new Card(22, 's', Kamchatka));
  this->cards.push_back(new Card(23, 'h', MedioOriente));
  this->cards.push_back(new Card(24, 'c', Mongolia));
  this->cards.push_back(new Card(25, 's', Siam));
  this->cards.push_back(new Card(26, 'h', Siberia));
  this->cards.push_back(new Card(27, 'c', Ural));
  this->cards.push_back(new Card(28, 's', Yakutsk));
  this->cards.push_back(new Card(29, 'h', Argentina));
  this->cards.push_back(new Card(30, 'c', Brasil));
  this->cards.push_back(new Card(31, 's', Peru));
  this->cards.push_back(new Card(32, 'h', Colombia));
  this->cards.push_back(new Card(33, 'c', Congo));
  this->cards.push_back(new Card(34, 's', AfricaOriental));
  this->cards.push_back(new Card(35, 'h', Egipto));
  this->cards.push_back(new Card(36, 'c', Madagascar));
  this->cards.push_back(new Card(37, 's', AfricaDelNorte));
  this->cards.push_back(new Card(38, 'h', AfricaDelSur));
  this->cards.push_back(new Card(39, 'c', AustraliaOriental));
  this->cards.push_back(new Card(40, 's', Indonesia));
  this->cards.push_back(new Card(41, 'h', NuevaGuinea));
  this->cards.push_back(new Card(42, 'c', AustraliaOccidental));
  std::random_shuffle(cards.begin(), cards.end());
}

Game::Game()
{
  this->createTerritories();
  this->players = std::vector<Player *>();
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

int Game::countCards(Player *player)
{
  int soldier = 0;
  int horse = 0;
  int canon = 0;

  if (player->getCards().size() != 0)
    return 0;

  for (int i = 0; i < player->getCards().size(); i++)
  {
    if (player->getCards()[i]->getType() == 's')
    {
      soldier++;
    }
    if (player->getCards()[i]->getType() == 'h')
    {
      horse++;
    }
    if (player->getCards()[i]->getType() == 'c')
    {
      canon++;
    }
  }

  if (soldier >= 3)
  {
    return 1;
  }
  else if (horse >= 3)
  {
    return 2;
  }
  else if (canon >= 3)
  {
    return 3;
  }
  else if (soldier >= 1 && horse >= 1 && canon >= 1)
  {
    return 4;
  }
  else
  {
    return 0;
  }
}

void Game::allocateSoldiers()
{
  int soldiersToFortify = 0;
  std::queue<Player *> playersToFortify;
  std::vector<int> TerritoryAux;
  std::vector<Player *>::iterator PlayerIt = this->players.begin();
  std::vector<Territory *>::iterator TerritoryIt;
  std::vector<int>::iterator TerritoryAuxIt;
  int territory = 0;

  for (int i = 0; i < 6; i++)
  {
    std::cout << "-----------------------" << std::endl;
    std::cout << "Es el turno de: " << (*PlayerIt)->getName() << std::endl;
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

    (*PlayerIt)->assignTerritory(this->territories[territory - 1]);
    (*PlayerIt)->removeSoldiers(1);

    TerritoryIt = this->territories.begin();
    std::advance(TerritoryIt, territory - 1);
    (*TerritoryIt)->addSoldiers(1);

    std::cout << "---------------------------------------------------------" << std::endl;
    std::cout << "Ha escogido el territorio " << (*TerritoryIt)->getId() << ": " << (*TerritoryIt)->getName() << std::endl;
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
    std::cout << "Es el turno de: " << (*PlayerIt)->getName() << std::endl;
    std::cout << "-----------------------" << std::endl;
    (*PlayerIt)->printOwnedTerritories();
    std::cout << "¿Cual territorio desea fortificar?: ";
    std::cin >> territory;
    if (!(*PlayerIt)->isOwned(this->territories[territory - 1]))
    {
      std::cout << "Este territorio no es suyo" << std::endl;
      continue;
    }
    std::cout << "Usted tiene: " << (*PlayerIt)->getSoldiersToAllocate() << " soldados para poner" << std::endl;
    std::cout << "Cuantos soldados va a posicionar?: ";
    std::cin >> soldiersToFortify;
    if ((*PlayerIt)->getSoldiersToAllocate() >= soldiersToFortify && soldiersToFortify > 0)
    {
      TerritoryIt = this->territories.begin();
      std::advance(TerritoryIt, territory - 1);
      (*TerritoryIt)->addSoldiers(soldiersToFortify);
      (*PlayerIt)->removeSoldiers(soldiersToFortify);
      std::cout << "---------------------------------------------------------" << std::endl;
      std::cout << (*TerritoryIt)->getName() << " ha quedado con " << (*TerritoryIt)->getSoldiers() << " soldados " << std::endl;
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
    if ((*PlayerIt)->getSoldiersToAllocate() != 0)
    {
      playersToFortify.push(*PlayerIt);
    }

    if (playersToFortify.size() == 0)
    {
      break;
    }

    while ((*PlayerIt)->getId() != playersToFortify.front()->getId())
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
    Player *newPlayer = new Player(i + 1, name);
    switch (playerAmount)
    {
    case 3:
      newPlayer->setSoldiersToAllocate(35);
      break;
    case 4:
      newPlayer->setSoldiersToAllocate(30);
      break;
    case 5:
      newPlayer->setSoldiersToAllocate(25);
      break;
    case 6:
      newPlayer->setSoldiersToAllocate(20);
      break;
    }

    this->players.push_back(newPlayer);
    this->playerIds.push(newPlayer->getId());
  }

  allocateSoldiers();

  return 0;
}

std::string Game::readMessage(std::string filename)
{
  if (filename.substr(filename.length() - 4) == ".txt")
  {
    std::ifstream file(filename);
    std::string message;
    std::string line;
    if (file.is_open())
    {
      while (std::getline(file, line))
      {
        message += line;
      }
      file.close();
      return message;
    }
    else
    {
      return "";
    }
  }
  else
  {
    return this->readFromBIN(filename);
  }
}

std::string Game::readFromBIN(std::string filename)
{
  std::ifstream archivoEntrada(filename, std::ios::binary);
  std::string message;
  if (archivoEntrada.is_open())
  {
    // Leer n (2 bytes) desde el archivo
    int n;
    archivoEntrada.read(reinterpret_cast<char *>(&n), sizeof(n));

    // Crear un mapa para almacenar los pares de caracteres y sus frecuencias
    std::map<char, int> frecuencias;

    // Leer ci y fi para cada caracter desde el archivo
    for (int i = 0; i < n; ++i)
    {
      char ci;
      int fi;
      archivoEntrada.read(&ci, sizeof(ci));
      archivoEntrada.read(reinterpret_cast<char *>(&fi), sizeof(fi));
      frecuencias[ci] = fi;
    }

    // Leer w (8 bytes) desde el archivo
    int w;
    archivoEntrada.read(reinterpret_cast<char *>(&w), sizeof(w));

    // Leer la secuencia binaria desde el archivo
    std::string binary_code;
    char byte;

    while (archivoEntrada.read(&byte, sizeof(byte)))
    {
      binary_code += byte;
    }

    HuffmanTree *tree = new HuffmanTree(frecuencias);
    message = tree->decode(binary_code, w);

    // Cerrar el archivo
    archivoEntrada.close();

    return message;
  }
  else
  {
    return "";
  }
}

int Game::initializeFromFile(std::string filename)
{
  if (this->initialized)
  {
    std::cout << "------------------------------" << std::endl;
    std::cout << "Este juego ya ha sido empezado" << std::endl;
    std::cout << "------------------------------" << std::endl;
    return -1;
  }

  std::string message = this->readMessage(filename);

  if (message == "")
  {
    std::cout << "------------------------" << std::endl;
    std::cout << "Error al leer el archivo" << std::endl;
    std::cout << "------------------------" << std::endl;
    return 0;
  }

  std::istringstream stream(message);    // Crea un flujo de entrada a partir del string
  std::vector<std::string> insideTokens; // Vector para almacenar los tokens correspondientes a cada jugador
  std::string playerInformation;
  std::vector<std::string> tokens; // Vector para almacenar los tokens separados por \n
  std::string token;

  while (stream >> token)
  {
    tokens.push_back(token); // Agrega el token al vector
  }

  std::vector<std::string>::iterator tokenIT = tokens.begin();
  int playerAmount = std::stoi(*tokenIT);
  tokenIT++;
  for (int i = 0; i < playerAmount; i++)
  {
    std::string insideString = *tokenIT;
    std::istringstream insideStream(insideString);             // Crea un flujo de entrada a partir del string
    while (std::getline(insideStream, playerInformation, ',')) // Diferenciación por comas
    {
      insideTokens.push_back(playerInformation); // Agrega el token al vector
    }
    std::vector<std::string>::iterator insideIterator = insideTokens.begin();
    int newPlayerId = std::stoi(*insideIterator);
    insideIterator++;
    std::string playerName = *insideIterator;
    Player *newPlayer = new Player(newPlayerId, playerName);
    insideIterator++;
    int territoryAmount = std::stoi(*insideIterator);

    for (int i = 0; i < territoryAmount; i++)
    {

      insideIterator++;
      int territoryId = std::stoi(*insideIterator);
      newPlayer->assignTerritory(this->territories[territoryId - 1]);

      insideIterator++;
      this->territories[territoryId - 1]->addSoldiers(std::stoi(*insideIterator));
    }

    insideIterator++;
    int cardAmount = std::stoi(*insideIterator);
    for (int i = 0; i < cardAmount; i++)
    {
      insideIterator++;
      int cardId = std::stoi(*insideIterator);
      newPlayer->addCard(this->cards[cardId - 1]);
    }

    this->players.push_back(newPlayer);
    while (!insideTokens.empty())
    {
      insideTokens.pop_back();
    }

    tokenIT++;
  }

  int isTurn = std::stoi(*tokenIT);
  for (int i = 0; i < playerAmount; i++)
  {
    this->playerIds.push(isTurn);
    if (isTurn == playerAmount)
    {
      isTurn = 0;
    }
    isTurn++;
  }

  this->initialized = true;

  std::cout << "--------------------------" << std::endl;
  std::cout << "Juego cargado exitosamente" << std::endl;
  std::cout << "--------------------------" << std::endl;

  return 0;
}

std::string Game::generateMessage()
{
  std::string message = "";

  message += std::to_string(this->players.size()) += "\n";

  for (int i = 0; i < this->players.size(); i++)
  {
    message += std::to_string(this->players[i]->getId()) + "," + this->players[i]->getName() += "," + std::to_string(this->players[i]->getTerritories()->size()) += ",";
    for (int j = 0; j < this->players[i]->getTerritories()->size(); j++)
    {
      message += std::to_string((*this->players[i]->getTerritories())[j]->getId()) + "," + std::to_string((*this->players[i]->getTerritories())[j]->getSoldiers()) + ",";
    }

    int cardsAmount = this->players[i]->getCards().size();
    message += (cardsAmount == 0) ? "0" : std::to_string(cardsAmount);

    for (int j = 0; j < this->players[i]->getCards().size(); j++)
    {
      if (j == this->players[i]->getCards().size() - 1)
      {
        message += std::to_string(this->players[i]->getCards()[j]->getId());
        break;
      }
      message += std::to_string(this->players[i]->getCards()[j]->getId()) += ",";
    }
    message += "\n";
  }

  message += std::to_string(this->playerIds.front());

  return message;
}

int Game::save(std::string filename)
{
  if (!this->initialized)
  {
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "El juego no ha sido inicializado todavía" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    return 0;
  }

  if (filename == "")
  {
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "No se ha especificado un nombre de archivo" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    return 0;
  }

  if (filename.substr(filename.length() - 4) != ".txt")
  {
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "El nombre del archivo debe terminar en .txt" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    return 0;
  }

  std::fstream file(filename, std::ios::out);

  std::string message = this->generateMessage();
  file << message;

  file.close();
  return 1;
}

int Game::compressedSave(std::string filename)
{
  if (!this->initialized)
  {
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "El juego no ha sido inicializado todavía" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    return 0;
  }

  std::string message = this->generateMessage();
  std::map<char, int> frequencies;

  for (char c : message)
  {
    frequencies[c]++;
  }

  HuffmanTree *tree = new HuffmanTree(frequencies);
  int uniqueChars = frequencies.size();

  int size = message.size();
  std::string encodedMessage = tree->encode(message);

  std::ofstream file(filename, std::ios::binary);

  file.write(reinterpret_cast<const char *>(&uniqueChars), sizeof(uniqueChars));

  for (auto pair : frequencies)
  {
    char ci = pair.first;
    int fi = pair.second;

    file.write(&ci, sizeof(ci));
    file.write(reinterpret_cast<const char *>(&fi), sizeof(fi));
  }

  file.write(reinterpret_cast<const char *>(&size), sizeof(size));

  std::string binary_code = "";
  for (char c : encodedMessage)
  {
    binary_code += c;
  }
  file.write(binary_code.c_str(), binary_code.size());

  return 1;
}

void Game::printAdjacentTerritories(int territory, int playerId, bool adjacentOwned)
{
  std::vector<Territory *> *neighbors = this->territories[territory - 1]->getNeighbors();
  std::vector<Territory *> *playerTerritories = this->players[playerId - 1]->getTerritories();

  (*neighbors)[0]->getId();

  if (adjacentOwned)
  {
    for (int i = 0; i < (*neighbors).size(); i++)
    {
      for (int j = 0; j < (*playerTerritories).size(); j++)
      {
        if (neighbors[i] == playerTerritories[j])
        {
          Territory *territory = this->territories[(*neighbors)[i]->getId() - 1];
          std::cout << (*territory).getId() << " " << (*territory).getName() << " - Soldados: " << (*territory).getSoldiers() << std::endl;
        }
      }
    }
    return;
  }

  for (int i = 0; i < (*neighbors).size(); i++)
  {
    bool found = false;
    for (int j = 0; j < (*playerTerritories).size(); j++)
    {
      if (neighbors[i] == playerTerritories[j])
      {
        found = true;
        break;
      }
    }
    if (!found)
    {
      Territory *territory = this->territories[(*neighbors)[i]->getId() - 1];
      std::cout << (*territory).getId() << " " << (*territory).getName() << " - Soldados: " << (*territory).getSoldiers() << std::endl;
    }
  }
  return;
}

bool Game::isValidToAttack(Player *player, Territory *territory)
{
  bool isFromPlayer = false;
  int soldiers = 0;
  bool found = false;
  bool Adjacent = false;
  std::vector<Territory *> *territoriesP = player->getTerritories();
  for (int i = 0; i < territories.size(); i++)
  {
    if ((*territoriesP)[i] == territory)
    {
      isFromPlayer = true;
      break;
    }
  }
  for (int i = 0; i < territory->getNeighbors()->size(); i++)
  {
    for (int j = 0; j < territoriesP->size(); j++)
    {
      if (territoriesP[j] == territory->getNeighbors()[i])
      {
        found = true;
      }
    }
    if (!found)
    {
      Adjacent = true;
      break;
    }
  }
  for (int i = 0; i < this->territories.size(); i++)
  {
    if (this->territories[i] == territory)
    {
      soldiers = this->territories[i]->getSoldiers();
    }
  }

  return (isFromPlayer && soldiers > 2 && Adjacent);
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
  for (int i = 0; i < result.size(); i++)
  {
    std::cout << result[i] << std::endl;
  }
  return result;
}

void Game::changeOwner(Player *player, Territory *territory, int newSoldiers)
{
  for (int i = 0; i < players.size(); i++)
  {
    for (int j = 0; j < players[i]->getTerritories()->size(); j++)
    {
      if ((*players[i]->getTerritories())[j] == territory)
      {
        (*players[i]).removeTerritory(territory);
        player->assignTerritory(territory);
      }
    }
  }
  territory->addSoldiers(newSoldiers);
}

void Game::setContinentOwners()
{
  std::vector<Player *>::iterator PlayerIt;
  std::vector<Continent *>::iterator ContinentIt;
  bool owned;

  for (ContinentIt = this->continents.begin(); ContinentIt != this->continents.end(); ++ContinentIt)
  {
    owned = false;
    std::vector<Territory *> TerritoriesInContinent = (*ContinentIt)->getTerritories();

    for (PlayerIt = this->players.begin(); PlayerIt != this->players.end(); ++PlayerIt)
    {
      bool playerOwnsAll = true;
      std::vector<Territory *> *TerritoriesInPlayer = (*PlayerIt)->getTerritories();

      for (int i = 0; i < TerritoriesInContinent.size(); i++)
      {
        bool territoryOwned = false;
        for (int j = 0; j < (*TerritoriesInPlayer).size(); j++)
        {
          if (TerritoriesInContinent[i] == (*TerritoriesInPlayer)[j])
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
        (*ContinentIt)->setOwner((*PlayerIt));
        owned = true;
        break;
      }
    }

    if (!owned)
    {
      (*ContinentIt)->setOwner(nullptr);
    }
  }
}

void Game::Attack(int playerId)
{
  char option;
  bool firstConquered = false;
  while (option != 'n')
  {
    std::cout << "¿Desea atacar a un territorio?: (S/N)";
    std::cin >> option;
    option = tolower(option);

    switch (option)
    {
    case 's':
    {
      int attackFrom;
      int attackTo;
      this->players[playerId - 1]->printOwnedTerritories();
      std::cout << "Elija el numero del territorio desde donde atacar: ";
      std::cin >> attackFrom;
      Territory *attackFromTerritory = this->territories[attackFrom - 1];
      if (!isValidToAttack(this->players[playerId - 1], attackFromTerritory))
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
      if (this->players[playerId - 1]->isOwned(this->territories[attackTo - 1]))
      {
        std::cout << "No puede atacar territorios que son suyos" << std::endl;
        break;
      }
      if (this->territories[attackFrom - 1]->isNeighbor(this->territories[attackTo - 1]))
      {
        Territory *attacking = this->territories[attackFrom - 1];

        int diceAttacking = attacking->getSoldiers() - 1;
        if (diceAttacking > 3)
          diceAttacking = 3;
        Territory *defending = this->territories[attackTo - 1];
        int diceDefending = defending->getSoldiers();
        if (diceDefending > 2)
          diceDefending = 2;
        std::cout << "Dados del atacante: " << std::endl;
        std::vector<int> resultAttacking = rollDice(diceAttacking);
        std::cout << "Dados del defensor: " << std::endl;
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
            this->territories[attackTo - 1]->removeSoldiers(1);
            if (this->territories[attackTo - 1]->getSoldiers() == 0)
            {
              std::cout << "El jugador " << playerId << " ha ganado el territorio" << std::endl;
              int soldiersToDeplace;
              std::cout << "A usted le quedan: " << this->territories[attackFrom - 1]->getSoldiers() << " Soldados en: " << this->territories[attackFrom - 1]->getName() << std::endl;
              std::cout << "Cuantos soldados desea deplazar?: ";
              std::cin >> soldiersToDeplace;
              while (this->territories[attackFrom - 1]->getSoldiers() <= soldiersToDeplace)
              {
                std::cout << "No hay territorios vacios" << std::endl;
                std::cout << "Cuantos soldados desea deplazar?: ";
                std::cin >> soldiersToDeplace;
              }
              this->territories[attackFrom - 1]->removeSoldiers(soldiersToDeplace);
              changeOwner(this->players[playerId], this->territories[attackTo - 1], soldiersToDeplace);
              if (!firstConquered)
              {
                this->players[playerId - 1]->addCard(this->cards[0]);
                Card *tempCard = this->cards[0];
                this->cards.pop_front();
                this->cards.push_back(tempCard);
                firstConquered = true;
                std::cout << "Usted ha ganado una carta!" << std::endl;
                switch (tempCard->getType())
                {
                case 's':
                  std::cout << "Esta carta es del tipo Infantería" << std::endl;
                  break;
                case 'h':
                  std::cout << "Esta carta es del tipo Caballería" << std::endl;
                  break;
                case 'c':
                  std::cout << "Esta carta es del tipo Artillería" << std::endl;
                  break;
                }
              }
              break;
            }
          }
          else
          {
            std::cout << "El jugador " << playerId << " ha perdido el ataque" << std::endl;
            std::cout << "Ha perdido un soldado en " << this->territories[attackFrom - 1]->getName() << std::endl;
            this->territories[attackFrom - 1]->removeSoldiers(1);
          }
        }
      }
      else
      {
        std::cout << "Este territorio no está disponible para atacar" << std::endl;
      }
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
  std::vector<Player *>::iterator PlayerIt = this->players.begin();
  std::vector<Territory *>::iterator TerritoryIt;
  for (; PlayerIt != this->players.end(); PlayerIt++)
  {
    if ((*PlayerIt)->getId() == playerId)
      break;
  }
  int exchange = countCards(*PlayerIt);
  char option;
  if (exchange > 0)
  {
    std::cout << "Puede intercambiar sus cartas! Esto le daría tropas extra" << std::endl;
    std::cout << "¿Desea hacerlo? (s/n): ";
    std::cin >> option;
    option = tolower(option);
    switch (option)
    {
    case 's':
      completeExchange(playerId, exchange);
      break;
    case 'n':
      std::cout << "Decidió no intercambiar cartas" << std::endl;
      break;
    }
  }
  int territory;
  int soldiersToPlace;
  while ((*PlayerIt)->getSoldiersToAllocate() > 0)
  {
    (*PlayerIt)->printOwnedTerritories();
    std::cout << "Usted tiene: " << (*PlayerIt)->getSoldiersToAllocate() << " soldados para poner" << std::endl;
    std::cout << "¿En cual territorio desea posicionar sus soldados?: ";
    std::cin >> territory;
    if (!(*PlayerIt)->isOwned(this->territories[territory - 1]))
    {
      std::cout << "Este territorio no es suyo" << std::endl;
      continue;
    }
    std::cout << "Cuantos soldados le va a meter?: ";
    std::cin >> soldiersToPlace;
    if ((*PlayerIt)->getSoldiersToAllocate() >= soldiersToPlace && soldiersToPlace > 0)
    {
      TerritoryIt = this->territories.begin();
      std::advance(TerritoryIt, territory - 1);
      (*TerritoryIt)->addSoldiers(soldiersToPlace);
      (*PlayerIt)->removeSoldiers(soldiersToPlace);

      std::cout << "---------------------------------------------------------" << std::endl;
      std::cout << (*TerritoryIt)->getName() << " ha quedado con " << (*TerritoryIt)->getSoldiers() << " soldados " << std::endl;
      std::cout << "---------------------------------------------------------" << std::endl;
      std::cin.ignore();
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
  this->players[playerId - 1]->printOwnedTerritories();

  char option;
  std::cout << "¿Desea fortificar alguno de sus territorios?: (S/N)";
  std::cin >> option;
  bool retry = true;

  while (retry)
  {
    switch (tolower(option))
    {
    case 's':
    {
      bool finished = false;

      while (!finished && retry)
      {
        int territoryFrom;
        int territoryTo;
        this->players[playerId - 1]->printOwnedTerritories();
        std::cout << "Elija el numero del territorio a fortificar: ";
        std::cin >> territoryTo;

        printAdjacentTerritories(territoryTo, playerId, true);
        std::cout << "Elija el numero del territorio del que parten los soldados: ";
        std::cin >> territoryFrom;
        Territory *territoryFromT = this->territories[territoryFrom - 1];
        Territory *territoryToT = this->territories[territoryTo - 1];
        if (this->players[playerId - 1]->isOwned(territoryFromT) && this->players[playerId - 1]->isOwned(territoryToT))
        {
          if (territoryToT->isNeighbor(territoryFromT))
          {
            int soldiersToMove = 0;
            while (true)
            {
              std::cout << "¿Cuantos soldados desea mover?: ";
              std::cin >> soldiersToMove;

              if (territories[territoryFrom - 1]->getSoldiers() <= soldiersToMove)
              {
                std::cout << "No tiene los soldados suficientes" << std::endl;
                std::cout << "No puede dejar el territorio vacio" << std::endl;
                continue;
              }
              finished = true;
              break;
            }
            territories[territoryFrom - 1]->removeSoldiers(soldiersToMove);
            territories[territoryTo - 1]->addSoldiers(soldiersToMove);

            this->players[playerId - 1]->printOwnedTerritories();
            retry = false;
          }
          else
          {
            std::cout << "-----------------------------------------" << std::endl;
            std::cout << "No puede fortificar desde este territorio" << std::endl;
            std::cout << "-----------------------------------------" << std::endl;
          }
        }
        else
        {
          std::cout << "-----------------------------------------" << std::endl;
          std::cout << "Ha escogido un territorio que no es suyo" << std::endl;
          std::cout << "-----------------------------------------" << std::endl;
        }

        if (retry)
        {
          std::cout << "¿Desea fortificar alguno de sus territorios?: (S/N)";
          std::cin >> option;
          break;
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
  std::cout << "Es el turno del jugador: " << players[playerId - 1]->getName() << std::endl;
  std::cout << "----------------------------------" << std::endl;

  std::vector<Player *>::iterator PlayerIt = this->players.begin();
  for (; PlayerIt != this->players.end(); PlayerIt++)
  {
    if (playerId == (*PlayerIt)->getId())
      break;
  }
  setContinentOwners();
  int newSoldiers = (*PlayerIt)->getTerritories()->size() / 3;
  if (newSoldiers < 3)
    newSoldiers = 3;

  std::vector<Continent *>::iterator ContinentIt = this->continents.begin();
  for (; ContinentIt != this->continents.end(); ContinentIt++)
  {
    if ((*ContinentIt)->getOwner() == *PlayerIt)
    {
      newSoldiers += (*ContinentIt)->getValue();
    }
  }

  (*PlayerIt)->setSoldiersToAllocate(newSoldiers);
  placeArmies(playerId);
  Attack(playerId);
  Fortify(playerId);

  this->playerIds.push(this->playerIds.front());
  playerIds.pop();

  std::cin.ignore();

  return 1;
}

void Game::completeExchange(int playerId, int exchange)
{
  std::vector<Card *>::iterator cardIt;
  int cardCounter = 0; // Contador de cartas que se intercambiarán, llega hasta 3
  int value = 0;
  this->players[playerId - 1]->setExchangeCounter(this->players[playerId - 1]->getExchangeCounter() + 1);
  int counter = this->players[playerId - 1]->getExchangeCounter();
  switch (counter)
  {
  case 1:
    value = 4;
    break;
  case 2:
    value = 6;
    break;
  case 3:
    value = 8;
    break;
  case 4:
    value = 10;
    break;
  case 5:
    value = 12;
    break;
  case 6:
    value = 15;
  default:
    value = 15 + (5 * (counter - 6));
    break;
  }
  if (exchange == 1)
  {
    for (cardIt = this->players[playerId - 1]->getCards().begin(); cardIt != this->players[playerId - 1]->getCards().end(); cardIt++)
    {
      if ((*cardIt)->getType() == 's' && cardCounter < 3)
      {
        if (this->players[playerId - 1]->isOwned((*cardIt)->getTerritory()))
        {
          (*cardIt)->getTerritory()->addSoldiers(2);
          std::cout << "Se añadieron 2 soldados al territorio: " << (*cardIt)->getTerritory()->getName() << std::endl;
        }
        this->players[playerId - 1]->removeCard((*cardIt));
        cardCounter++;
      }
    }
  }
  else if (exchange == 2)
  {
    for (cardIt = this->players[playerId - 1]->getCards().begin(); cardIt != this->players[playerId - 1]->getCards().end(); cardIt++)
    {
      if ((*cardIt)->getType() == 'h' && cardCounter < 3)
      {
        if (this->players[playerId - 1]->isOwned((*cardIt)->getTerritory()))
        {
          (*cardIt)->getTerritory()->addSoldiers(2);
          std::cout << "Se añadieron 2 soldados al territorio: " << (*cardIt)->getTerritory()->getName() << std::endl;
        }
        this->players[playerId - 1]->removeCard((*cardIt));
        cardCounter++;
      }
    }
  }
  else if (exchange == 3)
  {
    for (cardIt = this->players[playerId - 1]->getCards().begin(); cardIt != this->players[playerId - 1]->getCards().end(); cardIt++)
    {
      if (this->players[playerId - 1]->isOwned((*cardIt)->getTerritory()))
      {
        (*cardIt)->getTerritory()->addSoldiers(2);
        std::cout << "Se añadieron 2 soldados al territorio: " << (*cardIt)->getTerritory()->getName() << std::endl;
      }
      if ((*cardIt)->getType() == 'c' && cardCounter < 3)
      {
        this->players[playerId - 1]->removeCard((*cardIt));
        cardCounter++;
      }
    }
  }
  else
  {
    int soldier = 0;
    int horseman = 0;
    int artillery = 0;
    for (cardIt = this->players[playerId - 1]->getCards().begin(); cardIt != this->players[playerId - 1]->getCards().end(); cardIt++)
    {
      if (cardCounter < 3)
      {
        if ((*cardIt)->getType() == 's' && soldier < 1)
        {
          if (this->players[playerId - 1]->isOwned((*cardIt)->getTerritory()))
          {
            (*cardIt)->getTerritory()->addSoldiers(2);
            std::cout << "Se añadieron 2 soldados al territorio: " << (*cardIt)->getTerritory()->getName() << std::endl;
          }
          this->players[playerId - 1]->removeCard((*cardIt));
          soldier++;
        }
        if ((*cardIt)->getType() == 'h' && horseman < 1)
        {
          if (this->players[playerId - 1]->isOwned((*cardIt)->getTerritory()))
          {
            (*cardIt)->getTerritory()->addSoldiers(2);
            std::cout << "Se añadieron 2 soldados al territorio: " << (*cardIt)->getTerritory()->getName() << std::endl;
          }
          this->players[playerId - 1]->removeCard((*cardIt));
          horseman++;
        }
        if ((*cardIt)->getType() == 'c' && artillery < 1)
        {
          if (this->players[playerId - 1]->isOwned((*cardIt)->getTerritory()))
          {
            (*cardIt)->getTerritory()->addSoldiers(2);
            std::cout << "Se añadieron 2 soldados al territorio: " << (*cardIt)->getTerritory()->getName() << std::endl;
          }
          this->players[playerId - 1]->removeCard((*cardIt));
          artillery++;
        }
        cardCounter++;
      }
    }
  }
  this->players[playerId - 1]->setSoldiersToAllocate(this->players[playerId - 1]->getSoldiersToAllocate() + value);
}