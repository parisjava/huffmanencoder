#include "input.hpp"

void readDocument(std::string fileName, int* a) {
  std::ifstream file;
  file.open(fileName);
  char characters[100];
  while (!file.eof()) {
    file.read(characters, 100);
    for (int x = 0; x < file.gcount(); x++) {
      a[(int)characters[x]] += 1;
    }
    
  }
  file.close();
}
