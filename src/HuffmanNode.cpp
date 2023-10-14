#include "HuffmanNode.h"

HuffmanNode::HuffmanNode(int value, char character)
{
  this->value = value;
  this->character = character;
  this->left = nullptr;
  this->right = nullptr;
}

HuffmanNode::HuffmanNode(int value, char character, HuffmanNode *left, HuffmanNode *right)
{
  this->value = value;
  this->character = character;
  this->left = left;
  this->right = right;
}

HuffmanNode::~HuffmanNode()
{
  delete this->left;
  delete this->right;
}

int HuffmanNode::getValue()
{
  return this->value;
}

char HuffmanNode::getCharacter()
{
  return this->character;
}

HuffmanNode *HuffmanNode::getLeft()
{
  return this->left;
}

HuffmanNode *HuffmanNode::getRight()
{
  return this->right;
}

void HuffmanNode::setValue(int value)
{
  this->value = value;
}

void HuffmanNode::setCharacter(char character)
{
  this->character = character;
}

void HuffmanNode::setLeft(HuffmanNode *left)
{
  this->left = left;
}

void HuffmanNode::setRight(HuffmanNode *right)
{
  this->right = right;
}

bool HuffmanNodeComparator::operator()(HuffmanNode *a, HuffmanNode *b)
{
  return a->getValue() > b->getValue();
}