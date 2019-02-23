#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
void concatenateAllLinesInAString(const string & filename, string & result) {
    ifstream input_file(filename);
    string line;
    vector<string> lines;

    while(getline(input_file, line)) {
        result += line;
    }

}
