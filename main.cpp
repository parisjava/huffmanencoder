#include <iostream>
#include "encode.hpp"
#include <queue>
#include <functional>
#include <vector>
int main(void) {
  std::priority_queue<Node, std::vector<Node>, std::less<Node> > p;
  Node a(10, 'a');
  Node b(10, 'b');
  p.push(a);
  p.push(b);

  while (p.size() != 1) {
    Node a = p.top();
    p.pop();
    Node b = p.top();
    p.pop();
    Node tree(a.getCount() + b.getCount());
    //tree.setLeft(&a);
    //tree.setRight(&b);
    p.push(tree);
  }
  
  return 0;
}
