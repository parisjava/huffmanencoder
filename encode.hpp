
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
  bool isValid();
  int getCount();
  char getCharacter();
  bool operator<(Node& next);
};
