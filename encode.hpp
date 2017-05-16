#include <string>
#include <iostream>

class Node {
private:
  const Node* left;
  const Node* right;
  int count;
  char character;
  bool valid;
  void printTree(std::string s) const;
public:
  Node(int c, char ch);
  Node(int c);
  ~Node();
  void setLeft(const Node* l);
  void setRight(const Node* r);
  bool isValid() const;
  int getCount() const;
  char getCharacter() const;
  bool operator<(const Node& next) const;
  void printTree() const;
};

class CompareNode {
public:
  bool operator() (Node* left, Node* right) {
    return *right < *left;
  }
  
};
