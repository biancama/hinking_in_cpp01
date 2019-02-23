#include <string>
#include <fstream>

using namespace std;
unsigned int countWordsInAFile(const string & absoluteFileName) {
    unsigned int result = 0;
    ifstream inputFile(absoluteFileName);
    string s;
    while (inputFile >> s) {
        result++;
    }

    return result;
}

