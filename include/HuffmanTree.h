#ifndef __HUFFMAN_TREE_H__
#define __HUFFMAN_TREE_H__

#include <queue>
#include <unordered_map>
#include <vector>
#include <string>

#include "HuffmanNode.h"

class HuffmanTree
{
private:
  HuffmanNode *root;

public:
  HuffmanTree(const std::unordered_map<char, int> &frequencies);
  ~HuffmanTree();
  void buildTree(const std::unordered_map<char, int> &frequencies);
  std::unordered_map<char, std::string> generateCodes();
  std::string encode(const std::string &message);

private:
  void generateCodes(HuffmanNode *node, std::unordered_map<char, std::string> &codes, std::string code);
  void deleteTree(HuffmanNode *node);
};

#endif // __HUFFMAN_TREE_H__