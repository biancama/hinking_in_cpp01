//
// Created by Massimo Biancalani on 2019-02-23.
//
using namespace std;
#ifndef THINKING_IN_CPP01_GENERAL_H
#define THINKING_IN_CPP01_GENERAL_H

unsigned int countWordsInAFile(const string & absoluteFileName);
unsigned int countOccurrenceInAFile(const string & filename, const string & word);
void printFileLineBackward(const string & filename);
void concatenateAllLinesInAString(const string & filename, string & result);
#endif //THINKING_IN_CPP01_GENERAL_H
