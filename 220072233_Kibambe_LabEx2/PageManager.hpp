#pragma once
#include "Page.hpp"
#include <iostream>;
#include <string>;
#include <fstream>;
using namespace std;

class PageManager {
public:
	Page loadPageFromFile(string);
	void writePageToFile(string, Page);
};