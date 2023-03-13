#include "APM11A1Encryptor.hpp"
#include "Page.hpp"
#include <iostream>

char APM11A1Encryptor::encryptACharacter(char character) {
	int ascii_value = (int)character;
	int shifts_value = APM11A1Encryptor::key + ascii_value;
	//if key is double or triple 127 for ascii values.
	if (shifts_value > 127) { shifts_value %= 127; }
	char encryptChar = char(shifts_value);
	return encryptChar;
}
// receives a page, encrypts it and returns the encrypted page
Page APM11A1Encryptor::encryptPage(Page page) {
	string sentence;
	Page new_page;
	for (int indx = 0; indx < page.getNumberOfSentences(); indx++) {
		sentence = page.getSentenceAt(indx);
		string new_sentence = "";
		for (int position = 0; position < sentence.length(); position++) {
			new_sentence += encryptACharacter(sentence[position]);
		}
		new_page.addSentence(new_sentence);
	}
	return new_page;
}
// set key, get key from user. 
void APM11A1Encryptor::setKey(int new_key) { APM11A1Encryptor::key = new_key; }