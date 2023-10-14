#include "HuffmanTree.h"

HuffmanTree::HuffmanTree(const std::unordered_map<char, int> &frequencies)
{
  this->buildTree(frequencies);
}

void HuffmanTree::buildTree(const std::unordered_map<char, int> &frequencies)
{
  std::priority_queue<HuffmanNode *, std::vector<HuffmanNode *>, HuffmanNodeComparator> queue;

  for (auto &pair : frequencies)
  {
    HuffmanNode *node = new HuffmanNode(pair.second, pair.first);
    queue.push(node);
  }

  while (queue.size() > 1)
  {
    HuffmanNode *left = queue.top();
    queue.pop();
    HuffmanNode *right = queue.top();
    queue.pop();

    HuffmanNode *parent = new HuffmanNode(left->getValue() + right->getValue(), '\0', left, right);
    queue.push(parent);
  }

  this->root = queue.top();
}

std::unordered_map<char, std::string> HuffmanTree::generateCodes()
{
  std::unordered_map<char, std::string> codes;
  this->generateCodes(this->root, codes, "");
  return codes;
}

void HuffmanTree::generateCodes(HuffmanNode *node, std::unordered_map<char, std::string> &codes, std::string code)
{
  if (node->getLeft() == nullptr && node->getRight() == nullptr)
  {
    codes[node->getCharacter()] = code;
    return;
  }

  this->generateCodes(node->getLeft(), codes, code + "0");
  this->generateCodes(node->getRight(), codes, code + "1");
}

std::string HuffmanTree::encode(const std::string &message)
{
  std::unordered_map<char, std::string> codes = this->generateCodes();
  std::string encodedMessage = "";

  for (char character : message)
  {
    encodedMessage += codes[character];
  }

  return encodedMessage;
}

HuffmanTree::~HuffmanTree()
{
  this->deleteTree(this->root);
}

void HuffmanTree::deleteTree(HuffmanNode *node)
{
  if (node == nullptr)
  {
    return;
  }

  this->deleteTree(node->getLeft());
  this->deleteTree(node->getRight());
  delete node;
}