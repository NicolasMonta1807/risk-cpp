#include "CommandTable.h"
#include <iostream>

int tickCommand();

CommandTable::CommandTable(int tableSize) : tableSize(tableSize)
{
  table = new CommandStruct[tableSize];
}

int CommandTable::handleCommand(const std::string &command)
{
  for (int i = 0; i < tableSize; ++i)
  {
    if (command == table[i].command)
    {
      table[i].commandHandler();
      return 0;
    }
  }
  commandNotFound();
  return -1;
}

int CommandTable::setCommand(int index, const std::string &command, int (*handler)())
{
  if (index > tableSize - 1 || index < 0)
  {
    std::cerr << "Invalid index for command table: " << index << std::endl;
    exit(-1);
  }
  table[index].command = command;
  table[index].commandHandler = handler;
  return 0;
}

void CommandTable::commandNotFound()
{
  std::cout << "Command not found" << std::endl;
}

int tickCommand()
{
  std::cout << "tick" << std::endl;
  return 0;
}
