#include <string>
#include <fstream>
#include <iostream>
void readDocument(std::string fileName, int* a);

void compress(std::string input, std::string output,
	      std::string codes[255]);
void outputCompress(std::ofstream& output, char character,
		    std::string code[255]);

void printOut(std::ofstream& output , std::string code);
