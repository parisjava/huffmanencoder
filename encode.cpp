#include "encode.hpp"

Node::Node(int c, char ch) : count(c), character(ch), valid(true) {
  left = nullptr;
  right = nullptr;
}

Node::Node(int c) : count(c), character('\0'), valid(false) {
  left = nullptr;
  right = nullptr;
}

void Node::setLeft(Node* l) {
  left = l;
}

void Node::setRight(Node* r) {
  right = r;
}

bool Node::isValid() {
  return valid;
}

int Node::getCount() {
  return count;
}

char Node::getCharacter() {
  return character;
}

bool Node::operator<(Node& node) {
  return (count < node.count);
}
