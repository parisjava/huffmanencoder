
class Node {
private:
  const Node* left;
  const Node* right;
  int count;
  char character;
  bool valid;
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
};

class CompareNode {
public:
  bool operator() (Node* left, Node* right) {
    return *left < *right;
  }
  
};
