
class Node {
private:
  Node* left;
  Node* right;
  int count;
  char character;
  bool valid;
public:
  Node(int c, char ch);
  Node(int c);
  void setLeft(Node* l);
  void setRight(Node* r);
  bool isValid() const;
  int getCount() const;
  char getCharacter() const;
  bool operator<(const Node& next) const;
};
