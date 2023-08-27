#include <iostream>
#include <sstream>
#include <string>
#include "Commands.h"
#include "Turns.h"

using namespace std;

int handleCommand(Game game, string command)
{
  string filename;
  string other;
  int id;
  istringstream iss(command);
  iss >> command;

  if (command == "help")
  {
    return help(command);
  }

  if (command == "exit")
  {
    cout << "Exiting..." << endl;
    exit(0);
  }

  if (command == "initialize")
  {
    if (iss >> filename)
    {
      if (iss >> other)
      {
        return -1;
      }
      return game.initializeFromFile(filename);
    }
    game.initialize();
    cout << game.getPlayers().begin()->getName() << " is playing." << endl;
    return 0;
  }

  if (command == "save")
  {
    if (iss >> filename)
    {
      if (iss >> other)
      {
        return -1;
      }
      return game.save(filename);
    }
    else
    {
      cout << "Usage: save <filename>" << endl;
      return 0;
    }
  }

  if (command == "compressed_save")
  {
    if (iss >> filename)
    {
      if (iss >> other)
      {
        return -1;
      }
      return game.compressedSave(filename);
    }
    else
    {
      cout << "Usage: compressed_save <filename>" << endl;
      return 0;
    }
  }

  if (command == "turn")
  {
    if (iss >> id)
    {
      if (iss >> other)
      {
        return -1;
      }
      cout << game.getPlayers().begin()->getName() << " is playing." << endl;
      return game.turn(id);
    }
    else
    {
      cout << "Usage: turn <player ID>" << endl;
      return 0;
    }
  }
  return -1;
}

int help(string command)
{
  cout << "Usage: command [options]" << endl
       << endl;
  cout << "\tCommand \t Meaning" << endl;
  cout << "\tinitialize \tCreate and configure a new game" << endl;
  cout << "\tinitialize <filename> \tLoad a game from a file" << endl;
  cout << "\tsave <filename> \tSave the current game to a file" << endl;
  cout << "\tcompressed_save <filename> \tSave the current game to a file" << endl;
  cout << "\tturn <player ID> \tStart a new turn for a player" << endl;
  cout << "\thelp \tShow this message" << endl;

  // TODO: Add help for each command

  return 0;
}