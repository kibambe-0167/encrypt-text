#include "Page.hpp"

Page::Page() { cSentenceCounter = 0; }

void Page::addSentence(string sentence) {
	cSentence[cSentenceCounter] = sentence;
	cSentenceCounter++;
}

string Page::getSentenceAt(int position) { return cSentence[position]; }

int Page::getNumberOfSentences() {
	return sizeof(cSentence) / sizeof(cSentence[0]);
}