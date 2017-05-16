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
  delete right;
}

void Node::setLeft(Node* l) {
  left = l;
}

void Node::setRight(Node* r) {
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
