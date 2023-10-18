#include <iostream>
#include <sstream>
#include <string>
#include "Commands.h"

using namespace std;

void welcome()
{
  cout << "----------------------" << endl;
  cout << "Bienvenido a Risk-C++!" << endl;
  cout << "----------------------" << endl;

  help("");
}

int handleCommand(Game *game, string command)
{
  string filename;
  string other;
  int id;
  istringstream iss(command);
  iss >> command;

  if (command == "ayuda")
  {
    if (iss >> other)
    {
      help(other);
      return 0;
    }
    help("");
    return 0;
  }

  if (command == "salir")
  {
    cout << "--------------------" << endl;
    cout << "Gracias por jugar..." << endl;
    cout << "--------------------" << endl;
    exit(0);
  }

  if (command == "inicializar")
  {
    if (iss >> filename)
    {
      if (iss >> other)
      {
        return -1;
      }
      return game->initializeFromFile(filename);
    }
    game->initialize();
    return 0;
  }

  if (command == "guardar")
  {
    if (iss >> filename)
    {
      if (iss >> other)
      {
        return -1;
      }
      return game->save(filename);
    }
    else
    {
      cout << "Uso: guardar <nombre archivo>" << endl;
      return 0;
    }
  }

  if (command == "guardar_comprimido")
  {
    if (iss >> filename)
    {
      if (iss >> other)
      {
        return -1;
      }
      return game->compressedSave(filename);
    }
    else
    {
      cout << "Uso: guardar_comprimido <nombre archivo>" << endl;
      return 0;
    }
  }

  if (command == "turno")
  {
    if (iss >> id)
    {
      if (iss >> other)
      {
        return -1;
      }
      return game->turn(id);
    }
    else
    {
      cout << "Uso: turno <numero jugador>" << endl;
      return 0;
    }
  }
  return -1;
}

void help(string command)
{
  if (command.compare("") == 0)
  {
    cout << "----------------------------------------------------" << endl
         << "Para empezar a jugar, digite las siguientes opciones" << endl
         << endl
         << "inicializar" << endl
         << "  - Configura los jugadores y los territorios iniciales" << endl
         << endl
         << "inicializar [nombre del archivo (.bin o .txt)]" << endl
         << "  - Carga una partida guardada" << endl
         << endl
         << "turno [numeroJugador]" << endl
         << "  - Realiza el turno del jugador. El numero debe ser el jugador del siguiente turno" << endl
         << endl
         << "guardar [nombre del archivo (.txt)]" << endl
         << "  - Guarda la partida en un archivo de texto" << endl
         << "guardar_comprimido [nombre del archivo (.bin)]" << endl
         << "  - Guarda la partida en un archivo binario" << endl
         << "salir" << endl
         << "  - Salir del juego" << endl
         << "----------------------------------------------------" << endl
         << "Si necesita ayuda, digite la opción ayuda" << endl
         << "Tambien puede usar la opcion ayuda <comando> para recibir informacion sobre ese comando" << endl
         << "----------------------------------------------------" << endl;
    return;
  }

  else if (command.compare("inicializar") == 0)
  {
    cout << "----------------------------------------------------" << endl
         << "inicializar" << endl
         << "  - Configura los jugadores y los territorios iniciales" << endl
         << "----------------------------------------------------" << endl
         << "En este comando realizará las siguientes operaciones: " << endl
         << "  - Cantidad de jugadores (3 - 6)" << endl
         << "  - Nombre de cada jugador" << endl
         << "      A cada jugador se le asignará un ID en orden secuencial (1, 2, 3, ...)" << endl
         << " - De acuerdo a las reglas de Risk original, cada jugador selecionará sus territorios iniciales" << endl
         << "   Una vez todos los territorios esten conquistados. Cada uno terminará de posicionar sus soldados restantes"
         << "----------------------------------------------------------------" << endl
         << "Siga las instrucciones en pantalla para llevar a cabo el proceso" << endl
         << "----------------------------------------------------------------" << endl;
    return;
  }

  else if (command.compare("turno") == 0)
  {
    cout << "----------------------------------------------------" << endl
         << "turno [numeroJugador]" << endl
         << "  - Realiza el turno del jugador. El numero debe ser el jugador del siguiente turno" << endl
         << "----------------------------------------------------" << endl
         << "En este comando realizará las siguientes operaciones: " << endl
         << "  - Posicionamiento: " << endl
         << "    Al inicio de cada turno se le asignarán soldados a posicionar dependiendo de los territorios a su disposición." << endl
         << "    Puede posicionar estos soldados en cualquier territorio de su posesión." << endl
         << endl
         << "  - Ataque" << endl
         << "     Si lo desea, puede atacar un territorio. Para esto, selecciona el territorio desde el que desea atacar."
         << "     Luego, seleccione el territorio vecino al que desea atacar." << endl
         << "     Aleatoriamente, se lanzarán dados para determinar la victoria." << endl
         << "     Puede realizar tantos ataques como desee." << endl
         << endl
         << "  - Fortificación" << endl
         << "     Si lo desea, al final de su turno, puede movilizar tropas de un territorio a otro territorio vecino." << endl
         << "     A diferencia del ataque, este proceso solo se puede realizar una vez." << endl
         << "     Aun asi, puede mover tantos soldados como pueda, siempre que no vacie un territorio."
         << "----------------------------------------------------------------" << endl
         << "Siga las instrucciones en pantalla para llevar a cabo el proceso" << endl
         << "----------------------------------------------------------------" << endl;

    return;
  }
  else
  {
    cout << "-----------------" << endl
         << "Comando no valido" << endl
         << "-----------------" << endl;
    help("");
  }
}