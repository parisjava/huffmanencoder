#include <iostream>
#include "encode.hpp"
#include <queue>
#include <functional>
#include <vector>
#include "input.hpp"
int main(void) {
  
  std::priority_queue<Node*, std::vector<Node*>, CompareNode > p;
  int characters[255] = {};
  /*for (int x = 48; x < 58; x++) {
    characters[x] = x;
  }
  characters[48] = 2000;*/
  readDocument("test.txt", characters);
  for (int x = 0; x< 255; x++) {
    if (characters[x] == 0) {
      continue;
    }
    p.push(new Node(characters[x], x));
  }
  //std::cout << p.top()->getCharacter() << '\n';
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
  tree->printTree();
  delete tree;
  return 0;
}
