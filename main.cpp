#include <iostream>
#include "encode.hpp"
#include <queue>
#include <functional>
#include <vector>
int main(void) {
  std::priority_queue<Node*, std::vector<Node*>, CompareNode> p;
  Node *a = new Node(10, 'a');
  Node *b = new Node(10, 'b');
  a->setLeft(b);
  p.push(a);
  p.push(b);
  while (p.size() > 1) {
    Node* left = p.top();
    p.pop();
    Node* right = p.top();
    p.pop();
    Node* tree = new Node(left->getCount() + right->getCount());
    tree->setLeft(left);
    tree->setRight(right);
    p.push(tree);
  }
  Node* tree = p.top();
  p.pop();
  delete tree;
  return 0;
}
