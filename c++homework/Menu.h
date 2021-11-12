#pragma once
using namespace std;

class Menu {
	string menu;
	string options[10];
	int optionIndex;

public:
	Menu() { optionIndex = 0; };
	void registerMenu(string name);
	void registerOption(string selectItem);
	void printMenuObject();
	int selectOption(int option);
	void printSelectOption(int returned);
};