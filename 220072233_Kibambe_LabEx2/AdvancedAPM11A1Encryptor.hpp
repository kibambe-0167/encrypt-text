#pragma once
#include "Page.hpp"
#include "APM11A1Encryptor.hpp";
#include <iostream>;
using namespace std;

class AdvancedAPM11A1Encryptor : APM11A1Encryptor {
public:
	char encryptACharacter(char);
	Page encryptPage(Page);
};