/*#pragma once
#include <iostream>
#include <stdlib.h>
#include "Menu.h"

void Menu::registerMenuName(string name) {
	this->menu = name;
	cout << '\n' << "'" << this->menu << "' 메뉴객체가 생성되었습니다" << endl;
}

void Menu::registerOption(string selectItem) {
	this->options[this->optionIndex] = selectItem;
	cout << '\n' << "'" << this->options[this->optionIndex] << "' 선택항목이 생성되었습니다" << endl;
	this->optionIndex++;
}

void Menu::printMenuObject() {
	cout << '\n' << this->menu << endl;
	for (int i = 0; i < this->optionIndex; i++) {
		cout << '\n' << "[" << i + 1 << "]" << this->options[i];
	}
	cout << '\n';
}

int Menu::selectOption(int option) {
	if (option >= 1 && option < this->optionIndex + 1) {
		return option;
	}
	else {
		return -1;
	}
}

void Menu::printSelectOption(int option) {
	if (option == -1) {
		cout << '\n' << "메뉴객체가 -1 을 반환했습니다. 항목 선택값이 올바른 범위가 아님을 의미합니다." << endl;
	}
	else {
		cout << '\n' << "메뉴객체가 반환한 번호는 " << option << " 입니다." << endl;
		cout << '\n' << "선택된 항목의 내용: '" << this->options[option - 1] << "'" << endl;
	}
} */