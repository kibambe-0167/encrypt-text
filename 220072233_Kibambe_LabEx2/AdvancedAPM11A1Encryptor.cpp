#include "AdvancedAPM11A1Encryptor.hpp"
#include "APM11A1Encryptor.hpp"
#include "Page.hpp"
#include <iostream>;
using namespace std;

//encrypt the character, change to ascii value, xor with key, return the new character
char AdvancedAPM11A1Encryptor::encryptACharacter(char character) {
	int ascii_value = int(character);
	char new_char = ascii_value ^ APM11A1Encryptor::key;
	return new_char;
}
// encrypt the page
Page AdvancedAPM11A1Encryptor::encryptPage(Page page) {
	string sentence; Page new_page;
	for (int indx = 0; indx < page.getNumberOfSentences(); indx++) {
		sentence = page.getSentenceAt(indx);
		string encryptSentence = "";
		for (int position = 0; position < sentence.length(); position++) {
			encryptSentence += encryptACharacter(sentence[position]);
		}
		new_page.addSentence(encryptSentence);
	}
	return new_page;
}