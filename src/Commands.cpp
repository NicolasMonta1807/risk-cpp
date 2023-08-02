#include <iostream>
#include <sstream>
#include <string>
#include "Commands.h"
#include "Games.h"
#include "Turns.h"

using namespace std;

int handleCommand(string command)
{
  string filename;
  string other;
  string id;
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
      return initializeFromFile(filename);
    }
    return initialize();
  }

  if (command == "save")
  {
    if (iss >> filename)
    {
      if (iss >> other)
      {
        return -1;
      }
      return save(filename);
    }
    else
    {
      cout << "Usage: save <filename>" << endl;
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
      return compressedSave(filename);
    }
    else
    {
      cout << "Usage: compressed_save <filename>" << endl;
    }
  }

  if(command == "turn"){
    if(iss >> id)
    {
      if (iss >> other)
      {
        return -1;
      }
      return initializeTurn(id);
    }
    else
    {
      cout << "Usage: turn <player ID>" <<endl;
    }
  }
  return -1;
}

int help(string command)
{
  // TODO: Create help outputs for each command
  return 0;
}