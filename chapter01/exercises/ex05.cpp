#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
void printFileLineBackward(const string & filename) {
    ifstream input_file(filename);
    string line;
    vector<string> lines;

    while(getline(input_file, line)) {
        lines.push_back(line);
    }

    for (int i = lines.size(); i >=0; --i) {
        cout << lines[i] << endl;
    }
}
