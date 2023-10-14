#ifndef __HUFFMAN_NODE_H__
#define __HUFFMAN_NODE_H__

class HuffmanNode
{
private:
  int value;
  char character;
  HuffmanNode *left;
  HuffmanNode *right;

public:
  HuffmanNode(int value, char character);
  HuffmanNode(int value, char character, HuffmanNode *left, HuffmanNode *right);
  ~HuffmanNode();

  int getValue();
  char getCharacter();
  HuffmanNode *getLeft();
  HuffmanNode *getRight();
  void setValue(int value);
  void setCharacter(char character);
  void setLeft(HuffmanNode *left);
  void setRight(HuffmanNode *right);
};

class HuffmanNodeComparator
{
public:
  bool operator()(HuffmanNode *a, HuffmanNode *b);
};

#endif // __HUFFMAN_NODE_H__