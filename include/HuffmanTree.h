#ifndef __HUFFMAN_TREE_H__
#define __HUFFMAN_TREE_H__

#include <queue>
#include <map>
#include <vector>
#include <string>

#include "HuffmanNode.h"

class HuffmanTree
{
private:
  HuffmanNode *root;

public:
  HuffmanTree(const std::map<char, int> &frequencies);
  ~HuffmanTree();
  void buildTree(const std::map<char, int> &frequencies);
  std::map<char, std::string> generateCodes();
  std::string encode(const std::string &message);
  std::string decode(const std::string &encodedMessage, int messageSize);

private:
  void generateCodes(HuffmanNode *node, std::map<char, std::string> &codes, std::string code);
  void deleteTree(HuffmanNode *node);
};

#endif // __HUFFMAN_TREE_H__