#include <string>

class CommandTable
{
public:
  struct CommandStruct
  {
    std::string command;
    int (*commandHandler)();
  };

  CommandTable(int tableSize);
  int handleCommand(const std::string &command);
  int setCommand(int index, const std::string &command, int (*handler)());

private:
  CommandStruct *table;
  int tableSize;
  void commandNotFound();
};
