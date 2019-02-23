#include <iostream>
#include "general.h"
using namespace std;

int main() {
    //cout << "Hello World"<< endl;
    //<< countWordsInAFile("/Users/massimo.biancalani/Adempiere.properties") << endl;
    //printFileLineBackward("/Users/massimo.biancalani/Adempiere.properties");
    string s;

    concatenateAllLinesInAString("/Users/massimo.biancalani/Adempiere.properties", s);

    cout << s << endl;

}