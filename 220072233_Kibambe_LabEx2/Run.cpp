#include "Page.hpp"
#include "APM11A1Encryptor.hpp"
#include "AdvancedAPM11A1Encryptor.hpp"
#include "PageManager.hpp"
#include <iostream>

using namespace std;

void main() {
	// get key from user.
	int key;
	cout << "Enter Key : ";
	cin >> key;

	// create objects
	PageManager pageManager;
	Page page = pageManager.loadPageFromFile("Encrypt.txt");

	APM11A1Encryptor encryptor;
	encryptor.setKey(key);
	// encrypt using caeser the page and write to file.
	Page pageCaesar = encryptor.encryptPage(page);
	pageManager.writePageToFile("encrypt1.txt", pageCaesar);
	// encrypt using exclusive-or the page and write to file.
	AdvancedAPM11A1Encryptor advancedEnc;
	Page pageExOr = advancedEnc.encryptPage(page);
	pageManager.writePageToFile("encrypt2.txt", pageExOr);
}