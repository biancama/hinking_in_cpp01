#include <iostream>
#include "general.h"
using namespace std;

int main() {
    //cout << "Hello World"<< endl;
    //<< countWordsInAFile("/Users/massimo.biancalani/Adempiere.properties") << endl;
    cout << countOccurrenceInAFile("/Users/massimo.biancalani/Adempiere.properties", "#Adempiere") << endl;
}