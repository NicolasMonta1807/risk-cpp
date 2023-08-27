#include <iostream>
#include "Game.h"
#include "Commands.h"

using namespace std;

int main()
{
  Game *game = new Game();
  string userInput;

  while (true)
  {
    cout << "risk> ";
    getline(cin, userInput);
    if (handleCommand(game, userInput) == -1)
    {
      cout << "Invalid command: " << userInput << endl;
      cout << "Type 'help' for a list of commands." << endl;
    }
    continue;
  }
}