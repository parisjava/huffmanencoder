#include "encode.hpp"

Node::Node(int c, char ch) : count(c), character(ch), valid(true) {
  left = nullptr;
  right = nullptr;
}

Node::Node(int c) : count(c), character('\0'), valid(false) {
  left = nullptr;
  right = nullptr;
}

Node::~Node() {
  delete left;
  left = nullptr;
  delete right;
  right = nullptr;
}

void Node::setLeft(const Node* l) {
  left = l;
}

void Node::setRight(const Node* r) {
  right = r;
}

bool Node::isValid() const {
  return valid;
}

int Node::getCount() const {
  return count;
}

char Node::getCharacter() const {
  return character;
}

bool Node::operator<(const Node& node) const {
  return (count < node.getCount());
}

void Node::printTree() const {
  printTree("");
}

void Node::printTree(std::string s) const {
  if (valid) {
    std::cout << character << " : " << s << '\n';
    return;
  }
  left->printTree(s + "1");
  right->printTree(s + "0");
}

void Node::fillCode(std::string codes[255]) const {
  fillCode(codes, "");
}

void Node::fillCode(std::string codes[255], std::string s) const {
  if (valid) {
    codes[(int)character] = s;
    return;
  }
  left->fillCode(codes, s + "1");
  right->fillCode(codes, s + "0");
}
