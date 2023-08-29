#include <iostream>
#include "Game.h"
#include "Commands.h"

using namespace std;

int main()
{
  // TODO: Show all commands in help
  // TODO: Cuales quedan disponibles
  // Barra diferenciar turnos
  // letrero turno
  // mostrar los dados
  // mostrar cuantos puede desplazar
  // informar
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