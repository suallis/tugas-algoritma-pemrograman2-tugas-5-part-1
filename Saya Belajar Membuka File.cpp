#include <iostream>
#include <fstream>
using namespace std;
 
int main () {
  ofstream file;
  file.open ("WritingFile.txt");
  file << "Saya Belajar Membuka File ";
  file.close();
  return 0;
}
