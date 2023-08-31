#include <iostream>
#include "Game.h"
#include "Commands.h"

using namespace std;

int main()
{

  welcome();

  Game *game = new Game();
  string userInput;

  while (true)
  {
    cout << "risk> ";
    getline(cin, userInput);
    if (handleCommand(game, userInput) == -1)
    {
      cout << "Comando invalido: " << userInput << endl;
      cout << "Escriba 'ayuda' para la lista de comandos" << endl;
    }
    continue;
  }
}