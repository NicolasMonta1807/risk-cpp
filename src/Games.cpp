#include <iostream>
#include "Games.h"

using namespace std;

int initialize()
{
  cout << "Initializing..." << endl;
  return 0;
}

int initializeFromFile(string filename)
{
  cout << "Initializing from file: " << filename << endl;
  return 0;
}

int save(string filename)
{
  cout << "Saving to: " << filename << endl;
  return 0;
}

int compressedSave(string filename)
{
  cout << "Saving compressed to: " << filename << endl;
  return 0;
}