#include "PageManager.hpp"
#include "Page.hpp"
#include <iostream>;
#include <string>;
using namespace std;

// load texts from a file and write into a page.
Page PageManager::loadPageFromFile(string fileName) {
	Page new_page; // create a new page.
	ifstream file_obj;
	file_obj.open(fileName);
	string sentence; // loop over all the lines in the file and add to page.
	while (getline(file_obj, sentence)) { new_page.addSentence(sentence); }
	file_obj.close();
	return new_page; // return the page.
}
// receive a page and write it into a file.
void PageManager::writePageToFile(string fileName, Page page) {
	ofstream file_obj;
	file_obj.open(fileName); // loop over all the pages.
	for (int indx = 0; indx < page.getNumberOfSentences(); indx++) {
		file_obj << page.getSentenceAt(indx) << endl;
	}
	file_obj.close();// close the file.
}