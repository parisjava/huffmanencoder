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

void compress(std::string input, std::string output, std::string code[256]) {
  std::ifstream file;
  std::ofstream out;
  file.open(input);
  out.open(output);
  char characters[100];
  while (!file.eof()) {
    file.read(characters, 100);
    for (int x = 0; x < file.gcount(); x++) {
      outputCompress(out, characters[x], code);
    }
    
  }
  file.close();
  out.close();
}

void outputCompress(std::ofstream& output, char character,
		    std::string code[256]) {
  static std::string result = "";
  //std::cout << code[(int)character]<< " " ;
  for (unsigned int x = 0; x< code[(int)character].length(); x++) {
    result += code[(int)character][x];
    if (result.length() == 8) {
      printOut(output, result);
      result = "";
    }
  }
  
}

void printOut(std::ofstream& output, std::string code) {
  char character = 0;
  for (unsigned int x = 0; x < code.length(); x++) {
    character = character << 1;
    int val = 1;
    if (code[x] == 0) {
      val = 0;
    }
    character += val;
  }
  output.put(character);
}
