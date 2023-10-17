#include "HuffmanTree.h"

HuffmanTree::HuffmanTree(const std::map<char, int> &frequencies)
{
  this->buildTree(frequencies);
}

void HuffmanTree::buildTree(const std::map<char, int> &frequencies)
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

std::map<char, std::string> HuffmanTree::generateCodes()
{
  std::map<char, std::string> codes;
  this->generateCodes(this->root, codes, "");
  return codes;
}

void HuffmanTree::generateCodes(HuffmanNode *node, std::map<char, std::string> &codes, std::string code)
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
  std::map<char, std::string> codes = this->generateCodes();
  std::string encodedMessage = "";

  for (char character : message)
  {
    std::string toWrite = codes[character];
    if (toWrite.size() % 8 != 0)
    {
      toWrite += std::string(8 - toWrite.size() % 8, '0');
    }
    encodedMessage += toWrite;
  }

  return encodedMessage;
}

std::string HuffmanTree::decode(const std::string &encodedMessage)
{
  std::string decodedMessage = "";
  HuffmanNode *currentNode = this->root;

  std::map<char, std::string> codes = this->generateCodes();

  for (int i = 0; i < encodedMessage.size(); i += 8)
  {
    std::string byte = encodedMessage.substr(i, 8);
    for (int j = 0; j < byte.size(); j++)
    {
      if (byte[j] == '0')
      {
        currentNode = currentNode->getLeft();
      }
      else
      {
        currentNode = currentNode->getRight();
      }

      if (currentNode->getLeft() == nullptr && currentNode->getRight() == nullptr)
      {
        decodedMessage += currentNode->getCharacter();
        currentNode = this->root;
        break;
      }
    }
  }

  return decodedMessage;
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