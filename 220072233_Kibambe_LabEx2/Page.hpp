#pragma once
#include <iostream>
#include <string>

using namespace std;

class Page {
private:
	string cSentence[34];
	int cSentenceCounter;

public:
	Page();
	void addSentence(string);
	string getSentenceAt(int);
	int getNumberOfSentences();
};