#ifndef _CARD_H_
#define _CARD_H_

#include "Territory.h"

class Card
{
private:
  int id;
  char type;
  Territory *territory;

public:
  Card(int id, char type, Territory *territory);
  int getId();
  char getType();
  Territory *getTerritory();
  void setType(char type);
  void setTerritory(Territory *territory);
};

#endif