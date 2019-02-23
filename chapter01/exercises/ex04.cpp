#include <fstream>
#include <string>

using namespace std;

unsigned int countOccurrenceInAFile(const string & filename, const string & word) {
   ifstream inputFile(filename);
   unsigned int result = 0;
   string s;
   while (inputFile >> s) {
       if (s == word) {
           result++;
       }
   }
   return result;
}
