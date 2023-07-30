#include <iostream>
#include "Commands.h"

using namespace std;

int main()
{
  string userInput;

  while (true)
  {
    cout << "risk> ";
    getline(cin, userInput);

    if (handleCommand(userInput) == -1)
    {
      cout << "Invalid command: " << userInput << endl;
      cout << "Type 'help' for a list of commands." << endl;
    }
    continue;
  }
}