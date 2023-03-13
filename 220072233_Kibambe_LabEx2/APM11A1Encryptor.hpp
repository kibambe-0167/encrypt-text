#pragma once
#include "Page.hpp"
#include <iostream>;
using namespace std;

class APM11A1Encryptor
{
protected:
	int key;
public:
	char encryptACharacter(char);
	Page encryptPage(Page);
	void setKey(int);
};